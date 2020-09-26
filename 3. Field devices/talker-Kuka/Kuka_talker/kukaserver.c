#include <signal.h>
#include "open62541.h"

UA_Boolean running = true;
void signalHandler(int sig) {
    running = false;
}

int main(int argc, char** argv)
{
    signal(SIGINT, signalHandler); /* catch ctrl-c */

    /* Create a server with one network layer listening on port 4840 */
    UA_ServerConfig config = UA_ServerConfig_standard;
    UA_ServerNetworkLayer nl = UA_ServerNetworkLayerTCP(UA_ConnectionConfig_standard, 4841); // AML: opc.tcp://192.168.0.177:4841
    config.networkLayers = &nl;
    config.networkLayersSize = 1;
    UA_Server *server = UA_Server_new(config);

//string start
UA_VariableAttributes attr1;
    UA_VariableAttributes_init(&attr1);
    attr1.displayName = UA_LOCALIZEDTEXT("en_US", "Start Command");
    UA_String myInteger1 = UA_STRING ("1");
    UA_Variant_setScalar(&attr1.value, &myInteger1, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId1 = UA_NODEID_STRING(1, "StartCommand");
    UA_NodeId parentNodeId1 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId1 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType1 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName1 = UA_QUALIFIEDNAME(1, "Start Command");
	
	UA_Server_addVariableNode(server, newNodeId1, parentNodeId1, parentReferenceNodeId1,
                              browseName1, variableType1, attr1, NULL, NULL);
// position X
UA_VariableAttributes attr2;
    UA_VariableAttributes_init(&attr2);
    attr2.displayName = UA_LOCALIZEDTEXT("en_US", "Position Data X");
    UA_String myInteger2 = UA_STRING ("2");
    UA_Variant_setScalar(&attr2.value, &myInteger2, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId2 = UA_NODEID_STRING(1, "PositionDataX");
    UA_NodeId parentNodeId2 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId2 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType2 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName2 = UA_QUALIFIEDNAME(1, "Position Data X");
	
	UA_Server_addVariableNode(server, newNodeId2, parentNodeId2, parentReferenceNodeId2,
                              browseName2, variableType2, attr2, NULL, NULL);

// position Y							  
	UA_VariableAttributes attr3;
    UA_VariableAttributes_init(&attr3);
    attr3.displayName = UA_LOCALIZEDTEXT("en_US", "Position Data Y");
    UA_String myInteger3 = UA_STRING ("2");
    UA_Variant_setScalar(&attr3.value, &myInteger3, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId3 = UA_NODEID_STRING(1, "PositionDataY");
    UA_NodeId parentNodeId3 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId3 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType3 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName3 = UA_QUALIFIEDNAME(1, "Position Data Y");
	
	UA_Server_addVariableNode(server, newNodeId3, parentNodeId3, parentReferenceNodeId3,
                              browseName3, variableType3, attr3, NULL, NULL);

// position Z							  
UA_VariableAttributes attr4;
    UA_VariableAttributes_init(&attr4);
    attr4.displayName = UA_LOCALIZEDTEXT("en_US", "Position Data Z");
    UA_String myInteger4 = UA_STRING ("2");
    UA_Variant_setScalar(&attr4.value, &myInteger4, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId4 = UA_NODEID_STRING(1, "PositionDataZ");
    UA_NodeId parentNodeId4 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId4 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType4 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName4 = UA_QUALIFIEDNAME(1, "Position Data Z");
	
	UA_Server_addVariableNode(server, newNodeId4, parentNodeId4, parentReferenceNodeId4,
                              browseName4, variableType4, attr4, NULL, NULL);
							  
//position A
UA_VariableAttributes attr5;
    UA_VariableAttributes_init(&attr5);
    attr5.displayName = UA_LOCALIZEDTEXT("en_US", "Position Data A");
    UA_String myInteger5 = UA_STRING ("2");
    UA_Variant_setScalar(&attr5.value, &myInteger5, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId5 = UA_NODEID_STRING(1, "PositionDataA");
    UA_NodeId parentNodeId5 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId5 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType5 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName5 = UA_QUALIFIEDNAME(1, "Position Data A");
	
	UA_Server_addVariableNode(server, newNodeId5, parentNodeId5, parentReferenceNodeId5,
                              browseName5, variableType5, attr5, NULL, NULL);
//position B
UA_VariableAttributes attr6;
    UA_VariableAttributes_init(&attr6);
    attr6.displayName = UA_LOCALIZEDTEXT("en_US", "Position Data B");
    UA_String myInteger6 = UA_STRING ("2");
    UA_Variant_setScalar(&attr6.value, &myInteger6, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId6 = UA_NODEID_STRING(1, "PositionDataB");
    UA_NodeId parentNodeId6 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId6 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType6 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName6 = UA_QUALIFIEDNAME(1, "Position Data B");
	
	UA_Server_addVariableNode(server, newNodeId6, parentNodeId6, parentReferenceNodeId6,
                              browseName6, variableType6, attr6, NULL, NULL);
//positoin C
UA_VariableAttributes attr7;
    UA_VariableAttributes_init(&attr7);
    attr7.displayName = UA_LOCALIZEDTEXT("en_US", "Position Data C");
    UA_String myInteger7 = UA_STRING ("2");
    UA_Variant_setScalar(&attr7.value, &myInteger7, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId7 = UA_NODEID_STRING(1, "PositionDataC");
    UA_NodeId parentNodeId7 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId7 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType7 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName7 = UA_QUALIFIEDNAME(1, "Position Data C");
	
	UA_Server_addVariableNode(server, newNodeId7, parentNodeId7, parentReferenceNodeId7,
                              browseName7, variableType7, attr7, NULL, NULL);
// gripper on
UA_VariableAttributes attr8;
    UA_VariableAttributes_init(&attr8);
    attr8.displayName = UA_LOCALIZEDTEXT("en_US", "Gripper On");
    UA_String myInteger8 = UA_STRING ("2");
    UA_Variant_setScalar(&attr8.value, &myInteger8, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId8 = UA_NODEID_STRING(1, "kuka_gripper");
    UA_NodeId parentNodeId8 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId8 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType8 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName8 = UA_QUALIFIEDNAME(1, "Gripper On");
	
	UA_Server_addVariableNode(server, newNodeId8, parentNodeId8, parentReferenceNodeId8,
                              browseName8, variableType8, attr8, NULL, NULL);
							  
// light color
UA_VariableAttributes attr9;
    UA_VariableAttributes_init(&attr9);
    attr9.displayName = UA_LOCALIZEDTEXT("en_US", "Light Color");
    UA_String myInteger9 = UA_STRING ("2");
    UA_Variant_setScalar(&attr9.value, &myInteger9, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId9 = UA_NODEID_STRING(1, "kuka_light");
    UA_NodeId parentNodeId9 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId9 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType9 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName9 = UA_QUALIFIEDNAME(1, "Light Color");
	
	UA_Server_addVariableNode(server, newNodeId9, parentNodeId9, parentReferenceNodeId9,
                              browseName9, variableType9, attr9, NULL, NULL);
							  
// sensor on
UA_VariableAttributes attr10;
    UA_VariableAttributes_init(&attr10);
    attr10.displayName = UA_LOCALIZEDTEXT("en_US", "Sensor On");
    UA_String myInteger10 = UA_STRING ("2");
    UA_Variant_setScalar(&attr10.value, &myInteger10, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId10 = UA_NODEID_STRING(1, "kuka_sensors");
    UA_NodeId parentNodeId10 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId10 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType10= UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName10 = UA_QUALIFIEDNAME(1, "Sensor On");
	
	UA_Server_addVariableNode(server, newNodeId10, parentNodeId10, parentReferenceNodeId10,
                              browseName10, variableType10, attr10, NULL, NULL);
							  
// robot on
/*
UA_VariableAttributes attr11;
    UA_VariableAttributes_init(&attr11);
    attr11.displayName = UA_LOCALIZEDTEXT("en_US", "Robot On");
    UA_String myInteger11 = UA_STRING ("2");
    UA_Variant_setScalar(&attr11.value, &myInteger11, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId11 = UA_NODEID_STRING(1, "RobotOn");
    UA_NodeId parentNodeId11 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId11 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType11 = UA_NODEID_NULL;
    UA_QualifiedName browseName11 = UA_QUALIFIEDNAME(1, "Robot On");
	
	UA_Server_addVariableNode(server, newNodeId11, parentNodeId11, parentReferenceNodeId11,
                              browseName11, variableType11, attr11, NULL, NULL);
*/
						  
//write kuka_table = state
UA_VariableAttributes attr12;
    UA_VariableAttributes_init(&attr12);
    attr12.displayName = UA_LOCALIZEDTEXT("en_US", "KUKA off to Table");
    UA_String myInteger12 = UA_STRING ("2");
    UA_Variant_setScalar(&attr12.value, &myInteger12, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId12 = UA_NODEID_STRING(1, "kuka_state");
    UA_NodeId parentNodeId12 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId12 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType12 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName12 = UA_QUALIFIEDNAME(1, "KUKA off to Table");
	
	UA_Server_addVariableNode(server, newNodeId12, parentNodeId12, parentReferenceNodeId12,
                              browseName12, variableType12, attr12, NULL, NULL);

//read table_kuka
UA_VariableAttributes attr13;
    UA_VariableAttributes_init(&attr13);
    attr13.displayName = UA_LOCALIZEDTEXT("en_US", "Table off to Kuka");
    UA_String myInteger13 = UA_STRING ("2");
    UA_Variant_setScalar(&attr13.value, &myInteger13, &UA_TYPES[UA_TYPES_STRING]);
	
	UA_NodeId newNodeId13 = UA_NODEID_STRING(1, "table_to_kuka");
    UA_NodeId parentNodeId13 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId13 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableType13 = UA_NODEID_NULL; /* take the default variable type */
    UA_QualifiedName browseName13 = UA_QUALIFIEDNAME(1, "Table off to Kuka");
	
	UA_Server_addVariableNode(server, newNodeId13, parentNodeId13, parentReferenceNodeId13,
                              browseName13, variableType13, attr13, NULL, NULL);
			  
/****//////////////////////////////////////////////////////////////////////////////////////////////****/
    /* Run the server loop */
    UA_StatusCode status = UA_Server_run(server, &running);
    UA_Server_delete(server);
    nl.deleteMembers(&nl);
    return status;
}

