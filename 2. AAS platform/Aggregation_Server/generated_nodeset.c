/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "generated_nodeset.h"


/* HasAMLSupportedRoleClass - ns=1;i=4001 */

static UA_StatusCode function_generated_nodeset_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsSupportedRole");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAMLSupportedRoleClass");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4001),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasAMLSupportedRoleClass"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4001)
);
}

/* OrdinalConstraintItem - ns=1;i=2001 */

static UA_StatusCode function_generated_nodeset_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OrdinalConstraintItem");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 2001),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OrdinalConstraintItem"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2001)
);
}

/* HasAMLInternalLink - ns=1;i=4003 */

static UA_StatusCode function_generated_nodeset_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.symmetric  = true;
attr.inverseName  = UA_LOCALIZEDTEXT("", "HasAMLInternalLink");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAMLInternalLink");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4003),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasAMLInternalLink"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4003)
);
}

/* HasAMLUAReference - ns=1;i=4004 */

static UA_StatusCode function_generated_nodeset_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsAMLReferenceOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAMLUAReference");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4004),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasAMLUAReference"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4004)
);
}

/* HasAMLRoleRequirement - ns=1;i=4002 */

static UA_StatusCode function_generated_nodeset_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsRequiredRole");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAMLRoleRequirement");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4002),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasAMLRoleRequirement"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4002)
);
}

/* HasDataSource - ns=2;i=1 */

static UA_StatusCode function_generated_nodeset_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "DataSourceOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasDataSource");
attr.description = UA_LOCALIZEDTEXT("", "The type for references from a AutomationML DataVariable to its DataSource node.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 1),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "HasDataSource"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1)
);
}

/* AutomationMLLibraries - ns=1;i=5003 */

static UA_StatusCode function_generated_nodeset_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AutomationMLLibraries");
attr.description = UA_LOCALIZEDTEXT("", "The browse entry point when looking for AutomationML libraries in the server address space.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5003),
UA_NODEID_NUMERIC(ns[0], 88),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "AutomationMLLibraries"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5003)
);
}

/* RoleClassLibs - ns=1;i=5005 */

static UA_StatusCode function_generated_nodeset_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RoleClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5005),
UA_NODEID_NUMERIC(ns[1], 5003),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "RoleClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5005)
);
}

/* CAEXBasicObjectType - ns=1;i=1001 */

static UA_StatusCode function_generated_nodeset_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CAEXBasicObjectType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1001),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CAEXBasicObjectType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1001)
);
}

/* AutomationMLFiles - ns=1;i=5001 */

static UA_StatusCode function_generated_nodeset_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AutomationMLFiles");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "AutomationMLFiles"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5001)
);
}

/* Version - ns=1;i=6001 */

static UA_StatusCode function_generated_nodeset_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6001_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6001_variant_DataContents = UA_STRING_ALLOC("\"\"");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6001_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6001),
UA_NODEID_NUMERIC(ns[1], 1001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6001_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6001), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6001)
);
}

/* AMLBasicVariableType - ns=1;i=3001 */

static UA_StatusCode function_generated_nodeset_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AMLBasicVariableType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 62),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AMLBasicVariableType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3001)
);
}

/* AutomationMLInstanceHierarchies - ns=1;i=5002 */

static UA_StatusCode function_generated_nodeset_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AutomationMLInstanceHierarchies");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5002),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "AutomationMLInstanceHierarchies"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5002)
);
}

/* AdditionalInformation - ns=1;i=6008 */

static UA_StatusCode function_generated_nodeset_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6008_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6008_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6008_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AdditionalInformation");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6008),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AdditionalInformation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6008_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6008), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6008)
);
}

/* Copyright - ns=1;i=6002 */

static UA_StatusCode function_generated_nodeset_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6002_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6002_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6002_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Copyright");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6002),
UA_NODEID_NUMERIC(ns[1], 1001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Copyright"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6002_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6002), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6002)
);
}

/* CAEXFileType - ns=1;i=1002 */

static UA_StatusCode function_generated_nodeset_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CAEXFileType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[1], 1001),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CAEXFileType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1002)
);
}

/* SystemUnitClassLibs - ns=1;i=5006 */

static UA_StatusCode function_generated_nodeset_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SystemUnitClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5006),
UA_NODEID_NUMERIC(ns[1], 5003),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "SystemUnitClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5006)
);
}

/* AMLVariableType - ns=1;i=3007 */

static UA_StatusCode function_generated_nodeset_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AMLVariableType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 3007),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AMLVariableType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3007)
);
}

/* CAEXObjectType - ns=1;i=1003 */

static UA_StatusCode function_generated_nodeset_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CAEXObjectType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[1], 1001),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CAEXObjectType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1003)
);
}

/* ExternalReferenceType - ns=1;i=3002 */

static UA_StatusCode function_generated_nodeset_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ExternalReferenceType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 3002),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ExternalReferenceType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3002)
);
}

/* RefSemantic - ns=1;i=6012 */

static UA_StatusCode function_generated_nodeset_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6012_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6012_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6012_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6012),
UA_NODEID_NUMERIC(ns[1], 3007),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6012_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6012), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6012)
);
}

/* InstanceHierarchies - ns=1;i=5007 */

static UA_StatusCode function_generated_nodeset_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InstanceHierarchies");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5007),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InstanceHierarchies"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5007), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5007)
);
}

/* AdditionalInformation - ns=1;i=6003 */

static UA_StatusCode function_generated_nodeset_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6003_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6003_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6003_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AdditionalInformation");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6003),
UA_NODEID_NUMERIC(ns[1], 1001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "AdditionalInformation"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6003_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6003), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6003)
);
}

/* SchemaVersion - ns=1;i=6004 */

static UA_StatusCode function_generated_nodeset_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6004_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6004_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6004_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "SchemaVersion");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6004),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SchemaVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6004_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6004), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6004)
);
}

/* finalpnpserver.aml - ns=2;s=finalpnpserver.aml */

static UA_StatusCode function_generated_nodeset_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "finalpnpserver.aml");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "finalpnpserver.aml"),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "finalpnpserver.aml"),
UA_NODEID_NUMERIC(ns[1], 1002),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "finalpnpserver.aml")
);
}

/* SystemUnitClassLibs - ns=1;i=5010 */

static UA_StatusCode function_generated_nodeset_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SystemUnitClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5010),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SystemUnitClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5010), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5010)
);
}

/* RoleClassLibs - ns=1;i=5009 */

static UA_StatusCode function_generated_nodeset_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RoleClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5009),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RoleClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5009), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5009)
);
}

/* InterfaceClassLibs - ns=1;i=5008 */

static UA_StatusCode function_generated_nodeset_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5008),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InterfaceClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5008), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5008)
);
}

/* ConstraintType - ns=1;i=3003 */

static UA_StatusCode function_generated_nodeset_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.isAbstract = true;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ConstraintType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 3003),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ConstraintType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3003)
);
}

/* Version - ns=1;i=6006 */

static UA_StatusCode function_generated_nodeset_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6006_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6006_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6006_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6006),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6006_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6006), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6006)
);
}

/* InterfaceClassLibs - ns=1;i=5004 */

static UA_StatusCode function_generated_nodeset_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5004),
UA_NODEID_NUMERIC(ns[1], 5003),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "InterfaceClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5004)
);
}

/* SchemaVersion - ns=2;s=finalpnpserver.aml@SchemaVersion */

static UA_StatusCode function_generated_nodeset_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_finalpnpserver_aml_schemaversion_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_finalpnpserver_aml_schemaversion_variant_DataContents = UA_STRING_ALLOC("CAEXV2_15");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_finalpnpserver_aml_schemaversion_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "SchemaVersion");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@SchemaVersion"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "SchemaVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_finalpnpserver_aml_schemaversion_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@SchemaVersion")
);
}

/* Copyright - ns=1;i=6007 */

static UA_StatusCode function_generated_nodeset_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6007_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6007_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6007_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Copyright");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6007),
UA_NODEID_NUMERIC(ns[1], 3001),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Copyright"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6007_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6007), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6007)
);
}

/* ID - ns=1;i=6005 */

static UA_StatusCode function_generated_nodeset_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6005_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6005_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6005_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6005),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6005_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6005), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6005)
);
}

/* ID - ns=1;i=6009 */

static UA_StatusCode function_generated_nodeset_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6009_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6009_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6009_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6009),
UA_NODEID_NUMERIC(ns[1], 3007),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6009_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6009), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6009)
);
}

/* Unit - ns=1;i=6010 */

static UA_StatusCode function_generated_nodeset_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6010_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6010_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6010_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6010),
UA_NODEID_NUMERIC(ns[1], 3007),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6010_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6010), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6010)
);
}

/* InstanceHierarchies - ns=2;s=finalpnpserver.aml@InstanceHierarchies */

static UA_StatusCode function_generated_nodeset_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InstanceHierarchies");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@InstanceHierarchies"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InstanceHierarchies"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@InstanceHierarchies")
);
}

/* DefaultValue - ns=1;i=6011 */

static UA_StatusCode function_generated_nodeset_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6011_variant_DataContents =  UA_String_new();
*variablenode_ns_1_i_6011_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6011_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultValue");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6011),
UA_NODEID_NUMERIC(ns[1], 3007),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DefaultValue"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6011_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6011), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6011)
);
}

/* InterfaceClassLibs - ns=2;s=finalpnpserver.aml@InterfaceClassLibs */

static UA_StatusCode function_generated_nodeset_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@InterfaceClassLibs"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InterfaceClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@InterfaceClassLibs")
);
}

/* NominalConstraintType - ns=1;i=3004 */

static UA_StatusCode function_generated_nodeset_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "NominalConstraintType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 3004),
UA_NODEID_NUMERIC(ns[1], 3003),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "NominalConstraintType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3004)
);
}

/* SystemUnitClassLibs - ns=2;s=finalpnpserver.aml@SystemUnitClassLibs */

static UA_StatusCode function_generated_nodeset_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SystemUnitClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@SystemUnitClassLibs"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SystemUnitClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@SystemUnitClassLibs")
);
}

/* AutomationMLInterfaceClassLib - ns=2;s=AutomationMLInterfaceClassLib */

static UA_StatusCode function_generated_nodeset_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AutomationMLInterfaceClassLib");
attr.description = UA_LOCALIZEDTEXT("", "Standard Automation Markup Language Interface Class Library");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@InterfaceClassLibs"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AutomationMLInterfaceClassLib"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib"), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5004), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib")
);
}

/* OrdinalConstraintType - ns=1;i=3005 */

static UA_StatusCode function_generated_nodeset_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "OrdinalConstraintType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 3005),
UA_NODEID_NUMERIC(ns[1], 3003),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "OrdinalConstraintType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3005)
);
}

/* RoleClassLibs - ns=2;s=finalpnpserver.aml@RoleClassLibs */

static UA_StatusCode function_generated_nodeset_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RoleClassLibs");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@RoleClassLibs"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RoleClassLibs"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@RoleClassLibs")
);
}

/* AAS in PnP Demo - ns=2;s=AAS in PnP Demo */

static UA_StatusCode function_generated_nodeset_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AAS in PnP Demo");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@InstanceHierarchies"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "AAS in PnP Demo"), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5002), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AAS in PnP Demo")
);
}

/* UnknownConstraintType - ns=1;i=3006 */

static UA_StatusCode function_generated_nodeset_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "UnknownConstraintType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 3006),
UA_NODEID_NUMERIC(ns[1], 3003),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "UnknownConstraintType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3006)
);
}

/* DataVariableRoleClassLib - ns=2;s=DataVariableRoleClassLib */

static UA_StatusCode function_generated_nodeset_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataVariableRoleClassLib");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib"),
UA_NODEID_NUMERIC(ns[1], 5005),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "DataVariableRoleClassLib"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib"), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_STRING(ns[2], "finalpnpserver.aml@RoleClassLibs"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib")
);
}

/* Table OPC UA Server - ns=2;s=d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9 */

static UA_StatusCode function_generated_nodeset_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Table OPC UA Server");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Table OPC UA Server"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9")
);
}

/* AutomationMLBaseInterface - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface */

static UA_StatusCode function_generated_nodeset_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AutomationMLBaseInterface");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "AutomationMLBaseInterface"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_STRING(ns[2], "AutomationMLInterfaceClassLib"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface")
);
}

/* AAS_Epson1_Robot - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2 */

static UA_StatusCode function_generated_nodeset_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AAS_Epson1_Robot");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AAS_Epson1_Robot"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2")
);
}

/* Epson 1 OPC UA Server - ns=2;s=da51cded-5ec5-4112-bdee-526cb5f0113c */

static UA_StatusCode function_generated_nodeset_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Epson 1 OPC UA Server");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Epson 1 OPC UA Server"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c")
);
}

/* StartCommand - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand */

