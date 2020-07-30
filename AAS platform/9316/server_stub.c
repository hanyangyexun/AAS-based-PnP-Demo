/* Aggregating Server for AutomationML / OPC UA Hybrid Information Models
 * (c) 2017 Julius Pfrommer, Fraunhofer IOSB */

#define _CRT_SECURE_NO_WARNINGS

#include <signal.h>
#include <stdio.h> // for sscanf

#include "open62541.h"
#include "queue.h"
#include "generated_nodeset.h"
#include "iosb_serverinfo.h"

const UA_UInt16 nsIndexAML = 2;
const UA_UInt16 nsIndexFile = 1;

bool blockWrite = false; /* don't write back changes coming from the remote source */

static UA_StatusCode
parseGuid(char *sid, UA_Guid *guid) {
    if(strlen(sid) != 36) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Guid needs to be of the form \"00000000-0000-0000-0000-000000000000\"");
        return UA_STATUSCODE_BADINTERNALERROR;
    }
    guid->data1 = strtoull(sid, NULL, 16);
    guid->data2 = strtoull(&sid[9], NULL, 16);
    guid->data3 = strtoull(&sid[14], NULL, 16);
    UA_Int16 data4_1 = strtoull(&sid[19], NULL, 16);
    guid->data4[0] = data4_1 >> 8;
    guid->data4[1] = data4_1;
    UA_Int64 data4_2 = strtoull(&sid[24], NULL, 16);
    guid->data4[2] = data4_2 >> 40;
    guid->data4[3] = data4_2 >> 32;
    guid->data4[4] = data4_2 >> 24;
    guid->data4[5] = data4_2 >> 16;
    guid->data4[6] = data4_2 >> 8;
    guid->data4[7] = data4_2;
    return UA_STATUSCODE_GOOD;
}

/* Parse NodeId from String */
static UA_StatusCode
parseNodeId(UA_String str, UA_NodeId *id) {
	/* zero-terminated string */
    UA_STACKARRAY(char, s, str.length + 1);
	memcpy(s, str.data, str.length);
	s[str.length] = 0;

	UA_NodeId_init(id);

	/* Int identifier */
	if(sscanf(s, "ns=%hu;i=%u", &id->namespaceIndex, &id->identifier.numeric) == 2 ||
       sscanf(s, "ns=%hu,i=%u", &id->namespaceIndex, &id->identifier.numeric) == 2 ||
       sscanf(s, "i=%u", &id->identifier.numeric) == 1) {
		id->identifierType = UA_NODEIDTYPE_NUMERIC;
		return UA_STATUSCODE_GOOD;
	}

    /* String identifier */
    UA_STACKARRAY(char, sid, str.length);
	if(sscanf(s, "ns=%hu;s=%[^\n]", &id->namespaceIndex, sid) == 2 ||
       sscanf(s, "ns=%hu,s=%[^\n]", &id->namespaceIndex, sid) == 2 ||
       sscanf(s, "s=%s", sid) == 1) {
		id->identifierType = UA_NODEIDTYPE_STRING;
		id->identifier.string = UA_String_fromChars(sid);
		return UA_STATUSCODE_GOOD;
    }

    /* ByteString idenifier */
	if(sscanf(s, "ns=%hu;b=%[^\n]", &id->namespaceIndex, sid) == 2 ||
       sscanf(s, "ns=%hu,b=%[^\n]", &id->namespaceIndex, sid) == 2 ||
       sscanf(s, "b=%s", sid) == 1) {
		id->identifierType = UA_NODEIDTYPE_BYTESTRING;
		id->identifier.string = UA_String_fromChars(sid);
		return UA_STATUSCODE_GOOD;
    }

    /* Guid idenifier */
	if(sscanf(s, "ns=%hu;g=%s", &id->namespaceIndex, sid) == 2 ||
       sscanf(s, "ns=%hu,g=%s", &id->namespaceIndex, sid) == 2 ||
       sscanf(s, "g=%s", sid) == 1) {
        UA_StatusCode retval = parseGuid(sid, &id->identifier.guid);
        if(retval != UA_STATUSCODE_GOOD)
            return retval;
		id->identifierType = UA_NODEIDTYPE_GUID;
		return UA_STATUSCODE_GOOD;
    }

	return UA_STATUSCODE_BADINTERNALERROR;
}