static UA_StatusCode function_generated_nodeset_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StartCommand");
attr.description = UA_LOCALIZEDTEXT("", "start/stop");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "StartCommand"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand")
);
}

/* AAS_KUKA_Robot - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd */

static UA_StatusCode function_generated_nodeset_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AAS_KUKA_Robot");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AAS_KUKA_Robot"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd")
);
}

/* PositionA - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA */

static UA_StatusCode function_generated_nodeset_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionA");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionA"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA")
);
}

/* Version - ns=2;s=AutomationMLInterfaceClassLib@Version */

static UA_StatusCode function_generated_nodeset_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlinterfaceclasslib_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlinterfaceclasslib_version_variant_DataContents = UA_STRING_ALLOC("2.2.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlinterfaceclasslib_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib@Version"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlinterfaceclasslib_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib@Version")
);
}

/* AAS_Epson2_Robot - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7 */

static UA_StatusCode function_generated_nodeset_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AAS_Epson2_Robot");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AAS_Epson2_Robot"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7")
);
}

/* ID - ns=2;s=d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9@ID */

static UA_StatusCode function_generated_nodeset_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_id_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9@ID"),
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9@ID")
);
}

/* PositionX - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX */

static UA_StatusCode function_generated_nodeset_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionX");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionX"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX")
);
}

/* PositionY - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY */

static UA_StatusCode function_generated_nodeset_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionY");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionY"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY")
);
}

/* PositionX - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX */

static UA_StatusCode function_generated_nodeset_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionX");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionX"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX")
);
}

/* PPRConnector - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/PPRConnector */

static UA_StatusCode function_generated_nodeset_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PPRConnector");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/PPRConnector"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "PPRConnector"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/PPRConnector")
);
}

/* ID - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd@ID */

static UA_StatusCode function_generated_nodeset_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_id_variant_DataContents = UA_STRING_ALLOC("65b425fa-0bdb-496e-a1ae-28171cea1fcd");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd@ID"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd@ID")
);
}

/* PositionZ - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ */

static UA_StatusCode function_generated_nodeset_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionZ");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionZ"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ")
);
}

/* PositionY - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY */

static UA_StatusCode function_generated_nodeset_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionY");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionY"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY")
);
}

/* PositionX - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX */

static UA_StatusCode function_generated_nodeset_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionX");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionX"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX")
);
}

/* Order - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Order */

static UA_StatusCode function_generated_nodeset_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Order");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Order"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Order"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Order")
);
}

/* PositionV - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV */

static UA_StatusCode function_generated_nodeset_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionV");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionV"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV")
);
}

/* PositionU - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU */

static UA_StatusCode function_generated_nodeset_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionU");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionU"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU")
);
}

/* epson1_gripper - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper */

static UA_StatusCode function_generated_nodeset_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson1_gripper");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson1_gripper"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper")
);
}

/* kuka_state - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state */

static UA_StatusCode function_generated_nodeset_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "kuka_state");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "kuka_state"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU@RefSemantic */

static UA_StatusCode function_generated_nodeset_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU@RefSemantic")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state@RefSemantic */

static UA_StatusCode function_generated_nodeset_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state@RefSemantic")
);
}

/* ID - ns=2;s=da51cded-5ec5-4112-bdee-526cb5f0113c@ID */

static UA_StatusCode function_generated_nodeset_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_id_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c@ID"),
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c@ID")
);
}

/* kuka_light - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light */

static UA_StatusCode function_generated_nodeset_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "kuka_light");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "kuka_light"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light")
);
}

/* epson2_light - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light */

static UA_StatusCode function_generated_nodeset_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson2_light");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson2_light"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA@RefSemantic */

static UA_StatusCode function_generated_nodeset_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA@RefSemantic")
);
}

/* table_to_epson1 - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1 */

static UA_StatusCode function_generated_nodeset_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "table_to_epson1");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "table_to_epson1"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1")
);
}

/* Epson 2 OPC UA Server - ns=2;s=4936367c-364a-4ad9-b12e-fd1bd93600ad */

static UA_StatusCode function_generated_nodeset_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Epson 2 OPC UA Server");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Epson 2 OPC UA Server"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad")
);
}

/* DataSource - ns=2;s=DataVariableRoleClassLib/DataSource */

static UA_StatusCode function_generated_nodeset_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "DataSource"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_STRING(ns[2], "DataVariableRoleClassLib"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource")
);
}

/* DiscoveryURL - ns=2;s=d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9.DiscoveryURL */

static UA_StatusCode function_generated_nodeset_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_discoveryurl_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_discoveryurl_variant_DataContents = UA_STRING_ALLOC("opc.tcp://192.168.0.44:4844");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_discoveryurl_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscoveryURL");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9.DiscoveryURL"),
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DiscoveryURL"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d5a1d4da_8afb_44d4_a28f_438bfd2f2fc9_discoveryurl_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9.DiscoveryURL")
);
}

/* OPCUA-Server - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server */

static UA_StatusCode function_generated_nodeset_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OPCUA-Server");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "OPCUA-Server"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"), UA_NODEID_NUMERIC(ns[1], 4002), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"), UA_NODEID_NUMERIC(ns[1], 4002), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"), UA_NODEID_NUMERIC(ns[1], 4002), UA_EXPANDEDNODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server")
);
}

/* KUAK OPC UA Server - ns=2;s=3a6d6b22-9a1b-4959-a413-e581aa834e00 */

static UA_StatusCode function_generated_nodeset_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KUAK OPC UA Server");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "KUAK OPC UA Server"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX"), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state"), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA"), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), UA_NODEID_NUMERIC(ns[1], 4002), UA_EXPANDEDNODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"), true);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00")
);
}

/* epson1_state - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state */

static UA_StatusCode function_generated_nodeset_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson1_state");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson1_state"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA.RefDataSource */

static UA_StatusCode function_generated_nodeset_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA.RefDataSource")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper.RefDataSource */

static UA_StatusCode function_generated_nodeset_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper.RefDataSource")
);
}

/* CanBus - ns=2;s=DataVariableRoleClassLib/DataSource/CanBus */

static UA_StatusCode function_generated_nodeset_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CanBus");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "CanBus"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state@RefSemantic */

static UA_StatusCode function_generated_nodeset_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state@RefSemantic")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA.NodeId */

static UA_StatusCode function_generated_nodeset_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=PositionDataA");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiona_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA.NodeId")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY@RefSemantic */

static UA_StatusCode function_generated_nodeset_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY@RefSemantic")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light.RefDataSource */

static UA_StatusCode function_generated_nodeset_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light.RefDataSource")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ@RefSemantic */

static UA_StatusCode function_generated_nodeset_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ@RefSemantic")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand@RefSemantic */

static UA_StatusCode function_generated_nodeset_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand@RefSemantic")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper.NodeId */

static UA_StatusCode function_generated_nodeset_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_Gripper_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_gripper_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper.NodeId")
);
}

/* DiscoveryURL - ns=2;s=da51cded-5ec5-4112-bdee-526cb5f0113c.DiscoveryURL */

static UA_StatusCode function_generated_nodeset_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_discoveryurl_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_discoveryurl_variant_DataContents = UA_STRING_ALLOC("opc.tcp://192.168.0.75:4842"); //EPSON_C4
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_discoveryurl_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscoveryURL");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c.DiscoveryURL"),
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DiscoveryURL"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_da51cded_5ec5_4112_bdee_526cb5f0113c_discoveryurl_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c.DiscoveryURL")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light.NodeId */

static UA_StatusCode function_generated_nodeset_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_Indicator_Light_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_light_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light.NodeId")
);
}

/* UserToken - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.UserToken */

static UA_StatusCode function_generated_nodeset_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_usertoken_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_usertoken_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_usertoken_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "UserToken");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.UserToken"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "UserToken"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_usertoken_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.UserToken")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX@RefSemantic */

static UA_StatusCode function_generated_nodeset_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX@RefSemantic")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand.RefDataSource */

static UA_StatusCode function_generated_nodeset_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand.RefDataSource")
);
}

/* kuka_sensors - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors */

static UA_StatusCode function_generated_nodeset_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "kuka_sensors");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "kuka_sensors"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors")
);
}

/* PositionB - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB */

static UA_StatusCode function_generated_nodeset_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionB");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionB"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light.RefDataSource */

static UA_StatusCode function_generated_nodeset_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light.RefDataSource")
);
}

/* epson1_light - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light */

static UA_StatusCode function_generated_nodeset_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson1_light");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson1_light"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY.RefDataSource */

static UA_StatusCode function_generated_nodeset_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY.RefDataSource")
);
}

/* PositionV - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV */

static UA_StatusCode function_generated_nodeset_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionV");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionV"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ.RefDataSource */

static UA_StatusCode function_generated_nodeset_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ.RefDataSource")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light.RefDataSource */

static UA_StatusCode function_generated_nodeset_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light.RefDataSource")
);
}

/* ID - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2@ID */

static UA_StatusCode function_generated_nodeset_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_id_variant_DataContents = UA_STRING_ALLOC("5edaf471-ae3c-4854-bcc3-a9340f6da7c2");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2@ID"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2@ID")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU.RefDataSource */

static UA_StatusCode function_generated_nodeset_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU.RefDataSource")
);
}

/* ProfinetHost - ns=2;s=DataVariableRoleClassLib/DataSource/ProfinetHost */

static UA_StatusCode function_generated_nodeset_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProfinetHost");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ProfinetHost"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "ProfinetHost"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ProfinetHost")
);
}

/* epson1_sensors - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors */

static UA_StatusCode function_generated_nodeset_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson1_sensors");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson1_sensors"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state.RefDataSource */

static UA_StatusCode function_generated_nodeset_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state.RefDataSource")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state.NodeId */

static UA_StatusCode function_generated_nodeset_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=kuka_state");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_state_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state.NodeId")
);
}

/* ID - ns=2;s=4936367c-364a-4ad9-b12e-fd1bd93600ad@ID */

static UA_StatusCode function_generated_nodeset_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_id_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad@ID"),
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad@ID")
);
}

/* NameSpaceTable - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.NameSpaceTable */

static UA_StatusCode function_generated_nodeset_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NameSpaceTable");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.NameSpaceTable"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NameSpaceTable"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.NameSpaceTable")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1@RefSemantic */

static UA_StatusCode function_generated_nodeset_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1@RefSemantic")
);
}

/* ModbusTCPHost - ns=2;s=DataVariableRoleClassLib/DataSource/ModbusTCPHost */

static UA_StatusCode function_generated_nodeset_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModbusTCPHost");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ModbusTCPHost"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "ModbusTCPHost"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ModbusTCPHost")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand.NodeId */

static UA_StatusCode function_generated_nodeset_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Command:Epson_C4_Start_Set");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_startcommand_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand.NodeId")
);
}

/* kuka_gripper - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper */

static UA_StatusCode function_generated_nodeset_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "kuka_gripper");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "kuka_gripper"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY.NodeId */

static UA_StatusCode function_generated_nodeset_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_Y_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positiony_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY.NodeId")
);
}

/* DiscoveryURL - ns=2;s=4936367c-364a-4ad9-b12e-fd1bd93600ad.DiscoveryURL */

static UA_StatusCode function_generated_nodeset_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_discoveryurl_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_discoveryurl_variant_DataContents = UA_STRING_ALLOC("opc.tcp://192.168.0.76:4843"); //EPSON 2 SCARA
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_discoveryurl_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscoveryURL");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad.DiscoveryURL"),
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DiscoveryURL"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_4936367c_364a_4ad9_b12e_fd1bd93600ad_discoveryurl_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad.DiscoveryURL")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ.NodeId */

static UA_StatusCode function_generated_nodeset_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_Z_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionz_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ.NodeId")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors.RefDataSource */

static UA_StatusCode function_generated_nodeset_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors.RefDataSource")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU.NodeId */

static UA_StatusCode function_generated_nodeset_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_U_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionu_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU.NodeId")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light.NodeId */

static UA_StatusCode function_generated_nodeset_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=kuka_light");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_light_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light.NodeId")
);
}

/* epson2_state - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state */

static UA_StatusCode function_generated_nodeset_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson2_state");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson2_state"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state")
);
}

/* AutomationMLBaseRoleClassLib - ns=2;s=AutomationMLBaseRoleClassLib */

static UA_StatusCode function_generated_nodeset_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AutomationMLBaseRoleClassLib");
attr.description = UA_LOCALIZEDTEXT("", "Automation Markup Language base role class library");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib"),
UA_NODEID_STRING(ns[2], "finalpnpserver.aml@RoleClassLibs"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AutomationMLBaseRoleClassLib"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib"), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5005), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state.RefDataSource */

static UA_StatusCode function_generated_nodeset_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state.RefDataSource")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1.RefDataSource */