/* Client List */
typedef struct NamedClient {
    LIST_ENTRY(NamedClient) next;
    UA_Client *client;
    UA_String id;
    UA_String discoveryUri;
    UA_UInt32 subscriptionId;
} NamedClient;

LIST_HEAD(, NamedClient) clients = { NULL };

static NamedClient *
findClient(UA_String *id) {
    NamedClient *client;
    LIST_FOREACH(client, &clients, next) {
        if(UA_String_equal(id, &client->id))
            break;
    }
    return client;
}

static void
removeClients() {
    NamedClient *client, *tmp;
    LIST_FOREACH_SAFE(client, &clients, next, tmp) {
        UA_Client_disconnect(client->client);
        UA_Client_delete(client->client);
        UA_String_deleteMembers(&client->id);
        UA_String_deleteMembers(&client->discoveryUri);
        LIST_REMOVE(client, next);
        free(client);
    }
}

/* Monitored Variable List */
typedef struct MonitoredVariable {
    LIST_ENTRY(MonitoredVariable) next;
    NamedClient *client;
    UA_UInt32 monitoredItemId;
    UA_NodeId localVariableId;
    UA_NodeId remoteVariableId;
} MonitoredVariable;

LIST_HEAD(, MonitoredVariable) monitoredVariables = { NULL };

static void
removeMonitoredVariables() {
    MonitoredVariable *var, *tmp;
    LIST_FOREACH_SAFE(var, &monitoredVariables, next, tmp) {
        UA_NodeId_deleteMembers(&var->localVariableId);
        UA_NodeId_deleteMembers(&var->remoteVariableId);
        LIST_REMOVE(var, next);
        free(var);
    }
}

static void
addNamedClient(UA_Server *server, const UA_NodeId *serverObject) {
    // get the id 
    UA_BrowsePath id_bp;
    UA_BrowsePath_init(&id_bp);
    id_bp.startingNode = *serverObject;
    UA_RelativePathElement id_rpe;
    UA_RelativePathElement_init(&id_rpe);
    id_rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY);
    id_rpe.targetName = UA_QUALIFIEDNAME(nsIndexFile, "ID");
    id_bp.relativePath.elementsSize = 1;
    id_bp.relativePath.elements = &id_rpe;
        
    UA_BrowsePathResult id_bpr = UA_Server_translateBrowsePathToNodeIds(server, &id_bp);
    if(id_bpr.targetsSize < 1) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "no id of the OPCUA-Server found");
        UA_BrowsePathResult_deleteMembers(&id_bpr);
        return;
    }
        
    UA_Variant id;
    UA_Server_readValue(server, id_bpr.targets[0].targetId.nodeId, &id);
    UA_BrowsePathResult_deleteMembers(&id_bpr);
        
    // get the discoveryURL of the server
    UA_BrowsePath uri_bp;
    UA_BrowsePath_init(&uri_bp);
    uri_bp.startingNode = *serverObject;
    UA_RelativePathElement uri_rpe;
    UA_RelativePathElement_init(&uri_rpe);
    uri_rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    uri_rpe.targetName = UA_QUALIFIEDNAME(nsIndexFile, "DiscoveryURL");
    uri_bp.relativePath.elementsSize = 1;
    uri_bp.relativePath.elements = &uri_rpe;
        
    UA_BrowsePathResult uri_bpr = UA_Server_translateBrowsePathToNodeIds(server, &uri_bp);
    if(uri_bpr.targetsSize < 1) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "no uri of the OPCUA-Server found");
        UA_BrowsePathResult_deleteMembers(&uri_bpr);
        UA_Variant_deleteMembers(&id);
        return;
    }
        
    UA_Variant uri;
    UA_Server_readValue(server, uri_bpr.targets[0].targetId.nodeId, &uri);
    UA_BrowsePathResult_deleteMembers(&uri_bpr);
        
    UA_String *ids = id.data;
    UA_String *uris = uri.data;
        
    if(UA_Variant_hasScalarType(&id, &UA_TYPES[UA_TYPES_STRING]) &&
       UA_Variant_hasScalarType(&uri, &UA_TYPES[UA_TYPES_STRING]) &&
       ids->length > 0 && uris->length > 0) {
                
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "add server %.*s with id %.*s",
                    uris->length, uris->data, ids->length, ids->data);
            
        // create and connect the client
        NamedClient *nc = malloc(sizeof(NamedClient));
        UA_String_copy(ids, &nc->id);
        nc->discoveryUri.data = malloc(sizeof(UA_Byte)*(uris->length + 1)); /* make a zero-terminated copy */
        nc->discoveryUri.length = uris->length;
        memcpy(nc->discoveryUri.data, uris->data, uris->length);
        nc->discoveryUri.data[uris->length] = 0;
        nc->client = UA_Client_new(UA_ClientConfig_default);
        UA_Client_connect(nc->client, (char*)nc->discoveryUri.data);

        // create a subscription
        nc->subscriptionId = 0;
        
        UA_CreateSubscriptionRequest req = UA_CreateSubscriptionRequest_default();
        req.requestedPublishingInterval = 100.0;
        UA_CreateSubscriptionResponse res =
            UA_Client_Subscriptions_create(nc->client, req, NULL, NULL, NULL);
        
        if(res.responseHeader.serviceResult != UA_STATUSCODE_GOOD) {
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "could not create a subscription");
        } else {
            nc->subscriptionId = res.subscriptionId;
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                        "Created a subscription for the server");
            LIST_INSERT_HEAD(&clients, nc, next);
        }
        
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "format of server description not valid");	
    }
        
    UA_Variant_deleteMembers(&id);
    UA_Variant_deleteMembers(&uri);
}