static UA_StatusCode function_generated_nodeset_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1.RefDataSource")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV@RefSemantic */

static UA_StatusCode function_generated_nodeset_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV@RefSemantic")
);
}

/* iTOT-Client - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client */

static UA_StatusCode function_generated_nodeset_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "iTOT-Client");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "iTOT-Client"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client")
);
}

/* IOLink - ns=2;s=DataVariableRoleClassLib/DataSource/IOLink */

static UA_StatusCode function_generated_nodeset_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IOLink");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/IOLink"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "IOLink"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/IOLink")
);
}

/* PositionW - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW */

static UA_StatusCode function_generated_nodeset_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionW");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionW"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV@RefSemantic */

static UA_StatusCode function_generated_nodeset_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV@RefSemantic")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib@Version */

static UA_StatusCode function_generated_nodeset_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_version_variant_DataContents = UA_STRING_ALLOC("0.2.4");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib@Version")
);
}

/* DeviceName - ns=2;s=DataVariableRoleClassLib/DataSource/CanBus.DeviceName */

static UA_StatusCode function_generated_nodeset_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_devicename_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_devicename_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_devicename_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceName");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus.DeviceName"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DeviceName"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_devicename_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus.DeviceName")
);
}

/* Priority - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.Priority */

static UA_StatusCode function_generated_nodeset_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_priority_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_priority_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_priority_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Priority");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.Priority"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Priority"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_priority_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.Priority")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY@RefSemantic */

static UA_StatusCode function_generated_nodeset_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY@RefSemantic")
);
}

/* QueueSize - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.QueueSize */

static UA_StatusCode function_generated_nodeset_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_queuesize_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_queuesize_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_queuesize_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "QueueSize");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.QueueSize"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "QueueSize"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_queuesize_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.QueueSize")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX.RefDataSource */

static UA_StatusCode function_generated_nodeset_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX.RefDataSource")
);
}

/* PortConnector - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/PortConnector */

static UA_StatusCode function_generated_nodeset_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PortConnector");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/PortConnector"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "PortConnector"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/PortConnector")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1.NodeId */

static UA_StatusCode function_generated_nodeset_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_Turntable_Running_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_table_to_epson1_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1.NodeId")
);
}

/* EthernetIP - ns=2;s=DataVariableRoleClassLib/DataSource/EthernetIP */

static UA_StatusCode function_generated_nodeset_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EthernetIP");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/EthernetIP"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "EthernetIP"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/EthernetIP")
);
}

/* Communication - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Communication */

static UA_StatusCode function_generated_nodeset_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Communication");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Communication"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Communication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Communication")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX.NodeId */

static UA_StatusCode function_generated_nodeset_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_X_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionx_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX.NodeId")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB@RefSemantic */

static UA_StatusCode function_generated_nodeset_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB@RefSemantic")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX@RefSemantic */

static UA_StatusCode function_generated_nodeset_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX@RefSemantic")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV.RefDataSource */

static UA_StatusCode function_generated_nodeset_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV.RefDataSource")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state@RefSemantic */

static UA_StatusCode function_generated_nodeset_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state@RefSemantic")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource@Version */

static UA_StatusCode function_generated_nodeset_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource@Version")
);
}

/* SignalInterface - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Communication/SignalInterface */

static UA_StatusCode function_generated_nodeset_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignalInterface");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Communication/SignalInterface"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Communication"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "SignalInterface"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Communication/SignalInterface")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX.RefDataSource */

static UA_StatusCode function_generated_nodeset_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX.RefDataSource")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY.RefDataSource */

static UA_StatusCode function_generated_nodeset_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY.RefDataSource")
);
}

/* Baudrate - ns=2;s=DataVariableRoleClassLib/DataSource/CanBus.Baudrate */

static UA_StatusCode function_generated_nodeset_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_baudrate_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_baudrate_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_baudrate_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Baudrate");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus.Baudrate"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Baudrate"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_baudrate_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus.Baudrate")
);
}

/* MTConnect - ns=2;s=DataVariableRoleClassLib/DataSource/MTConnect */

static UA_StatusCode function_generated_nodeset_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MTConnect");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/MTConnect"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "MTConnect"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/MTConnect")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB.RefDataSource */

static UA_StatusCode function_generated_nodeset_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB.RefDataSource")
);
}

/* Version - ns=2;s=AAS in PnP Demo@Version */

static UA_StatusCode function_generated_nodeset_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_aas_in_pnp_demo_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_aas_in_pnp_demo_version_variant_DataContents = UA_STRING_ALLOC("0.3.5");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_aas_in_pnp_demo_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AAS in PnP Demo@Version"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_aas_in_pnp_demo_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AAS in PnP Demo@Version")
);
}

/* ID - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7@ID */

static UA_StatusCode function_generated_nodeset_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_id_variant_DataContents = UA_STRING_ALLOC("d6a952c0-2c6c-4941-9c13-94177a3566f7");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7@ID"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7@ID")
);
}

/* epson2_sensors - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors */

static UA_StatusCode function_generated_nodeset_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson2_sensors");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson2_sensors"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors.RefDataSource */

static UA_StatusCode function_generated_nodeset_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors.RefDataSource")
);
}

/* InterlockingConnector - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/InterlockingConnector */

static UA_StatusCode function_generated_nodeset_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterlockingConnector");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/InterlockingConnector"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "InterlockingConnector"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/InterlockingConnector")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV.NodeId */

static UA_StatusCode function_generated_nodeset_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_V_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionv_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV.NodeId")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server@Version */

static UA_StatusCode function_generated_nodeset_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server@Version")
);
}

/* NoDelay - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.NoDelay */

static UA_StatusCode function_generated_nodeset_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "NoDelay");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.NoDelay"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NoDelay"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.NoDelay")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX@RefSemantic */

static UA_StatusCode function_generated_nodeset_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX@RefSemantic")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state.RefDataSource */

static UA_StatusCode function_generated_nodeset_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state.RefDataSource")
);
}

/* DefaultValue - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.NoDelay@DefaultValue */

static UA_StatusCode function_generated_nodeset_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_defaultvalue_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_defaultvalue_variant_DataContents = UA_STRING_ALLOC("FALSE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_defaultvalue_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultValue");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.NoDelay@DefaultValue"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.NoDelay"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "DefaultValue"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_nodelay_defaultvalue_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.NoDelay@DefaultValue")
);
}

/* WriteQueueSize - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.WriteQueueSize */

static UA_StatusCode function_generated_nodeset_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "WriteQueueSize");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.WriteQueueSize"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "WriteQueueSize"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.WriteQueueSize")
);
}

/* RefSemantic - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW@RefSemantic */

static UA_StatusCode function_generated_nodeset_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW@RefSemantic"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW@RefSemantic")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX.NodeId */

static UA_StatusCode function_generated_nodeset_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=PositionDataX");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionx_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX.NodeId")
);
}

/* StartCommand - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand */

static UA_StatusCode function_generated_nodeset_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StartCommand");
attr.description = UA_LOCALIZEDTEXT("", "start/stop");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "StartCommand"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand")
);
}

/* CCLink - ns=2;s=DataVariableRoleClassLib/DataSource/CCLink */

static UA_StatusCode function_generated_nodeset_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CCLink");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CCLink"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "CCLink"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CCLink")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/ProfinetHost@Version */

static UA_StatusCode function_generated_nodeset_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_profinethost_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_profinethost_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_profinethost_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ProfinetHost@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ProfinetHost"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_profinethost_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ProfinetHost@Version")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY.NodeId */

static UA_StatusCode function_generated_nodeset_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=PositionDataY");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positiony_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY.NodeId")
);
}

/* Unit - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.WriteQueueSize@Unit */

static UA_StatusCode function_generated_nodeset_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_unit_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_unit_variant_DataContents = UA_STRING_ALLOC("Bytes");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_unit_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.WriteQueueSize@Unit"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.WriteQueueSize"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_writequeuesize_unit_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.WriteQueueSize@Unit")
);
}

/* PositionY - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY */

static UA_StatusCode function_generated_nodeset_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionY");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionY"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY")
);
}

/* PositionZ - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ */

static UA_StatusCode function_generated_nodeset_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionZ");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionZ"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX.RefDataSource */

static UA_StatusCode function_generated_nodeset_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX.RefDataSource")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB.NodeId */

static UA_StatusCode function_generated_nodeset_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=PositionDataB");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionb_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB.NodeId")
);
}

/* AAS_Rotation_Table - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd */

static UA_StatusCode function_generated_nodeset_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AAS_Rotation_Table");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_STRING(ns[2], "AAS in PnP Demo"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AAS_Rotation_Table"),
UA_NODEID_NUMERIC(ns[1], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd")
);
}

/* PositionC - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC */

static UA_StatusCode function_generated_nodeset_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionC");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionC"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC")
);
}

/* PositionU - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU */

static UA_StatusCode function_generated_nodeset_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionU");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionU"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "da51cded-5ec5-4112-bdee-526cb5f0113c"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX.NodeId */

static UA_StatusCode function_generated_nodeset_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_X_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionx_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX.NodeId")
);
}

/* DiscoveryURL - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.DiscoveryURL */

static UA_StatusCode function_generated_nodeset_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_discoveryurl_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_discoveryurl_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_discoveryurl_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscoveryURL");
attr.description = UA_LOCALIZEDTEXT("", "If this attribute is given all others except of the namespace table are obsolet.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.DiscoveryURL"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DiscoveryURL"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_discoveryurl_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.DiscoveryURL")
);
}

/* epson2_gripper - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper */

static UA_StatusCode function_generated_nodeset_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson2_gripper");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson2_gripper"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV.RefDataSource */

static UA_StatusCode function_generated_nodeset_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV.RefDataSource")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW.RefDataSource */

static UA_StatusCode function_generated_nodeset_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW.RefDataSource")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV.NodeId */

static UA_StatusCode function_generated_nodeset_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_V_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionv_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV.NodeId")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state.NodeId */

static UA_StatusCode function_generated_nodeset_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Command:Epson_SCARA_Running_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_state_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state.NodeId")
);
}

/* ExternalDataConnector - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector */

static UA_StatusCode function_generated_nodeset_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExternalDataConnector");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "ExternalDataConnector"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector")
);
}

/* table_to_epson2 - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2 */

static UA_StatusCode function_generated_nodeset_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "table_to_epson2");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "table_to_epson2"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "4936367c-364a-4ad9-b12e-fd1bd93600ad"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2")
);
}

/* Direction - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Order.Direction */

static UA_StatusCode function_generated_nodeset_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_order_direction_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_order_direction_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_order_direction_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Direction");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Order.Direction"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Order"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Direction"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_order_direction_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/Order.Direction")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/ModbusTCPHost@Version */

static UA_StatusCode function_generated_nodeset_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_modbustcphost_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_modbustcphost_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_modbustcphost_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ModbusTCPHost@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ModbusTCPHost"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_modbustcphost_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/ModbusTCPHost@Version")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW.NodeId */

static UA_StatusCode function_generated_nodeset_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_W_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_positionw_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW.NodeId")
);
}

/* ID - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd@ID */

static UA_StatusCode function_generated_nodeset_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_id_variant_DataContents = UA_STRING_ALLOC("0a04cce4-a64a-4566-b916-06a8639d7dcd");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd@ID"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd@ID")
);
}

/* StartCommand - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand */

static UA_StatusCode function_generated_nodeset_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StartCommand");
attr.description = UA_LOCALIZEDTEXT("", "start/stop");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "StartCommand"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors.NodeId */

static UA_StatusCode function_generated_nodeset_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_SensorLR_Running_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_sensors_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors.NodeId")
);
}

/* COLLADAInterface - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector/COLLADAInterface */

static UA_StatusCode function_generated_nodeset_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "COLLADAInterface");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector/COLLADAInterface"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "COLLADAInterface"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector/COLLADAInterface")
);
}

/* PositionZ - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ */

static UA_StatusCode function_generated_nodeset_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PositionZ");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PositionZ"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ")
);
}

/* iTOT-DataBlock - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock */

static UA_StatusCode function_generated_nodeset_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "iTOT-DataBlock");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "iTOT-DataBlock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock")
);
}

/* EndpointURL - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.EndpointURL */

static UA_StatusCode function_generated_nodeset_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_endpointurl_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_endpointurl_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_endpointurl_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "EndpointURL");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.EndpointURL"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "EndpointURL"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_endpointurl_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.EndpointURL")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/IOLink@Version */

static UA_StatusCode function_generated_nodeset_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_iolink_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_iolink_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_iolink_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/IOLink@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/IOLink"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_iolink_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/IOLink@Version")
);
}

/* PLCType - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.PLCType */

static UA_StatusCode function_generated_nodeset_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_plctype_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_plctype_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_plctype_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PLCType");
attr.description = UA_LOCALIZEDTEXT("", "(S7-1200)");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.PLCType"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PLCType"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_plctype_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.PLCType")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand@RefSemantic */

static UA_StatusCode function_generated_nodeset_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand@RefSemantic")
);
}

/* refURI - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector.refURI */

static UA_StatusCode function_generated_nodeset_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_externaldataconnector_refuri_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_externaldataconnector_refuri_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_externaldataconnector_refuri_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "refURI");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector.refURI"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "refURI"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlinterfaceclasslib_automationmlbaseinterface_externaldataconnector_refuri_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector.refURI")
);
}

/* ID - ns=2;s=3a6d6b22-9a1b-4959-a413-e581aa834e00@ID */

static UA_StatusCode function_generated_nodeset_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_id_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00@ID"),
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00@ID")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/CanBus@Version */

static UA_StatusCode function_generated_nodeset_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_canbus_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CanBus@Version")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper.RefDataSource */

static UA_StatusCode function_generated_nodeset_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper.RefDataSource")
);
}

/* table_to_epson1 - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1 */

static UA_StatusCode function_generated_nodeset_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "table_to_epson1");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "table_to_epson1"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU@RefSemantic */

static UA_StatusCode function_generated_nodeset_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU@RefSemantic")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state.NodeId */

static UA_StatusCode function_generated_nodeset_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Command:Epson_C4_Running_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_state_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state.NodeId")
);
}

/* table_to_epson2 - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2 */

static UA_StatusCode function_generated_nodeset_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "table_to_epson2");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "table_to_epson2"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2")
);
}

/* TransportProfileURI - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.TransportProfileURI */

static UA_StatusCode function_generated_nodeset_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_transportprofileuri_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_transportprofileuri_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_transportprofileuri_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransportProfileURI");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.TransportProfileURI"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "TransportProfileURI"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_transportprofileuri_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.TransportProfileURI")
);
}

/* SecurityPolicy - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.SecurityPolicy */

static UA_StatusCode function_generated_nodeset_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_securitypolicy_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_securitypolicy_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_securitypolicy_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityPolicy");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.SecurityPolicy"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "SecurityPolicy"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_securitypolicy_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.SecurityPolicy")
);
}

/* table_to_kuka - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka */

static UA_StatusCode function_generated_nodeset_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "table_to_kuka");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "table_to_kuka"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka")
);
}

/* PLC_Start - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start */

static UA_StatusCode function_generated_nodeset_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "PLC_Start");
attr.description = UA_LOCALIZEDTEXT("", "start/stop");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "PLC_Start"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start")
);
}

/* DiscoveryURL - ns=2;s=3a6d6b22-9a1b-4959-a413-e581aa834e00.DiscoveryURL */

static UA_StatusCode function_generated_nodeset_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_discoveryurl_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_discoveryurl_variant_DataContents = UA_STRING_ALLOC("opc.tcp://192.168.0.80:4841");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_discoveryurl_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscoveryURL");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00.DiscoveryURL"),
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DiscoveryURL"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_3a6d6b22_9a1b_4959_a413_e581aa834e00_discoveryurl_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "3a6d6b22-9a1b-4959-a413-e581aa834e00.DiscoveryURL")
);
}

/* 0 - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.NameSpaceTable.0 */

static UA_StatusCode function_generated_nodeset_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_0_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_0_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_0_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "0");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.NameSpaceTable.0"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.NameSpaceTable"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "0"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_namespacetable_0_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.NameSpaceTable.0")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors.NodeId */

static UA_StatusCode function_generated_nodeset_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=kuka_sensors");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_sensors_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors.NodeId")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper.RefDataSource */

static UA_StatusCode function_generated_nodeset_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper.RefDataSource")
);
}

/* AutomationMLBaseRole - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole */

static UA_StatusCode function_generated_nodeset_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AutomationMLBaseRole");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[1], 1003),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "AutomationMLBaseRole"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib"), false);
return retVal;
}

static UA_StatusCode function_generated_nodeset_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand.RefDataSource */

static UA_StatusCode function_generated_nodeset_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand.RefDataSource")
);
}

/* RefSemantic - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start@RefSemantic */

static UA_StatusCode function_generated_nodeset_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start@RefSemantic"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start@RefSemantic")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light.NodeId */

static UA_StatusCode function_generated_nodeset_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_Indicator_Light_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_light_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light.NodeId")
);
}

/* RefDataSource - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors.RefDataSource */

static UA_StatusCode function_generated_nodeset_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors.RefDataSource"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors.RefDataSource")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ@RefSemantic */

static UA_StatusCode function_generated_nodeset_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ@RefSemantic")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper.NodeId */

static UA_StatusCode function_generated_nodeset_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=kuka_gripper");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_kuka_gripper_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper.NodeId")
);
}

/* Host - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.Host */

static UA_StatusCode function_generated_nodeset_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_host_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_host_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_host_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Host");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.Host"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Host"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_host_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.Host")
);
}

/* RefSemantic - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1@RefSemantic */

static UA_StatusCode function_generated_nodeset_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1@RefSemantic"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1@RefSemantic")
);
}

/* Port - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.Port */

static UA_StatusCode function_generated_nodeset_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_port_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_port_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_port_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Port");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.Port"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Port"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_port_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.Port")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU.RefDataSource */

static UA_StatusCode function_generated_nodeset_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_refdatasource_variant_DataContents = UA_STRING_ALLOC("da51cded-5ec5-4112-bdee-526cb5f0113c");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU.RefDataSource")
);
}

/* RefSemantic - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2@RefSemantic */

static UA_StatusCode function_generated_nodeset_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2@RefSemantic"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2@RefSemantic")
);
}

/* Group - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Group */

static UA_StatusCode function_generated_nodeset_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Group");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Group"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Group"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Group")
);
}

/* Product - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Product */

static UA_StatusCode function_generated_nodeset_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Product");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Product"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Product"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Product")
);
}

/* Version - ns=2;s=AutomationMLBaseRoleClassLib@Version */

static UA_StatusCode function_generated_nodeset_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlbaseroleclasslib_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_version_variant_DataContents = UA_STRING_ALLOC("2.2.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib@Version"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib@Version")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC@RefSemantic */

static UA_StatusCode function_generated_nodeset_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC@RefSemantic")
);
}

/* MessageSecurityMode - ns=2;s=DataVariableRoleClassLib/DataSource/OPCUA-Server.MessageSecurityMode */

static UA_StatusCode function_generated_nodeset_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_messagesecuritymode_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_messagesecuritymode_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_messagesecuritymode_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MessageSecurityMode");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.MessageSecurityMode"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "MessageSecurityMode"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_opcua_server_messagesecuritymode_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/OPCUA-Server.MessageSecurityMode")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client@Version */

static UA_StatusCode function_generated_nodeset_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client@Version")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand.NodeId */

static UA_StatusCode function_generated_nodeset_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Command:Epson_SCARA_Start_Set");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_startcommand_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand.NodeId")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ.RefDataSource */

static UA_StatusCode function_generated_nodeset_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ.RefDataSource")
);
}

/* Process - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Process */

static UA_StatusCode function_generated_nodeset_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Process");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Process"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Process"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Process")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka.RefDataSource */

static UA_StatusCode function_generated_nodeset_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka.RefDataSource")
);
}

/* NodeId - ns=2;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors.NodeId */

static UA_StatusCode function_generated_nodeset_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_C4_Robot_Monitoring:EPSON_C4_SensorLR_Running_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors.NodeId"),
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_5edaf471_ae3c_4854_bcc3_a9340f6da7c2_epson1_sensors_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors.NodeId")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC.RefDataSource */

static UA_StatusCode function_generated_nodeset_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC.RefDataSource")
);
}

/* Facet - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Facet */

static UA_StatusCode function_generated_nodeset_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Facet");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Facet"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Facet"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Facet")
);
}

/* ReconnectTimeout - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.ReconnectTimeout */

static UA_StatusCode function_generated_nodeset_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_variant_DataContents =  UA_Double_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ReconnectTimeout");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.ReconnectTimeout"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "ReconnectTimeout"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.ReconnectTimeout")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU.NodeId */

static UA_StatusCode function_generated_nodeset_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_U_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionu_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU.NodeId")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka.NodeId */

static UA_StatusCode function_generated_nodeset_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=table_to_kuka");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_table_to_kuka_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka.NodeId")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock@Version */

static UA_StatusCode function_generated_nodeset_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock@Version")
);
}

/* Structure - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure */

static UA_StatusCode function_generated_nodeset_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Structure");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Structure"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ.NodeId */

static UA_StatusCode function_generated_nodeset_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=PositionDataZ");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionz_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ.NodeId")
);
}

/* AssociatedFacet - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Group.AssociatedFacet */

static UA_StatusCode function_generated_nodeset_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_group_associatedfacet_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_group_associatedfacet_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_group_associatedfacet_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "AssociatedFacet");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Group.AssociatedFacet"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Group"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "AssociatedFacet"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_group_associatedfacet_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Group.AssociatedFacet")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC.NodeId */

static UA_StatusCode function_generated_nodeset_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=PositionDataC");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_positionc_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC.NodeId")
);
}

/* ProductStructure - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ProductStructure */

static UA_StatusCode function_generated_nodeset_252_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProductStructure");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ProductStructure"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "ProductStructure"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ProductStructure")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start.RefDataSource */

static UA_StatusCode function_generated_nodeset_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start.RefDataSource")
);
}

/* DBName - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.DBName */

static UA_StatusCode function_generated_nodeset_254_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbname_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbname_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbname_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DBName");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.DBName"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DBName"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbname_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.DBName")
);
}

/* Port - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port */

static UA_StatusCode function_generated_nodeset_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Port");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Port"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port")
);
}

/* Type - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.Type */

static UA_StatusCode function_generated_nodeset_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_type_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_type_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_type_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Type");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.Type"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Type"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_type_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.Type")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1.RefDataSource */

static UA_StatusCode function_generated_nodeset_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1.RefDataSource")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2.RefDataSource */

static UA_StatusCode function_generated_nodeset_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2.RefDataSource")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1.NodeId */

static UA_StatusCode function_generated_nodeset_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:PLC_Epson1_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson1_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1.NodeId")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2.NodeId */

static UA_StatusCode function_generated_nodeset_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:PLC_Epson2_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_epson2_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2.NodeId")
);
}

/* ProcessStructure - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ProcessStructure */

static UA_StatusCode function_generated_nodeset_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProcessStructure");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ProcessStructure"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "ProcessStructure"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ProcessStructure")
);
}

/* Direction - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Direction */

static UA_StatusCode function_generated_nodeset_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_direction_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_direction_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_direction_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Direction");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Direction"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Direction"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_direction_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Direction")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start.NodeId */

static UA_StatusCode function_generated_nodeset_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:PLC_Start_Set");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_plc_start_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start.NodeId")
);
}

/* Unit - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.ReconnectTimeout@Unit */

static UA_StatusCode function_generated_nodeset_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_unit_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_unit_variant_DataContents = UA_STRING_ALLOC("sec");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_unit_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.ReconnectTimeout@Unit"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.ReconnectTimeout"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_reconnecttimeout_unit_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.ReconnectTimeout@Unit")
);
}

/* ResourceStructure - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ResourceStructure */

static UA_StatusCode function_generated_nodeset_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResourceStructure");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ResourceStructure"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "ResourceStructure"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Structure/ResourceStructure")
);
}

/* PropertySet - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/PropertySet */

static UA_StatusCode function_generated_nodeset_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PropertySet");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/PropertySet"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "PropertySet"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/PropertySet")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY@RefSemantic */

static UA_StatusCode function_generated_nodeset_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY@RefSemantic")
);
}

/* table_to_UI - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI */

static UA_StatusCode function_generated_nodeset_268_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "table_to_UI");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "table_to_UI"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper.NodeId */

static UA_StatusCode function_generated_nodeset_269_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_Gripper_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_epson2_gripper_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper.NodeId")
);
}

/* Cardinality - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality */

static UA_StatusCode function_generated_nodeset_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Cardinality");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Cardinality"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality")
);
}

/* KeepAlive - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.KeepAlive */

static UA_StatusCode function_generated_nodeset_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_variant_DataContents =  UA_Boolean_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "KeepAlive");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.KeepAlive"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "KeepAlive"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.KeepAlive")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/EthernetIP@Version */

static UA_StatusCode function_generated_nodeset_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_ethernetip_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_ethernetip_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_ethernetip_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/EthernetIP@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/EthernetIP"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_ethernetip_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/EthernetIP@Version")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ@RefSemantic */

static UA_StatusCode function_generated_nodeset_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ@RefSemantic")
);
}

/* kuka_to_table - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table */

static UA_StatusCode function_generated_nodeset_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "kuka_to_table");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "kuka_to_table"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table")
);
}

/* epson1_to_table - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table */