/* Find variables in the information model that describe an OPC UA endpoint */
static void
findServerVariables(UA_Server *server) {
    // find the nodeid of the opc ua server type
    UA_BrowsePath bp;
    UA_BrowsePath_init(&bp);
    bp.startingNode = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTTYPESFOLDER);
    UA_RelativePathElement rpe[5];
    for(size_t i = 0; i < 5; i++)
        UA_RelativePathElement_init(&rpe[i]);
	rpe[0].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
	rpe[0].targetName = UA_QUALIFIEDNAME(nsIndexAML, "AutomationMLLibraries");
	rpe[1].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
	rpe[1].targetName = UA_QUALIFIEDNAME(nsIndexAML, "RoleClassLibs");
	rpe[2].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
	rpe[2].targetName = UA_QUALIFIEDNAME(nsIndexFile, "DataVariableRoleClassLib");
	rpe[3].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
	rpe[3].targetName = UA_QUALIFIEDNAME(nsIndexFile, "DataSource");
	rpe[4].referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE);
	rpe[4].targetName = UA_QUALIFIEDNAME(nsIndexFile, "OPCUA-Server");
	bp.relativePath.elementsSize = 5;
    bp.relativePath.elements = rpe;
        
    UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);
    if(bpr.targetsSize < 1) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "OPC UA Server ObjectType undefined");
        return;
    }

    UA_BrowseDescription bd;
    UA_BrowseDescription_init(&bd);
    bd.browseDirection = UA_BROWSEDIRECTION_INVERSE;
    //bd.referenceTypeId = UA_NODEID_NUMERIC(nsIndexAML, 4002); // hasamlrolerequirement
    bd.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_NONHIERARCHICALREFERENCES);
    bd.includeSubtypes = true;
    bd.nodeId = bpr.targets[0].targetId.nodeId;
    //bd.nodeId = UA_NODEID_NUMERIC(nsIndexFile, 8174); // OPCUA-Server
    bd.resultMask = UA_BROWSERESULTMASK_BROWSENAME;
    UA_BrowseResult br = UA_Server_browse(server, 0, &bd);
    
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "%u OPCUA-Servers found", br.referencesSize);

    for(size_t i = 0; i < br.referencesSize; i++)
        addNamedClient(server, &br.references[i].nodeId.nodeId);
    
    UA_BrowseResult_deleteMembers(&br);
    UA_BrowsePathResult_deleteMembers(&bpr);
}

static void
handleLocalWrite(UA_Server *server, const UA_NodeId *sessionId,
                    void *sessionContext, const UA_NodeId *nodeId,
                    void *nodeContext, const UA_NumericRange *range,
                    const UA_DataValue *data) {
    if(blockWrite)
        return;
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "local change to a variable, writing into the remote source");
    MonitoredVariable *mv = (MonitoredVariable*)nodeContext;
    UA_StatusCode retval = UA_Client_writeValueAttribute(mv->client->client, mv->remoteVariableId, &data->value);
	if(retval != UA_STATUSCODE_GOOD)
		UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Remote variable could not be set with statuscode %s", UA_StatusCode_name(retval));
}