static UA_StatusCode function_generated_nodeset_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson1_to_table");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson1_to_table"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table")
);
}

/* RefSemantic - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand@RefSemantic */

static UA_StatusCode function_generated_nodeset_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand@RefSemantic"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand@RefSemantic")
);
}

/* RefSemantic - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table@RefSemantic */

static UA_StatusCode function_generated_nodeset_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table@RefSemantic"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table@RefSemantic")
);
}

/* epson2_to_table - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table */

static UA_StatusCode function_generated_nodeset_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "epson2_to_table");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "epson2_to_table"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table")
);
}

/* table_to_kuka - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka */

static UA_StatusCode function_generated_nodeset_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "table_to_kuka");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "table_to_kuka"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"), UA_NODEID_NUMERIC(ns[2], 1), UA_EXPANDEDNODEID_STRING(ns[2], "d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9"), true);
return retVal;
}

static UA_StatusCode function_generated_nodeset_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka")
);
}

/* RefSemantic - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table@RefSemantic */

static UA_StatusCode function_generated_nodeset_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table@RefSemantic"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table@RefSemantic")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY.RefDataSource */

static UA_StatusCode function_generated_nodeset_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY.RefDataSource")
);
}

/* RefSemantic - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka@RefSemantic */

static UA_StatusCode function_generated_nodeset_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka@RefSemantic"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka@RefSemantic")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ.RefDataSource */

static UA_StatusCode function_generated_nodeset_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ.RefDataSource")
);
}

/* InputOrOutput - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.Type@InputOrOutput */

static UA_StatusCode function_generated_nodeset_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.displayName = UA_LOCALIZEDTEXT("", "InputOrOutput");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.Type@InputOrOutput"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.Type"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "InputOrOutput"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.Type@InputOrOutput")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/MTConnect@Version */

static UA_StatusCode function_generated_nodeset_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_mtconnect_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_mtconnect_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_mtconnect_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/MTConnect@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/MTConnect"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_mtconnect_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/MTConnect@Version")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ.NodeId */

static UA_StatusCode function_generated_nodeset_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_Z_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positionz_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ.NodeId")
);
}

/* RegisterNumber - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.RegisterNumber */

static UA_StatusCode function_generated_nodeset_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_registernumber_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_registernumber_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_registernumber_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RegisterNumber");
attr.description = UA_LOCALIZEDTEXT("", "Optional");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.RegisterNumber"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RegisterNumber"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_registernumber_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.RegisterNumber")
);
}

/* MinOccur - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality.MinOccur */

static UA_StatusCode function_generated_nodeset_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_minoccur_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_minoccur_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_minoccur_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MinOccur");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality.MinOccur"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "MinOccur"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_minoccur_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality.MinOccur")
);
}

/* RefDataSource - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand.RefDataSource */

static UA_StatusCode function_generated_nodeset_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_refdatasource_variant_DataContents = UA_STRING_ALLOC("3a6d6b22-9a1b-4959-a413-e581aa834e00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand.RefDataSource"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand.RefDataSource")
);
}

/* DefaultValue - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client.KeepAlive@DefaultValue */

static UA_StatusCode function_generated_nodeset_290_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_defaultvalue_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_defaultvalue_variant_DataContents = UA_STRING_ALLOC("FALSE");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_defaultvalue_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultValue");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.KeepAlive@DefaultValue"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.KeepAlive"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "DefaultValue"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_keepalive_defaultvalue_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client.KeepAlive@DefaultValue")
);
}

/* RefSemantic - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2@RefSemantic */

static UA_StatusCode function_generated_nodeset_291_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2@RefSemantic"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2@RefSemantic")
);
}

/* MaxOccur - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality.MaxOccur */

static UA_StatusCode function_generated_nodeset_292_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_maxoccur_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_maxoccur_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_maxoccur_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxOccur");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality.MaxOccur"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "MaxOccur"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_cardinality_maxoccur_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Cardinality.MaxOccur")
);
}

/* Version - ns=2;s=DataVariableRoleClassLib/DataSource/CCLink@Version */

static UA_StatusCode function_generated_nodeset_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_cclink_version_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_cclink_version_variant_DataContents = UA_STRING_ALLOC("0.1");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_cclink_version_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CCLink@Version"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CCLink"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_cclink_version_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/CCLink@Version")
);
}

/* LocalEventList - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.LocalEventList */

static UA_StatusCode function_generated_nodeset_294_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_localeventlist_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_localeventlist_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_localeventlist_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "LocalEventList");
attr.description = UA_LOCALIZEDTEXT("", "optional");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.LocalEventList"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "LocalEventList"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_localeventlist_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.LocalEventList")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY.NodeId */

static UA_StatusCode function_generated_nodeset_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_Y_Data");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_positiony_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY.NodeId")
);
}

/* PLCopenXMLInterface - ns=2;s=AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector/PLCopenXMLInterface */

static UA_StatusCode function_generated_nodeset_296_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PLCopenXMLInterface");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector/PLCopenXMLInterface"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "PLCopenXMLInterface"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/ExternalDataConnector/PLCopenXMLInterface")
);
}

/* RefDataSource - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2.RefDataSource */

static UA_StatusCode function_generated_nodeset_297_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_refdatasource_variant_DataContents = UA_STRING_ALLOC("4936367c-364a-4ad9-b12e-fd1bd93600ad");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2.RefDataSource"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2.RefDataSource")
);
}

/* NodeId - ns=2;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2.NodeId */

static UA_StatusCode function_generated_nodeset_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=::EPSON_SCARA_Robot_Monitoring:EPSON_SCARA_Turntable_Running_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2.NodeId"),
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_d6a952c0_2c6c_4941_9c13_94177a3566f7_table_to_epson2_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2.NodeId")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI.RefDataSource */

static UA_StatusCode function_generated_nodeset_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI.RefDataSource")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI.NodeId */

static UA_StatusCode function_generated_nodeset_300_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:PLC_Table_State");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_ui_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_UI.NodeId")
);
}

/* NodeId - ns=2;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand.NodeId */

static UA_StatusCode function_generated_nodeset_301_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=1;s=StartCommand");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand.NodeId"),
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_65b425fa_0bdb_496e_a1ae_28171cea1fcd_startcommand_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand.NodeId")
);
}

/* RefSemantic - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table@RefSemantic */

static UA_StatusCode function_generated_nodeset_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_refsemantic_variant_DataContents[1];
variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_refsemantic_variant_DataContents[0] = UA_STRING("aml-dataSourceType:OPCUA");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_refsemantic_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefSemantic");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table@RefSemantic"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "RefSemantic"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
return retVal;
}

static UA_StatusCode function_generated_nodeset_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table@RefSemantic")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table.RefDataSource */

static UA_StatusCode function_generated_nodeset_303_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table.RefDataSource")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table.RefDataSource */

static UA_StatusCode function_generated_nodeset_304_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_304_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table.RefDataSource")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table.RefDataSource */

static UA_StatusCode function_generated_nodeset_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table.RefDataSource")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table.NodeId */

static UA_StatusCode function_generated_nodeset_306_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:Epson1_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson1_to_table_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table.NodeId")
);
}

/* RefDataSource - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka.RefDataSource */

static UA_StatusCode function_generated_nodeset_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_refdatasource_variant_DataContents = UA_STRING_ALLOC("d5a1d4da-8afb-44d4-a28f-438bfd2f2fc9");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka.RefDataSource"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka.RefDataSource")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table.NodeId */

static UA_StatusCode function_generated_nodeset_308_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:Epson2_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_epson2_to_table_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table.NodeId")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka.NodeId */

static UA_StatusCode function_generated_nodeset_309_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:PLC_Kuka_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_table_to_kuka_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka.NodeId")
);
}

/* DBBaustein - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.DBBaustein */

static UA_StatusCode function_generated_nodeset_310_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbbaustein_variant_DataContents =  UA_UInt32_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbbaustein_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbbaustein_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "DBBaustein");
attr.description = UA_LOCALIZEDTEXT("", "Optional");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.DBBaustein"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "DBBaustein"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_dbbaustein_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_310_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.DBBaustein")
);
}

/* Category - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Category */

static UA_StatusCode function_generated_nodeset_311_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_category_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_category_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_category_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Category");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Category"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Category"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_category_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port.Category")
);
}

/* RefDataSource - ns=2;s=DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.RefDataSource */

static UA_StatusCode function_generated_nodeset_312_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_refdatasource_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_refdatasource_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_refdatasource_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefDataSource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.RefDataSource"),
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RefDataSource"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_datavariableroleclasslib_datasource_itot_client_itot_datablock_refdatasource_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "DataVariableRoleClassLib/DataSource/iTOT-Client/iTOT-DataBlock.RefDataSource")
);
}

/* NodeId - ns=2;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table.NodeId */

static UA_StatusCode function_generated_nodeset_313_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 15;
attr.accessLevel = 15;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_nodeid_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_nodeid_variant_DataContents = UA_STRING_ALLOC("ns=6;s=::Program2:Kuka_Status");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_nodeid_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table.NodeId"),
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "NodeId"),
UA_NODEID_NUMERIC(ns[1], 3007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_0a04cce4_a64a_4566_b916_06a8639d7dcd_kuka_to_table_nodeid_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table.NodeId")
);
}

/* Resource - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Resource */

static UA_StatusCode function_generated_nodeset_314_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Resource");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Resource"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole"),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "Resource"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Resource")
);
}

/* ConnectionPoint - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port:ConnectionPoint */

static UA_StatusCode function_generated_nodeset_315_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConnectionPoint");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port:ConnectionPoint"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port"),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "ConnectionPoint"),
UA_NODEID_STRING(ns[2], "AutomationMLInterfaceClassLib/AutomationMLBaseInterface/PortConnector"),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_generated_nodeset_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port:ConnectionPoint")
);
}

/* ID - ns=2;s=AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port:ConnectionPoint@ID */

static UA_StatusCode function_generated_nodeset_316_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_connectionpoint_id_variant_DataContents =  UA_String_new();
*variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_connectionpoint_id_variant_DataContents = UA_STRING_ALLOC("9942bd9c-c19d-44e4-a197-11b9edf264e7");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_connectionpoint_id_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ID");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port:ConnectionPoint@ID"),
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port:ConnectionPoint"),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ID"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_s_automationmlbaseroleclasslib_automationmlbaserole_port_connectionpoint_id_variant_DataContents);
return retVal;
}

static UA_StatusCode function_generated_nodeset_316_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "AutomationMLBaseRoleClassLib/AutomationMLBaseRole/Port:ConnectionPoint@ID")
);
}