UA_Server *server = NULL;

static void
handleDataChangeNotification(UA_Client *client, UA_UInt32 subId, void *subContext,
                             UA_UInt32 monId, void *monContext, UA_DataValue *value) {
    MonitoredVariable *mv = (MonitoredVariable*)monContext;
    if(value->status == UA_STATUSCODE_GOOD && value->hasValue) {
        blockWrite = true;
        UA_StatusCode retval = UA_Server_writeValue(server, mv->localVariableId, value->value);
        blockWrite = false;
        if(retval != UA_STATUSCODE_GOOD)
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                        "Value from DataChange notification could not be set with statuscode "
                        "%s", UA_StatusCode_name(retval));
    }
}

static void
addMonitoredVariable(UA_Server *server, NamedClient *client,
                     UA_NodeId *localId, UA_NodeId *remoteId) {
    MonitoredVariable *mv = malloc(sizeof(MonitoredVariable));
    mv->client = client;
    UA_NodeId_copy(localId, &mv->localVariableId);
    UA_NodeId_copy(remoteId, &mv->remoteVariableId);
    mv->monitoredItemId = 0;
    // create the monitored item
    
    UA_MonitoredItemCreateRequest req = UA_MonitoredItemCreateRequest_default(*remoteId);
    
    UA_MonitoredItemCreateResult res =
    UA_Client_MonitoredItems_createDataChange(client->client, client->subscriptionId,
                                              UA_TIMESTAMPSTORETURN_BOTH, req, mv,
                                              handleDataChangeNotification, NULL);
    
    UA_StatusCode retval = res.statusCode;
    if(retval == UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Added MonitoredItem to aggregate the variable");
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Could not create a MonitoredItem to aggregate the variable with status code %s",
                    UA_StatusCode_name(retval));
        UA_NodeId_deleteMembers(&mv->localVariableId);
        UA_NodeId_deleteMembers(&mv->remoteVariableId);
        free(mv);
        return;
    }
    
    mv->monitoredItemId = res.monitoredItemId;
    
    UA_Server_setNodeContext(server, *localId, mv);

    // create the local callback to set the value in the remote variable
    UA_ValueCallback callback ;
    callback.onRead = NULL;
    callback.onWrite = handleLocalWrite;
    UA_Server_setVariableNode_valueCallback(server, *localId, callback);

    LIST_INSERT_HEAD(&monitoredVariables, mv, next);
}

static void
processDataSourceVariable(UA_Server *server, UA_String *remoteIdString,
                          UA_NodeId *localId, UA_NodeId *remoteId) {
    // get the refdatasource to find the correct server
    UA_BrowsePath bp;
    UA_BrowsePath_init(&bp);
    bp.startingNode = *localId;
    UA_RelativePathElement rpe;
    UA_RelativePathElement_init(&rpe);
    rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
    rpe.targetName = UA_QUALIFIEDNAME(nsIndexFile, "RefDataSource");
    bp.relativePath.elementsSize = 1;
    bp.relativePath.elements = &rpe;
    UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);
    if(bpr.targetsSize < 1) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "the variable has no refdatasource");
        UA_BrowsePathResult_deleteMembers(&bpr);
        return;
    }
        
    // read the value of the refdatasource
    UA_Variant refdatasource;
    UA_Server_readValue(server, bpr.targets[0].targetId.nodeId, &refdatasource);
    UA_BrowsePathResult_deleteMembers(&bpr);
    if(!UA_Variant_hasScalarType(&refdatasource, &UA_TYPES[UA_TYPES_STRING])) {
        UA_Variant_deleteMembers(&refdatasource);
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "refdatasource identifier not found");
        return;
    }

    // get the client and add the monitoreditem
    UA_String *serverId = refdatasource.data;
    NamedClient *client = findClient(serverId);
    if(client) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Found external variable with a source as NodeId %.*s on %.*s",
                    remoteIdString->length, remoteIdString->data,
                    client->discoveryUri.length, client->discoveryUri.data);
        addMonitoredVariable(server, client, localId, remoteId);
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Server with Id %.*s not found\n",
                    serverId->length, serverId->data);
    }
    UA_Variant_deleteMembers(&refdatasource);
}