UA_StatusCode generated_nodeset(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/AML/");
ns[2] = UA_Server_addNamespace(server, "http://www.iosb.fraunhofer.de/finalpnpserver.aml");
retVal |= function_generated_nodeset_0_begin(server, ns);
retVal |= function_generated_nodeset_1_begin(server, ns);
retVal |= function_generated_nodeset_2_begin(server, ns);
retVal |= function_generated_nodeset_3_begin(server, ns);
retVal |= function_generated_nodeset_4_begin(server, ns);
retVal |= function_generated_nodeset_5_begin(server, ns);
retVal |= function_generated_nodeset_6_begin(server, ns);
retVal |= function_generated_nodeset_7_begin(server, ns);
retVal |= function_generated_nodeset_8_begin(server, ns);
retVal |= function_generated_nodeset_9_begin(server, ns);
retVal |= function_generated_nodeset_10_begin(server, ns);
retVal |= function_generated_nodeset_11_begin(server, ns);
retVal |= function_generated_nodeset_12_begin(server, ns);
retVal |= function_generated_nodeset_13_begin(server, ns);
retVal |= function_generated_nodeset_14_begin(server, ns);
retVal |= function_generated_nodeset_15_begin(server, ns);
retVal |= function_generated_nodeset_16_begin(server, ns);
retVal |= function_generated_nodeset_17_begin(server, ns);
retVal |= function_generated_nodeset_18_begin(server, ns);
retVal |= function_generated_nodeset_19_begin(server, ns);
retVal |= function_generated_nodeset_20_begin(server, ns);
retVal |= function_generated_nodeset_21_begin(server, ns);
retVal |= function_generated_nodeset_22_begin(server, ns);
retVal |= function_generated_nodeset_23_begin(server, ns);
retVal |= function_generated_nodeset_24_begin(server, ns);
retVal |= function_generated_nodeset_25_begin(server, ns);
retVal |= function_generated_nodeset_26_begin(server, ns);
retVal |= function_generated_nodeset_27_begin(server, ns);
retVal |= function_generated_nodeset_28_begin(server, ns);
retVal |= function_generated_nodeset_29_begin(server, ns);
retVal |= function_generated_nodeset_30_begin(server, ns);
retVal |= function_generated_nodeset_31_begin(server, ns);
retVal |= function_generated_nodeset_32_begin(server, ns);
retVal |= function_generated_nodeset_33_begin(server, ns);
retVal |= function_generated_nodeset_34_begin(server, ns);
retVal |= function_generated_nodeset_35_begin(server, ns);
retVal |= function_generated_nodeset_36_begin(server, ns);
retVal |= function_generated_nodeset_37_begin(server, ns);
retVal |= function_generated_nodeset_38_begin(server, ns);
retVal |= function_generated_nodeset_39_begin(server, ns);
retVal |= function_generated_nodeset_40_begin(server, ns);
retVal |= function_generated_nodeset_41_begin(server, ns);
retVal |= function_generated_nodeset_42_begin(server, ns);
retVal |= function_generated_nodeset_43_begin(server, ns);
retVal |= function_generated_nodeset_44_begin(server, ns);
retVal |= function_generated_nodeset_45_begin(server, ns);
retVal |= function_generated_nodeset_46_begin(server, ns);
retVal |= function_generated_nodeset_47_begin(server, ns);
retVal |= function_generated_nodeset_48_begin(server, ns);
retVal |= function_generated_nodeset_49_begin(server, ns);
retVal |= function_generated_nodeset_50_begin(server, ns);
retVal |= function_generated_nodeset_51_begin(server, ns);
retVal |= function_generated_nodeset_52_begin(server, ns);
retVal |= function_generated_nodeset_53_begin(server, ns);
retVal |= function_generated_nodeset_54_begin(server, ns);
retVal |= function_generated_nodeset_55_begin(server, ns);
retVal |= function_generated_nodeset_56_begin(server, ns);
retVal |= function_generated_nodeset_57_begin(server, ns);
retVal |= function_generated_nodeset_58_begin(server, ns);
retVal |= function_generated_nodeset_59_begin(server, ns);
retVal |= function_generated_nodeset_60_begin(server, ns);
retVal |= function_generated_nodeset_61_begin(server, ns);
retVal |= function_generated_nodeset_62_begin(server, ns);
retVal |= function_generated_nodeset_63_begin(server, ns);
retVal |= function_generated_nodeset_64_begin(server, ns);
retVal |= function_generated_nodeset_65_begin(server, ns);
retVal |= function_generated_nodeset_66_begin(server, ns);
retVal |= function_generated_nodeset_67_begin(server, ns);
retVal |= function_generated_nodeset_68_begin(server, ns);
retVal |= function_generated_nodeset_69_begin(server, ns);
retVal |= function_generated_nodeset_70_begin(server, ns);
retVal |= function_generated_nodeset_71_begin(server, ns);
retVal |= function_generated_nodeset_72_begin(server, ns);
retVal |= function_generated_nodeset_73_begin(server, ns);
retVal |= function_generated_nodeset_74_begin(server, ns);
retVal |= function_generated_nodeset_75_begin(server, ns);
retVal |= function_generated_nodeset_76_begin(server, ns);
retVal |= function_generated_nodeset_77_begin(server, ns);
retVal |= function_generated_nodeset_78_begin(server, ns);
retVal |= function_generated_nodeset_79_begin(server, ns);
retVal |= function_generated_nodeset_80_begin(server, ns);
retVal |= function_generated_nodeset_81_begin(server, ns);
retVal |= function_generated_nodeset_82_begin(server, ns);
retVal |= function_generated_nodeset_83_begin(server, ns);
retVal |= function_generated_nodeset_84_begin(server, ns);
retVal |= function_generated_nodeset_85_begin(server, ns);
retVal |= function_generated_nodeset_86_begin(server, ns);
retVal |= function_generated_nodeset_87_begin(server, ns);
retVal |= function_generated_nodeset_88_begin(server, ns);
retVal |= function_generated_nodeset_89_begin(server, ns);
retVal |= function_generated_nodeset_90_begin(server, ns);
retVal |= function_generated_nodeset_91_begin(server, ns);
retVal |= function_generated_nodeset_92_begin(server, ns);
retVal |= function_generated_nodeset_93_begin(server, ns);
retVal |= function_generated_nodeset_94_begin(server, ns);
retVal |= function_generated_nodeset_95_begin(server, ns);
retVal |= function_generated_nodeset_96_begin(server, ns);
retVal |= function_generated_nodeset_97_begin(server, ns);
retVal |= function_generated_nodeset_98_begin(server, ns);
retVal |= function_generated_nodeset_99_begin(server, ns);
retVal |= function_generated_nodeset_100_begin(server, ns);
retVal |= function_generated_nodeset_101_begin(server, ns);
retVal |= function_generated_nodeset_102_begin(server, ns);
retVal |= function_generated_nodeset_103_begin(server, ns);
retVal |= function_generated_nodeset_104_begin(server, ns);
retVal |= function_generated_nodeset_105_begin(server, ns);
retVal |= function_generated_nodeset_106_begin(server, ns);
retVal |= function_generated_nodeset_107_begin(server, ns);
retVal |= function_generated_nodeset_108_begin(server, ns);
retVal |= function_generated_nodeset_109_begin(server, ns);
retVal |= function_generated_nodeset_110_begin(server, ns);
retVal |= function_generated_nodeset_111_begin(server, ns);
retVal |= function_generated_nodeset_112_begin(server, ns);
retVal |= function_generated_nodeset_113_begin(server, ns);
retVal |= function_generated_nodeset_114_begin(server, ns);
retVal |= function_generated_nodeset_115_begin(server, ns);
retVal |= function_generated_nodeset_116_begin(server, ns);
retVal |= function_generated_nodeset_117_begin(server, ns);
retVal |= function_generated_nodeset_118_begin(server, ns);
retVal |= function_generated_nodeset_119_begin(server, ns);
retVal |= function_generated_nodeset_120_begin(server, ns);
retVal |= function_generated_nodeset_121_begin(server, ns);
retVal |= function_generated_nodeset_122_begin(server, ns);
retVal |= function_generated_nodeset_123_begin(server, ns);
retVal |= function_generated_nodeset_124_begin(server, ns);
retVal |= function_generated_nodeset_125_begin(server, ns);
retVal |= function_generated_nodeset_126_begin(server, ns);
retVal |= function_generated_nodeset_127_begin(server, ns);
retVal |= function_generated_nodeset_128_begin(server, ns);
retVal |= function_generated_nodeset_129_begin(server, ns);
retVal |= function_generated_nodeset_130_begin(server, ns);
retVal |= function_generated_nodeset_131_begin(server, ns);
retVal |= function_generated_nodeset_132_begin(server, ns);
retVal |= function_generated_nodeset_133_begin(server, ns);
retVal |= function_generated_nodeset_134_begin(server, ns);
retVal |= function_generated_nodeset_135_begin(server, ns);
retVal |= function_generated_nodeset_136_begin(server, ns);
retVal |= function_generated_nodeset_137_begin(server, ns);
retVal |= function_generated_nodeset_138_begin(server, ns);
retVal |= function_generated_nodeset_139_begin(server, ns);
retVal |= function_generated_nodeset_140_begin(server, ns);
retVal |= function_generated_nodeset_141_begin(server, ns);
retVal |= function_generated_nodeset_142_begin(server, ns);
retVal |= function_generated_nodeset_143_begin(server, ns);
retVal |= function_generated_nodeset_144_begin(server, ns);
retVal |= function_generated_nodeset_145_begin(server, ns);
retVal |= function_generated_nodeset_146_begin(server, ns);
retVal |= function_generated_nodeset_147_begin(server, ns);
retVal |= function_generated_nodeset_148_begin(server, ns);
retVal |= function_generated_nodeset_149_begin(server, ns);
retVal |= function_generated_nodeset_150_begin(server, ns);
retVal |= function_generated_nodeset_151_begin(server, ns);
retVal |= function_generated_nodeset_152_begin(server, ns);
retVal |= function_generated_nodeset_153_begin(server, ns);
retVal |= function_generated_nodeset_154_begin(server, ns);
retVal |= function_generated_nodeset_155_begin(server, ns);
retVal |= function_generated_nodeset_156_begin(server, ns);
retVal |= function_generated_nodeset_157_begin(server, ns);
retVal |= function_generated_nodeset_158_begin(server, ns);
retVal |= function_generated_nodeset_159_begin(server, ns);
retVal |= function_generated_nodeset_160_begin(server, ns);
retVal |= function_generated_nodeset_161_begin(server, ns);
retVal |= function_generated_nodeset_162_begin(server, ns);
retVal |= function_generated_nodeset_163_begin(server, ns);
retVal |= function_generated_nodeset_164_begin(server, ns);
retVal |= function_generated_nodeset_165_begin(server, ns);
retVal |= function_generated_nodeset_166_begin(server, ns);
retVal |= function_generated_nodeset_167_begin(server, ns);
retVal |= function_generated_nodeset_168_begin(server, ns);
retVal |= function_generated_nodeset_169_begin(server, ns);
retVal |= function_generated_nodeset_170_begin(server, ns);
retVal |= function_generated_nodeset_171_begin(server, ns);
retVal |= function_generated_nodeset_172_begin(server, ns);
retVal |= function_generated_nodeset_173_begin(server, ns);
retVal |= function_generated_nodeset_174_begin(server, ns);
retVal |= function_generated_nodeset_175_begin(server, ns);
retVal |= function_generated_nodeset_176_begin(server, ns);
retVal |= function_generated_nodeset_177_begin(server, ns);
retVal |= function_generated_nodeset_178_begin(server, ns);
retVal |= function_generated_nodeset_179_begin(server, ns);
retVal |= function_generated_nodeset_180_begin(server, ns);
retVal |= function_generated_nodeset_181_begin(server, ns);
retVal |= function_generated_nodeset_182_begin(server, ns);
retVal |= function_generated_nodeset_183_begin(server, ns);
retVal |= function_generated_nodeset_184_begin(server, ns);
retVal |= function_generated_nodeset_185_begin(server, ns);
retVal |= function_generated_nodeset_186_begin(server, ns);
retVal |= function_generated_nodeset_187_begin(server, ns);
retVal |= function_generated_nodeset_188_begin(server, ns);
retVal |= function_generated_nodeset_189_begin(server, ns);
retVal |= function_generated_nodeset_190_begin(server, ns);
retVal |= function_generated_nodeset_191_begin(server, ns);
retVal |= function_generated_nodeset_192_begin(server, ns);
retVal |= function_generated_nodeset_193_begin(server, ns);
retVal |= function_generated_nodeset_194_begin(server, ns);
retVal |= function_generated_nodeset_195_begin(server, ns);
retVal |= function_generated_nodeset_196_begin(server, ns);
retVal |= function_generated_nodeset_197_begin(server, ns);
retVal |= function_generated_nodeset_198_begin(server, ns);
retVal |= function_generated_nodeset_199_begin(server, ns);
retVal |= function_generated_nodeset_200_begin(server, ns);
retVal |= function_generated_nodeset_201_begin(server, ns);
retVal |= function_generated_nodeset_202_begin(server, ns);
retVal |= function_generated_nodeset_203_begin(server, ns);
retVal |= function_generated_nodeset_204_begin(server, ns);
retVal |= function_generated_nodeset_205_begin(server, ns);
retVal |= function_generated_nodeset_206_begin(server, ns);
retVal |= function_generated_nodeset_207_begin(server, ns);
retVal |= function_generated_nodeset_208_begin(server, ns);
retVal |= function_generated_nodeset_209_begin(server, ns);
retVal |= function_generated_nodeset_210_begin(server, ns);
retVal |= function_generated_nodeset_211_begin(server, ns);
retVal |= function_generated_nodeset_212_begin(server, ns);
retVal |= function_generated_nodeset_213_begin(server, ns);
retVal |= function_generated_nodeset_214_begin(server, ns);
retVal |= function_generated_nodeset_215_begin(server, ns);
retVal |= function_generated_nodeset_216_begin(server, ns);
retVal |= function_generated_nodeset_217_begin(server, ns);
retVal |= function_generated_nodeset_218_begin(server, ns);
retVal |= function_generated_nodeset_219_begin(server, ns);
retVal |= function_generated_nodeset_220_begin(server, ns);
retVal |= function_generated_nodeset_221_begin(server, ns);
retVal |= function_generated_nodeset_222_begin(server, ns);
retVal |= function_generated_nodeset_223_begin(server, ns);
retVal |= function_generated_nodeset_224_begin(server, ns);
retVal |= function_generated_nodeset_225_begin(server, ns);
retVal |= function_generated_nodeset_226_begin(server, ns);
retVal |= function_generated_nodeset_227_begin(server, ns);
retVal |= function_generated_nodeset_228_begin(server, ns);
retVal |= function_generated_nodeset_229_begin(server, ns);
retVal |= function_generated_nodeset_230_begin(server, ns);
retVal |= function_generated_nodeset_231_begin(server, ns);
retVal |= function_generated_nodeset_232_begin(server, ns);
retVal |= function_generated_nodeset_233_begin(server, ns);
retVal |= function_generated_nodeset_234_begin(server, ns);
retVal |= function_generated_nodeset_235_begin(server, ns);
retVal |= function_generated_nodeset_236_begin(server, ns);
retVal |= function_generated_nodeset_237_begin(server, ns);
retVal |= function_generated_nodeset_238_begin(server, ns);
retVal |= function_generated_nodeset_239_begin(server, ns);
retVal |= function_generated_nodeset_240_begin(server, ns);
retVal |= function_generated_nodeset_241_begin(server, ns);
retVal |= function_generated_nodeset_242_begin(server, ns);
retVal |= function_generated_nodeset_243_begin(server, ns);
retVal |= function_generated_nodeset_244_begin(server, ns);
retVal |= function_generated_nodeset_245_begin(server, ns);
retVal |= function_generated_nodeset_246_begin(server, ns);
retVal |= function_generated_nodeset_247_begin(server, ns);
retVal |= function_generated_nodeset_248_begin(server, ns);
retVal |= function_generated_nodeset_249_begin(server, ns);
retVal |= function_generated_nodeset_250_begin(server, ns);
retVal |= function_generated_nodeset_251_begin(server, ns);
retVal |= function_generated_nodeset_252_begin(server, ns);
retVal |= function_generated_nodeset_253_begin(server, ns);
retVal |= function_generated_nodeset_254_begin(server, ns);
retVal |= function_generated_nodeset_255_begin(server, ns);
retVal |= function_generated_nodeset_256_begin(server, ns);
retVal |= function_generated_nodeset_257_begin(server, ns);
retVal |= function_generated_nodeset_258_begin(server, ns);
retVal |= function_generated_nodeset_259_begin(server, ns);
retVal |= function_generated_nodeset_260_begin(server, ns);
retVal |= function_generated_nodeset_261_begin(server, ns);
retVal |= function_generated_nodeset_262_begin(server, ns);
retVal |= function_generated_nodeset_263_begin(server, ns);
retVal |= function_generated_nodeset_264_begin(server, ns);
retVal |= function_generated_nodeset_265_begin(server, ns);
retVal |= function_generated_nodeset_266_begin(server, ns);
retVal |= function_generated_nodeset_267_begin(server, ns);
retVal |= function_generated_nodeset_268_begin(server, ns);
retVal |= function_generated_nodeset_269_begin(server, ns);
retVal |= function_generated_nodeset_270_begin(server, ns);
retVal |= function_generated_nodeset_271_begin(server, ns);
retVal |= function_generated_nodeset_272_begin(server, ns);
retVal |= function_generated_nodeset_273_begin(server, ns);
retVal |= function_generated_nodeset_274_begin(server, ns);
retVal |= function_generated_nodeset_275_begin(server, ns);
retVal |= function_generated_nodeset_276_begin(server, ns);
retVal |= function_generated_nodeset_277_begin(server, ns);
retVal |= function_generated_nodeset_278_begin(server, ns);
retVal |= function_generated_nodeset_279_begin(server, ns);
retVal |= function_generated_nodeset_280_begin(server, ns);
retVal |= function_generated_nodeset_281_begin(server, ns);
retVal |= function_generated_nodeset_282_begin(server, ns);
retVal |= function_generated_nodeset_283_begin(server, ns);
retVal |= function_generated_nodeset_284_begin(server, ns);
retVal |= function_generated_nodeset_285_begin(server, ns);
retVal |= function_generated_nodeset_286_begin(server, ns);
retVal |= function_generated_nodeset_287_begin(server, ns);
retVal |= function_generated_nodeset_288_begin(server, ns);
retVal |= function_generated_nodeset_289_begin(server, ns);
retVal |= function_generated_nodeset_290_begin(server, ns);
retVal |= function_generated_nodeset_291_begin(server, ns);
retVal |= function_generated_nodeset_292_begin(server, ns);
retVal |= function_generated_nodeset_293_begin(server, ns);
retVal |= function_generated_nodeset_294_begin(server, ns);
retVal |= function_generated_nodeset_295_begin(server, ns);
retVal |= function_generated_nodeset_296_begin(server, ns);
retVal |= function_generated_nodeset_297_begin(server, ns);
retVal |= function_generated_nodeset_298_begin(server, ns);
retVal |= function_generated_nodeset_299_begin(server, ns);
retVal |= function_generated_nodeset_300_begin(server, ns);
retVal |= function_generated_nodeset_301_begin(server, ns);
retVal |= function_generated_nodeset_302_begin(server, ns);
retVal |= function_generated_nodeset_303_begin(server, ns);
retVal |= function_generated_nodeset_304_begin(server, ns);
retVal |= function_generated_nodeset_305_begin(server, ns);
retVal |= function_generated_nodeset_306_begin(server, ns);
retVal |= function_generated_nodeset_307_begin(server, ns);
retVal |= function_generated_nodeset_308_begin(server, ns);
retVal |= function_generated_nodeset_309_begin(server, ns);
retVal |= function_generated_nodeset_310_begin(server, ns);
retVal |= function_generated_nodeset_311_begin(server, ns);
retVal |= function_generated_nodeset_312_begin(server, ns);
retVal |= function_generated_nodeset_313_begin(server, ns);
retVal |= function_generated_nodeset_314_begin(server, ns);
retVal |= function_generated_nodeset_315_begin(server, ns);
retVal |= function_generated_nodeset_316_begin(server, ns);
retVal |= function_generated_nodeset_316_finish(server, ns);
retVal |= function_generated_nodeset_315_finish(server, ns);
retVal |= function_generated_nodeset_314_finish(server, ns);
retVal |= function_generated_nodeset_313_finish(server, ns);
retVal |= function_generated_nodeset_312_finish(server, ns);
retVal |= function_generated_nodeset_311_finish(server, ns);
retVal |= function_generated_nodeset_310_finish(server, ns);
retVal |= function_generated_nodeset_309_finish(server, ns);
retVal |= function_generated_nodeset_308_finish(server, ns);
retVal |= function_generated_nodeset_307_finish(server, ns);
retVal |= function_generated_nodeset_306_finish(server, ns);
retVal |= function_generated_nodeset_305_finish(server, ns);
retVal |= function_generated_nodeset_304_finish(server, ns);
retVal |= function_generated_nodeset_303_finish(server, ns);
retVal |= function_generated_nodeset_302_finish(server, ns);
retVal |= function_generated_nodeset_301_finish(server, ns);
retVal |= function_generated_nodeset_300_finish(server, ns);
retVal |= function_generated_nodeset_299_finish(server, ns);
retVal |= function_generated_nodeset_298_finish(server, ns);
retVal |= function_generated_nodeset_297_finish(server, ns);
retVal |= function_generated_nodeset_296_finish(server, ns);
retVal |= function_generated_nodeset_295_finish(server, ns);
retVal |= function_generated_nodeset_294_finish(server, ns);
retVal |= function_generated_nodeset_293_finish(server, ns);
retVal |= function_generated_nodeset_292_finish(server, ns);
retVal |= function_generated_nodeset_291_finish(server, ns);
retVal |= function_generated_nodeset_290_finish(server, ns);
retVal |= function_generated_nodeset_289_finish(server, ns);
retVal |= function_generated_nodeset_288_finish(server, ns);
retVal |= function_generated_nodeset_287_finish(server, ns);
retVal |= function_generated_nodeset_286_finish(server, ns);
retVal |= function_generated_nodeset_285_finish(server, ns);
retVal |= function_generated_nodeset_284_finish(server, ns);
retVal |= function_generated_nodeset_283_finish(server, ns);
retVal |= function_generated_nodeset_282_finish(server, ns);
retVal |= function_generated_nodeset_281_finish(server, ns);
retVal |= function_generated_nodeset_280_finish(server, ns);
retVal |= function_generated_nodeset_279_finish(server, ns);
retVal |= function_generated_nodeset_278_finish(server, ns);
retVal |= function_generated_nodeset_277_finish(server, ns);
retVal |= function_generated_nodeset_276_finish(server, ns);
retVal |= function_generated_nodeset_275_finish(server, ns);
retVal |= function_generated_nodeset_274_finish(server, ns);
retVal |= function_generated_nodeset_273_finish(server, ns);
retVal |= function_generated_nodeset_272_finish(server, ns);
retVal |= function_generated_nodeset_271_finish(server, ns);
retVal |= function_generated_nodeset_270_finish(server, ns);
retVal |= function_generated_nodeset_269_finish(server, ns);
retVal |= function_generated_nodeset_268_finish(server, ns);
retVal |= function_generated_nodeset_267_finish(server, ns);
retVal |= function_generated_nodeset_266_finish(server, ns);
retVal |= function_generated_nodeset_265_finish(server, ns);
retVal |= function_generated_nodeset_264_finish(server, ns);
retVal |= function_generated_nodeset_263_finish(server, ns);
retVal |= function_generated_nodeset_262_finish(server, ns);
retVal |= function_generated_nodeset_261_finish(server, ns);
retVal |= function_generated_nodeset_260_finish(server, ns);
retVal |= function_generated_nodeset_259_finish(server, ns);
retVal |= function_generated_nodeset_258_finish(server, ns);
retVal |= function_generated_nodeset_257_finish(server, ns);
retVal |= function_generated_nodeset_256_finish(server, ns);
retVal |= function_generated_nodeset_255_finish(server, ns);
retVal |= function_generated_nodeset_254_finish(server, ns);
retVal |= function_generated_nodeset_253_finish(server, ns);
retVal |= function_generated_nodeset_252_finish(server, ns);
retVal |= function_generated_nodeset_251_finish(server, ns);
retVal |= function_generated_nodeset_250_finish(server, ns);
retVal |= function_generated_nodeset_249_finish(server, ns);
retVal |= function_generated_nodeset_248_finish(server, ns);
retVal |= function_generated_nodeset_247_finish(server, ns);
retVal |= function_generated_nodeset_246_finish(server, ns);
retVal |= function_generated_nodeset_245_finish(server, ns);
retVal |= function_generated_nodeset_244_finish(server, ns);
retVal |= function_generated_nodeset_243_finish(server, ns);
retVal |= function_generated_nodeset_242_finish(server, ns);
retVal |= function_generated_nodeset_241_finish(server, ns);
retVal |= function_generated_nodeset_240_finish(server, ns);
retVal |= function_generated_nodeset_239_finish(server, ns);
retVal |= function_generated_nodeset_238_finish(server, ns);
retVal |= function_generated_nodeset_237_finish(server, ns);
retVal |= function_generated_nodeset_236_finish(server, ns);
retVal |= function_generated_nodeset_235_finish(server, ns);
retVal |= function_generated_nodeset_234_finish(server, ns);
retVal |= function_generated_nodeset_233_finish(server, ns);
retVal |= function_generated_nodeset_232_finish(server, ns);
retVal |= function_generated_nodeset_231_finish(server, ns);
retVal |= function_generated_nodeset_230_finish(server, ns);
retVal |= function_generated_nodeset_229_finish(server, ns);
retVal |= function_generated_nodeset_228_finish(server, ns);
retVal |= function_generated_nodeset_227_finish(server, ns);
retVal |= function_generated_nodeset_226_finish(server, ns);
retVal |= function_generated_nodeset_225_finish(server, ns);
retVal |= function_generated_nodeset_224_finish(server, ns);
retVal |= function_generated_nodeset_223_finish(server, ns);
retVal |= function_generated_nodeset_222_finish(server, ns);
retVal |= function_generated_nodeset_221_finish(server, ns);
retVal |= function_generated_nodeset_220_finish(server, ns);
retVal |= function_generated_nodeset_219_finish(server, ns);
retVal |= function_generated_nodeset_218_finish(server, ns);
retVal |= function_generated_nodeset_217_finish(server, ns);
retVal |= function_generated_nodeset_216_finish(server, ns);
retVal |= function_generated_nodeset_215_finish(server, ns);
retVal |= function_generated_nodeset_214_finish(server, ns);
retVal |= function_generated_nodeset_213_finish(server, ns);
retVal |= function_generated_nodeset_212_finish(server, ns);
retVal |= function_generated_nodeset_211_finish(server, ns);
retVal |= function_generated_nodeset_210_finish(server, ns);
retVal |= function_generated_nodeset_209_finish(server, ns);
retVal |= function_generated_nodeset_208_finish(server, ns);
retVal |= function_generated_nodeset_207_finish(server, ns);
retVal |= function_generated_nodeset_206_finish(server, ns);
retVal |= function_generated_nodeset_205_finish(server, ns);
retVal |= function_generated_nodeset_204_finish(server, ns);
retVal |= function_generated_nodeset_203_finish(server, ns);
retVal |= function_generated_nodeset_202_finish(server, ns);
retVal |= function_generated_nodeset_201_finish(server, ns);
retVal |= function_generated_nodeset_200_finish(server, ns);
retVal |= function_generated_nodeset_199_finish(server, ns);
retVal |= function_generated_nodeset_198_finish(server, ns);
retVal |= function_generated_nodeset_197_finish(server, ns);
retVal |= function_generated_nodeset_196_finish(server, ns);
retVal |= function_generated_nodeset_195_finish(server, ns);
retVal |= function_generated_nodeset_194_finish(server, ns);
retVal |= function_generated_nodeset_193_finish(server, ns);
retVal |= function_generated_nodeset_192_finish(server, ns);
retVal |= function_generated_nodeset_191_finish(server, ns);
retVal |= function_generated_nodeset_190_finish(server, ns);
retVal |= function_generated_nodeset_189_finish(server, ns);
retVal |= function_generated_nodeset_188_finish(server, ns);
retVal |= function_generated_nodeset_187_finish(server, ns);
retVal |= function_generated_nodeset_186_finish(server, ns);
retVal |= function_generated_nodeset_185_finish(server, ns);
retVal |= function_generated_nodeset_184_finish(server, ns);
retVal |= function_generated_nodeset_183_finish(server, ns);
retVal |= function_generated_nodeset_182_finish(server, ns);
retVal |= function_generated_nodeset_181_finish(server, ns);
retVal |= function_generated_nodeset_180_finish(server, ns);
retVal |= function_generated_nodeset_179_finish(server, ns);
retVal |= function_generated_nodeset_178_finish(server, ns);
retVal |= function_generated_nodeset_177_finish(server, ns);
retVal |= function_generated_nodeset_176_finish(server, ns);
retVal |= function_generated_nodeset_175_finish(server, ns);
retVal |= function_generated_nodeset_174_finish(server, ns);
retVal |= function_generated_nodeset_173_finish(server, ns);
retVal |= function_generated_nodeset_172_finish(server, ns);
retVal |= function_generated_nodeset_171_finish(server, ns);
retVal |= function_generated_nodeset_170_finish(server, ns);
retVal |= function_generated_nodeset_169_finish(server, ns);
retVal |= function_generated_nodeset_168_finish(server, ns);
retVal |= function_generated_nodeset_167_finish(server, ns);
retVal |= function_generated_nodeset_166_finish(server, ns);
retVal |= function_generated_nodeset_165_finish(server, ns);
retVal |= function_generated_nodeset_164_finish(server, ns);
retVal |= function_generated_nodeset_163_finish(server, ns);
retVal |= function_generated_nodeset_162_finish(server, ns);
retVal |= function_generated_nodeset_161_finish(server, ns);
retVal |= function_generated_nodeset_160_finish(server, ns);
retVal |= function_generated_nodeset_159_finish(server, ns);
retVal |= function_generated_nodeset_158_finish(server, ns);
retVal |= function_generated_nodeset_157_finish(server, ns);
retVal |= function_generated_nodeset_156_finish(server, ns);
retVal |= function_generated_nodeset_155_finish(server, ns);
retVal |= function_generated_nodeset_154_finish(server, ns);
retVal |= function_generated_nodeset_153_finish(server, ns);
retVal |= function_generated_nodeset_152_finish(server, ns);
retVal |= function_generated_nodeset_151_finish(server, ns);
retVal |= function_generated_nodeset_150_finish(server, ns);
retVal |= function_generated_nodeset_149_finish(server, ns);
retVal |= function_generated_nodeset_148_finish(server, ns);
retVal |= function_generated_nodeset_147_finish(server, ns);
retVal |= function_generated_nodeset_146_finish(server, ns);
retVal |= function_generated_nodeset_145_finish(server, ns);
retVal |= function_generated_nodeset_144_finish(server, ns);
retVal |= function_generated_nodeset_143_finish(server, ns);
retVal |= function_generated_nodeset_142_finish(server, ns);
retVal |= function_generated_nodeset_141_finish(server, ns);
retVal |= function_generated_nodeset_140_finish(server, ns);
retVal |= function_generated_nodeset_139_finish(server, ns);
retVal |= function_generated_nodeset_138_finish(server, ns);
retVal |= function_generated_nodeset_137_finish(server, ns);
retVal |= function_generated_nodeset_136_finish(server, ns);
retVal |= function_generated_nodeset_135_finish(server, ns);
retVal |= function_generated_nodeset_134_finish(server, ns);
retVal |= function_generated_nodeset_133_finish(server, ns);
retVal |= function_generated_nodeset_132_finish(server, ns);
retVal |= function_generated_nodeset_131_finish(server, ns);
retVal |= function_generated_nodeset_130_finish(server, ns);
retVal |= function_generated_nodeset_129_finish(server, ns);
retVal |= function_generated_nodeset_128_finish(server, ns);
retVal |= function_generated_nodeset_127_finish(server, ns);
retVal |= function_generated_nodeset_126_finish(server, ns);
retVal |= function_generated_nodeset_125_finish(server, ns);
retVal |= function_generated_nodeset_124_finish(server, ns);
retVal |= function_generated_nodeset_123_finish(server, ns);
retVal |= function_generated_nodeset_122_finish(server, ns);
retVal |= function_generated_nodeset_121_finish(server, ns);
retVal |= function_generated_nodeset_120_finish(server, ns);
retVal |= function_generated_nodeset_119_finish(server, ns);
retVal |= function_generated_nodeset_118_finish(server, ns);
retVal |= function_generated_nodeset_117_finish(server, ns);
retVal |= function_generated_nodeset_116_finish(server, ns);
retVal |= function_generated_nodeset_115_finish(server, ns);
retVal |= function_generated_nodeset_114_finish(server, ns);
retVal |= function_generated_nodeset_113_finish(server, ns);
retVal |= function_generated_nodeset_112_finish(server, ns);
retVal |= function_generated_nodeset_111_finish(server, ns);
retVal |= function_generated_nodeset_110_finish(server, ns);
retVal |= function_generated_nodeset_109_finish(server, ns);
retVal |= function_generated_nodeset_108_finish(server, ns);
retVal |= function_generated_nodeset_107_finish(server, ns);
retVal |= function_generated_nodeset_106_finish(server, ns);
retVal |= function_generated_nodeset_105_finish(server, ns);
retVal |= function_generated_nodeset_104_finish(server, ns);
retVal |= function_generated_nodeset_103_finish(server, ns);
retVal |= function_generated_nodeset_102_finish(server, ns);
retVal |= function_generated_nodeset_101_finish(server, ns);
retVal |= function_generated_nodeset_100_finish(server, ns);
retVal |= function_generated_nodeset_99_finish(server, ns);
retVal |= function_generated_nodeset_98_finish(server, ns);
retVal |= function_generated_nodeset_97_finish(server, ns);
retVal |= function_generated_nodeset_96_finish(server, ns);
retVal |= function_generated_nodeset_95_finish(server, ns);
retVal |= function_generated_nodeset_94_finish(server, ns);
retVal |= function_generated_nodeset_93_finish(server, ns);
retVal |= function_generated_nodeset_92_finish(server, ns);
retVal |= function_generated_nodeset_91_finish(server, ns);
retVal |= function_generated_nodeset_90_finish(server, ns);
retVal |= function_generated_nodeset_89_finish(server, ns);
retVal |= function_generated_nodeset_88_finish(server, ns);
retVal |= function_generated_nodeset_87_finish(server, ns);
retVal |= function_generated_nodeset_86_finish(server, ns);
retVal |= function_generated_nodeset_85_finish(server, ns);
retVal |= function_generated_nodeset_84_finish(server, ns);
retVal |= function_generated_nodeset_83_finish(server, ns);
retVal |= function_generated_nodeset_82_finish(server, ns);
retVal |= function_generated_nodeset_81_finish(server, ns);
retVal |= function_generated_nodeset_80_finish(server, ns);
retVal |= function_generated_nodeset_79_finish(server, ns);
retVal |= function_generated_nodeset_78_finish(server, ns);
retVal |= function_generated_nodeset_77_finish(server, ns);
retVal |= function_generated_nodeset_76_finish(server, ns);
retVal |= function_generated_nodeset_75_finish(server, ns);
retVal |= function_generated_nodeset_74_finish(server, ns);
retVal |= function_generated_nodeset_73_finish(server, ns);
retVal |= function_generated_nodeset_72_finish(server, ns);
retVal |= function_generated_nodeset_71_finish(server, ns);
retVal |= function_generated_nodeset_70_finish(server, ns);
retVal |= function_generated_nodeset_69_finish(server, ns);
retVal |= function_generated_nodeset_68_finish(server, ns);
retVal |= function_generated_nodeset_67_finish(server, ns);
retVal |= function_generated_nodeset_66_finish(server, ns);
retVal |= function_generated_nodeset_65_finish(server, ns);
retVal |= function_generated_nodeset_64_finish(server, ns);
retVal |= function_generated_nodeset_63_finish(server, ns);
retVal |= function_generated_nodeset_62_finish(server, ns);
retVal |= function_generated_nodeset_61_finish(server, ns);
retVal |= function_generated_nodeset_60_finish(server, ns);
retVal |= function_generated_nodeset_59_finish(server, ns);
retVal |= function_generated_nodeset_58_finish(server, ns);
retVal |= function_generated_nodeset_57_finish(server, ns);
retVal |= function_generated_nodeset_56_finish(server, ns);
retVal |= function_generated_nodeset_55_finish(server, ns);
retVal |= function_generated_nodeset_54_finish(server, ns);
retVal |= function_generated_nodeset_53_finish(server, ns);
retVal |= function_generated_nodeset_52_finish(server, ns);
retVal |= function_generated_nodeset_51_finish(server, ns);
retVal |= function_generated_nodeset_50_finish(server, ns);
retVal |= function_generated_nodeset_49_finish(server, ns);
retVal |= function_generated_nodeset_48_finish(server, ns);
retVal |= function_generated_nodeset_47_finish(server, ns);
retVal |= function_generated_nodeset_46_finish(server, ns);
retVal |= function_generated_nodeset_45_finish(server, ns);
retVal |= function_generated_nodeset_44_finish(server, ns);
retVal |= function_generated_nodeset_43_finish(server, ns);
retVal |= function_generated_nodeset_42_finish(server, ns);
retVal |= function_generated_nodeset_41_finish(server, ns);
retVal |= function_generated_nodeset_40_finish(server, ns);
retVal |= function_generated_nodeset_39_finish(server, ns);
retVal |= function_generated_nodeset_38_finish(server, ns);
retVal |= function_generated_nodeset_37_finish(server, ns);
retVal |= function_generated_nodeset_36_finish(server, ns);
retVal |= function_generated_nodeset_35_finish(server, ns);
retVal |= function_generated_nodeset_34_finish(server, ns);
retVal |= function_generated_nodeset_33_finish(server, ns);
retVal |= function_generated_nodeset_32_finish(server, ns);
retVal |= function_generated_nodeset_31_finish(server, ns);
retVal |= function_generated_nodeset_30_finish(server, ns);
retVal |= function_generated_nodeset_29_finish(server, ns);
retVal |= function_generated_nodeset_28_finish(server, ns);
retVal |= function_generated_nodeset_27_finish(server, ns);
retVal |= function_generated_nodeset_26_finish(server, ns);
retVal |= function_generated_nodeset_25_finish(server, ns);
retVal |= function_generated_nodeset_24_finish(server, ns);
retVal |= function_generated_nodeset_23_finish(server, ns);
retVal |= function_generated_nodeset_22_finish(server, ns);
retVal |= function_generated_nodeset_21_finish(server, ns);
retVal |= function_generated_nodeset_20_finish(server, ns);
retVal |= function_generated_nodeset_19_finish(server, ns);
retVal |= function_generated_nodeset_18_finish(server, ns);
retVal |= function_generated_nodeset_17_finish(server, ns);
retVal |= function_generated_nodeset_16_finish(server, ns);
retVal |= function_generated_nodeset_15_finish(server, ns);
retVal |= function_generated_nodeset_14_finish(server, ns);
retVal |= function_generated_nodeset_13_finish(server, ns);
retVal |= function_generated_nodeset_12_finish(server, ns);
retVal |= function_generated_nodeset_11_finish(server, ns);
retVal |= function_generated_nodeset_10_finish(server, ns);
retVal |= function_generated_nodeset_9_finish(server, ns);
retVal |= function_generated_nodeset_8_finish(server, ns);
retVal |= function_generated_nodeset_7_finish(server, ns);
retVal |= function_generated_nodeset_6_finish(server, ns);
retVal |= function_generated_nodeset_5_finish(server, ns);
retVal |= function_generated_nodeset_4_finish(server, ns);
retVal |= function_generated_nodeset_3_finish(server, ns);
retVal |= function_generated_nodeset_2_finish(server, ns);
retVal |= function_generated_nodeset_1_finish(server, ns);
retVal |= function_generated_nodeset_0_finish(server, ns);
return retVal;
}