/* Find all variables that are defined with an extern value source */
static void
getDataSourceVariables(UA_Server *server) {
    // browse all AMLVariables called NodeId
    UA_BrowseDescription bd;
    UA_BrowseDescription_init(&bd);
    bd.browseDirection = UA_BROWSEDIRECTION_INVERSE;
    bd.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASTYPEDEFINITION);
    bd.nodeId = UA_NODEID_NUMERIC(nsIndexAML, 3007); // AMLVariableType
    bd.resultMask = UA_BROWSERESULTMASK_BROWSENAME;
    UA_BrowseResult br = UA_Server_browse(server, 0, &bd);

    UA_String name = UA_STRING("NodeId");
    for(size_t i = 0; i < br.referencesSize; i++) {
        if(!UA_String_equal(&br.references[i].browseName.name, &name))
            continue;

        // get the id of the parent node, the actual variable
        UA_BrowseDescription bd2;
        UA_BrowseDescription_init(&bd2);
        bd2.browseDirection = UA_BROWSEDIRECTION_INVERSE;
        bd2.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);
        bd2.nodeId = br.references[i].nodeId.nodeId;
        bd2.resultMask = 0;
        UA_BrowseResult br2 = UA_Server_browse(server, 0, &bd2);
        if(br.referencesSize < 1) {
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "no parent id found");
            continue;
        }
        UA_NodeId *variableId = &br2.references[0].nodeId.nodeId;

        // read the value with the remote id
        UA_Variant value;
        UA_Server_readValue(server, br.references[i].nodeId.nodeId, &value);
        UA_String *id = (UA_String*)value.data;
        if(value.type != &UA_TYPES[UA_TYPES_STRING] ||
           !UA_Variant_isScalar(&value) || id->length == 0) {
            UA_BrowseResult_deleteMembers(&br2);
            continue;
        }

        // parse the id
        UA_NodeId remoteId = UA_NODEID_NULL;
        UA_StatusCode retval = parseNodeId(*id, &remoteId);
        if(retval == UA_STATUSCODE_GOOD)
            processDataSourceVariable(server, id, variableId, &remoteId);
        else
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                        "Could not parse the nodeid %.*s", id->length, id->data);

        // clean up
        UA_BrowseResult_deleteMembers(&br2);
        UA_Variant_deleteMembers(&value);
        UA_NodeId_deleteMembers(&remoteId);
    }

    UA_BrowseResult_deleteMembers(&br);
}

/* callback from a job with 500ms interval */
static void
runClients(UA_Server *server, void *data) {
	UA_LOG_DEBUG(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Process client");
    NamedClient *client;
    LIST_FOREACH(client, &clients, next)
        UA_Client_runAsync(client->client, 1);
}

UA_Boolean running = true;
static void stopHandler(int sig) {
    running = false;
    removeClients();
    removeMonitoredVariables();
}

int main(int argc, char* argv[]) {
    signal(SIGINT,  stopHandler);
    signal(SIGTERM, stopHandler);

	UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Call: %s [-p portNumber]", argv[0]);
	int port = 16664;
	int portArg = 0;
	for(int i=1; i < argc; i++) {
		if (portArg == 1)
		{
			sscanf (argv[i],"%d",&port);
			portArg = 0;
		}
		else
		{
			if (strcmp(argv[i], "-p") == 0)
			{	
				portArg = 1;
			}
			else
			{
				UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Unknown argument: %s", argv[i]);
			}
		}
	}

    UA_ServerConfig *config = UA_ServerConfig_new_minimal(port, NULL);
	set_serverUrl(config);
    UA_ApplicationDescription_copy(&config->applicationDescription,
                                   &config->endpoints[0].endpointDescription.server);
	server = UA_Server_new(config);

    generated_nodeset(server);
    findServerVariables(server);
    getDataSourceVariables(server);

    // Create jobs to call the client
    UA_Server_addRepeatedCallback(server, runClients, NULL, 100, NULL);

    // Run server
    UA_Server_run(server, &running);

    // Clean up
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return 0;
}
