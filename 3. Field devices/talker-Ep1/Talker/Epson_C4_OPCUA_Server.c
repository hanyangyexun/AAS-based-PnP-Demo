/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

/**
 * Adding Variables to a Server
 * ----------------------------
 *
 * This tutorial shows how to work with data types and how to add variable nodes
 * to a server. First, we add a new variable to the server. Take a look at the
 * definition of the ``UA_VariableAttributes`` structure to see the list of all
 * attributes defined for VariableNodes.
 *
 * Note that the default settings have the AccessLevel of the variable value as
 * read only. See below for making the variable writable.
 */

#include <signal.h>
#include <stdio.h>
#include "open62541.h"
///////////ShareMemory//////////////
#include <sys/shm.h>


UA_NodeId pumpId;



//////////////////*share memory-command*//////////////////////
int shmid1;
char *UC_Epson_C4_Start_Set;

//////////////////*share memory-command*//////////////////////
int shmid2;
char *UC_Turntable_Running_Status;

//////////////////*share memory-command*//////////////////////
int shmid3;
char *UC_Epson_C4_Running_Status;



//////////////////*share memory-Monitoring*//////////////////////
int shmid4;
char *UC_EPSON_C4_SensorLR_Running_Status;

//////////////////*share memory-Monitoring*//////////////////////
int shmid5;
char *UC_EPSON_C4_Indicator_Light_Status;

//////////////////*share memory-Monitoring*//////////////////////
int shmid6;
char *UC_EPSON_C4_Gripper_Status;

//////////////////*share memory-Monitoring*//////////////////////
int shmid7;
char *UC_EPSON_C4_X_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid8;
char *UC_EPSON_C4_Y_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid9;
char *UC_EPSON_C4_Z_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid10;
char *UC_EPSON_C4_U_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid11;
char *UC_EPSON_C4_V_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid12;
char *UC_EPSON_C4_W_Data;

/**
 * Monitoring information 
 */
static void
EPSON_C4_Robot_Monitoring(UA_Server *server) {
    UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_Robot_Monitoring");
    UA_Server_addObjectNode(server, UA_NODEID_NULL,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                            UA_QUALIFIEDNAME(1, "EPSON_C4_Robot_Monitoring"), UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
                            oAttr, NULL, &pumpId);
}

static void
monitoring_addVariable(UA_Server *server) {

    /* Define the attribute of the myInteger variable node */
    UA_NodeId Turntable_Running_Status_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Turntable_Running_Status");
    UA_VariableAttributes mnAttr_Turntable_Running_Status = UA_VariableAttributes_default;
    UA_String Turntable_Running_Status = UA_STRING("0");
    UA_Variant_setScalar(&mnAttr_Turntable_Running_Status.value, &Turntable_Running_Status, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_Turntable_Running_Status.displayName = UA_LOCALIZEDTEXT("en-US", "Turntable_Running_Status");
    mnAttr_Turntable_Running_Status.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, Turntable_Running_Status_NodeId, pumpId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Turntable_Running_Status"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_Turntable_Running_Status, NULL, NULL);

    /* Define the attribute of the myInteger variable node */
    UA_NodeId EPSON_C4_SensorLR_Running_Status_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_SensorLR_Running_Status");
    UA_VariableAttributes mnAttr_EPSON_C4_SensorLR_Running_Status = UA_VariableAttributes_default;
    UA_String EPSON_C4_SensorLR_Running_Status = UA_STRING("SLR00");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_SensorLR_Running_Status.value, &EPSON_C4_SensorLR_Running_Status, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_SensorLR_Running_Status.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_SensorLR_Running_Status");
    mnAttr_EPSON_C4_SensorLR_Running_Status.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_SensorLR_Running_Status_NodeId, pumpId,
                               UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_SensorLR_Running_Status"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_SensorLR_Running_Status, NULL, NULL);

    /* Define the attribute of the myInteger variable node */
    UA_NodeId EPSON_C4_Indicator_Light_Status_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Indicator_Light_Status");
    UA_VariableAttributes mnAttr_EPSON_C4_Indicator_Light_Status = UA_VariableAttributes_default;
    UA_String EPSON_C4_Indicator_Light_Status = UA_STRING("SLR00");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_Indicator_Light_Status.value, &EPSON_C4_Indicator_Light_Status, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_Indicator_Light_Status.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_Indicator_Light_Status");
    mnAttr_EPSON_C4_Indicator_Light_Status.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_Indicator_Light_Status_NodeId, pumpId,
                               UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_Indicator_Light_Status"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_Indicator_Light_Status, NULL, NULL);

    /* Define the attribute of the myInteger variable node */
    UA_NodeId EPSON_C4_Gripper_Status_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Gripper_Status");
    UA_VariableAttributes mnAttr_EPSON_C4_Gripper_Status = UA_VariableAttributes_default;
    UA_String EPSON_C4_Gripper_Status = UA_STRING("SLR00");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_Gripper_Status.value, &EPSON_C4_Gripper_Status, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_Gripper_Status.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_Gripper_Status");
    mnAttr_EPSON_C4_Gripper_Status.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_Gripper_Status_NodeId, pumpId,
                               UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_Gripper_Status"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_Gripper_Status, NULL, NULL);

    /* Define the attribute of the myInteger variable node */
    UA_NodeId EPSON_C4_X_Data_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_X_Data");
    UA_VariableAttributes mnAttr_EPSON_C4_X_Data = UA_VariableAttributes_default;
    UA_String EPSON_C4_X_Data = UA_STRING("0.160");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_X_Data.value, &EPSON_C4_X_Data, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_X_Data.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_X_Data");
    mnAttr_EPSON_C4_X_Data.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_X_Data_NodeId, pumpId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_X_Data"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_X_Data, NULL, NULL);

    UA_NodeId EPSON_C4_Y_Data_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Y_Data");
    UA_VariableAttributes mnAttr_EPSON_C4_Y_Data = UA_VariableAttributes_default;
    UA_String EPSON_C4_Y_Data = UA_STRING("346.848");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_Y_Data.value, &EPSON_C4_Y_Data, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_Y_Data.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_Y_Data");
    mnAttr_EPSON_C4_Y_Data.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_Y_Data_NodeId, pumpId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_Y_Data"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_Y_Data, NULL, NULL);

    UA_NodeId EPSON_C4_Z_Data_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Z_Data");
    UA_VariableAttributes mnAttr_EPSON_C4_Z_Data = UA_VariableAttributes_default;
    UA_String EPSON_C4_Z_Data = UA_STRING("510.079");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_Z_Data.value, &EPSON_C4_Z_Data, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_Z_Data.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_Z_Data");
    mnAttr_EPSON_C4_Z_Data.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_Z_Data_NodeId, pumpId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_Z_Data"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_Z_Data, NULL, NULL);

    UA_NodeId EPSON_C4_U_Data_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_U_Data");
    UA_VariableAttributes mnAttr_EPSON_C4_U_Data = UA_VariableAttributes_default;
    UA_String EPSON_C4_U_Data = UA_STRING("90.189");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_U_Data.value, &EPSON_C4_U_Data, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_U_Data.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_U_Data");
    mnAttr_EPSON_C4_U_Data.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_U_Data_NodeId, pumpId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_U_Data"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_U_Data, NULL, NULL);

    UA_NodeId EPSON_C4_V_Data_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_V_Data");
    UA_VariableAttributes mnAttr_EPSON_C4_V_Data = UA_VariableAttributes_default;
    UA_String EPSON_C4_V_Data = UA_STRING("-0.223");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_V_Data.value, &EPSON_C4_V_Data, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_V_Data.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_V_Data");
    mnAttr_EPSON_C4_V_Data.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_V_Data_NodeId, pumpId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_V_Data"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_V_Data, NULL, NULL);

    UA_NodeId EPSON_C4_W_Data_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_W_Data");
    UA_VariableAttributes mnAttr_EPSON_C4_W_Data = UA_VariableAttributes_default;
    UA_String EPSON_C4_W_Data = UA_STRING("-179.451");
    UA_Variant_setScalar(&mnAttr_EPSON_C4_W_Data.value, &EPSON_C4_W_Data, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_EPSON_C4_W_Data.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_W_Data");
    mnAttr_EPSON_C4_W_Data.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, EPSON_C4_W_Data_NodeId, pumpId,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "EPSON_C4_W_Data"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_EPSON_C4_W_Data, NULL, NULL);


}

/**
 * Command information 
 */

UA_NodeId pumpId_command;
static void
EPSON_C4_Robot_Command(UA_Server *server) {
    UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
    oAttr.displayName = UA_LOCALIZEDTEXT("en-US", "EPSON_C4_Robot_Command");
    UA_Server_addObjectNode(server, UA_NODEID_NULL,
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                            UA_QUALIFIEDNAME(1, "EPSON_C4_Robot_Command"), UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
                            oAttr, NULL, &pumpId_command);
}


static void
Command_addVariable(UA_Server *server) {
    /* Define the attribute of the myInteger variable node */
    UA_NodeId Epson_C4_Start_Set_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Command:Epson_C4_Start_Set");
    UA_VariableAttributes mnAttr_Epson_C4_Start_Set = UA_VariableAttributes_default;
    UA_String Epson_C4_Start_Set = UA_STRING("0");
    UA_Variant_setScalar(&mnAttr_Epson_C4_Start_Set.value, &Epson_C4_Start_Set, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_Epson_C4_Start_Set.displayName = UA_LOCALIZEDTEXT("en-US", "Epson_C4_Start_Set");
    mnAttr_Epson_C4_Start_Set.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, Epson_C4_Start_Set_NodeId, pumpId_command,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Epson_C4_Start_Set"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_Epson_C4_Start_Set, NULL, NULL);

    /* Define the attribute of the myInteger variable node */
    UA_NodeId Epson_C4_Running_Status_NodeId = UA_NODEID_STRING(1, "::EPSON_C4_Robot_Command:Epson_C4_Running_Status");
    UA_VariableAttributes mnAttr_Epson_C4_Running_Status = UA_VariableAttributes_default;
    UA_String Epson_C4_Running_Status = UA_STRING("0");
    UA_Variant_setScalar(&mnAttr_Epson_C4_Running_Status.value, &Epson_C4_Running_Status, &UA_TYPES[UA_TYPES_STRING]);
    mnAttr_Epson_C4_Running_Status.displayName = UA_LOCALIZEDTEXT("en-US", "Epson_C4_Running_Status");
    mnAttr_Epson_C4_Running_Status.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Server_addVariableNode(server, Epson_C4_Running_Status_NodeId, pumpId_command,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, "Epson_C4_Running_Status"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr_Epson_C4_Running_Status, NULL, NULL);

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void
writeVariable(UA_Server *server) {
    UA_NodeId myIntegerNodeId = UA_NODEID_STRING(1, "the.answer");

    /* Write a different integer value */
    UA_Int32 myInteger = 43;
    UA_Variant myVar;
    UA_Variant_init(&myVar);
    UA_Variant_setScalar(&myVar, &myInteger, &UA_TYPES[UA_TYPES_INT32]);
    UA_Server_writeValue(server, myIntegerNodeId, myVar);

    /* Set the status code of the value to an error code. The function
     * UA_Server_write provides access to the raw service. The above
     * UA_Server_writeValue is syntactic sugar for writing a specific node
     * attribute with the write service. */
    UA_WriteValue wv;
    UA_WriteValue_init(&wv);
    wv.nodeId = myIntegerNodeId;
    wv.attributeId = UA_ATTRIBUTEID_VALUE;
    wv.value.status = UA_STATUSCODE_BADNOTCONNECTED;
    wv.value.hasStatus = true;
    UA_Server_write(server, &wv);

    /* Reset the variable to a good statuscode with a value */
    wv.value.hasStatus = false;
    wv.value.value = myVar;
    wv.value.hasValue = true;
    UA_Server_write(server, &wv);
}

/**
 * Note how we initially set the DataType attribute of the variable node to the
 * NodeId of the Int32 data type. This forbids writing values that are not an
 * Int32. The following code shows how this consistency check is performed for
 * every write.
 */

static void
writeWrongVariable(UA_Server *server) {
    UA_NodeId myIntegerNodeId = UA_NODEID_STRING(1, "the.answer");

    /* Write a string */
    UA_String myString = UA_STRING("test");
    UA_Variant myVar;
    UA_Variant_init(&myVar);
    UA_Variant_setScalar(&myVar, &myString, &UA_TYPES[UA_TYPES_STRING]);
    UA_StatusCode retval = UA_Server_writeValue(server, myIntegerNodeId, myVar);
    printf("Writing a string returned statuscode %s\n", UA_StatusCode_name(retval));
}

/** It follows the main server code, making use of the above definitions. */

UA_Boolean running = true;
static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

UA_String Epson_C4_Start_Set_s;
UA_String Turntable_Running_Status_s;
UA_String Epson_C4_Running_Status_s;
UA_String EPSON_C4_SensorLR_Running_Status_s;
UA_String EPSON_C4_Indicator_Light_Status_s;
UA_String EPSON_C4_Gripper_Status_s;
UA_String EPSON_C4_X_Data_s;
UA_String EPSON_C4_Y_Data_s;
UA_String EPSON_C4_Z_Data_s;
UA_String EPSON_C4_U_Data_s;
UA_String EPSON_C4_V_Data_s;
UA_String EPSON_C4_W_Data_s;

UA_Variant outValue1;
UA_Variant outValue2;
UA_Variant outValue3;
UA_Variant outValue4;
UA_Variant outValue5;
UA_Variant outValue6;
UA_Variant outValue7;
UA_Variant outValue8;
UA_Variant outValue9;
UA_Variant outValue10;
UA_Variant outValue11;
UA_Variant outValue12;


static void
loopcallback(UA_Server *server, void *data) {
///////////////////////* Read a string */////////////////////////////////
    UA_Server_readValue(server,UA_NODEID_STRING(1, "::EPSON_C4_Robot_Command:Epson_C4_Start_Set"),&outValue1);
    Epson_C4_Start_Set_s=*(UA_String*)outValue1.data;
    sprintf(UC_Epson_C4_Start_Set, "%s", Epson_C4_Start_Set_s.data);

    UA_Server_readValue(server,UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Turntable_Running_Status"),&outValue2);
    Turntable_Running_Status_s=*(UA_String*)outValue2.data;
     sprintf(UC_Turntable_Running_Status, "%s", Turntable_Running_Status_s.data);
///////////////////////* Write a string */////////////////////////////////
    Epson_C4_Running_Status_s = UA_STRING(UC_Epson_C4_Running_Status);
    UA_Variant_setScalar(&outValue3, &Epson_C4_Running_Status_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Command:Epson_C4_Running_Status"), outValue3);

    EPSON_C4_SensorLR_Running_Status_s = UA_STRING(UC_EPSON_C4_SensorLR_Running_Status);
    UA_Variant_setScalar(&outValue4, &EPSON_C4_SensorLR_Running_Status_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_SensorLR_Running_Status"), outValue4);

    EPSON_C4_Indicator_Light_Status_s = UA_STRING(UC_EPSON_C4_Indicator_Light_Status);
    UA_Variant_setScalar(&outValue5, &EPSON_C4_Indicator_Light_Status_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Indicator_Light_Status"), outValue5);

    EPSON_C4_Gripper_Status_s = UA_STRING(UC_EPSON_C4_Gripper_Status);
    UA_Variant_setScalar(&outValue6, &EPSON_C4_Gripper_Status_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Gripper_Status"), outValue6);

    EPSON_C4_X_Data_s = UA_STRING(UC_EPSON_C4_X_Data);
    UA_Variant_setScalar(&outValue7, &EPSON_C4_X_Data_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_X_Data"), outValue7);

    EPSON_C4_Y_Data_s = UA_STRING(UC_EPSON_C4_Y_Data);
    UA_Variant_setScalar(&outValue8, &EPSON_C4_Y_Data_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Y_Data"), outValue8);

    EPSON_C4_Z_Data_s = UA_STRING(UC_EPSON_C4_Z_Data);
    UA_Variant_setScalar(&outValue9, &EPSON_C4_Z_Data_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_Z_Data"), outValue9);

    EPSON_C4_U_Data_s = UA_STRING(UC_EPSON_C4_U_Data);
    UA_Variant_setScalar(&outValue10, &EPSON_C4_U_Data_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EEPSON_C4_U_Data"), outValue10);

    EPSON_C4_V_Data_s = UA_STRING(UC_EPSON_C4_V_Data);
    UA_Variant_setScalar(&outValue11, &EPSON_C4_V_Data_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_V_Data"), outValue11);

    EPSON_C4_W_Data_s = UA_STRING(UC_EPSON_C4_W_Data);
    UA_Variant_setScalar(&outValue12, &EPSON_C4_W_Data_s, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_STRING(1, "::EPSON_C4_Robot_Monitoring:EPSON_C4_W_Data"), outValue12);

}


int main(void) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, 4842, NULL);
    EPSON_C4_Robot_Monitoring(server);
    monitoring_addVariable(server);

    EPSON_C4_Robot_Command(server);
    Command_addVariable(server);

	//////////////////////////UC_Epson_C4_Start_Set//////////////////////////////
	if((shmid1=shmget((key_t)1355,1024,IPC_CREAT|0666))==-1){
	perror("shmid1 create");
	exit(1);
	}
 	else printf("shmid1 get\n");

	if((UC_Epson_C4_Start_Set=(char*)shmat(shmid1,(void*)0,0))==(void*)-1){
	perror("shmat faild");
	exit(1);
	}
 	else printf("UC_Epson_C4_Start_Set attach\n");
        sprintf(UC_Epson_C4_Start_Set,"0");

	//////////////////////////UC_Turntable_Running_Status//////////////////////////////
	if((shmid2=shmget((key_t)1356,1024,IPC_CREAT|0666))==-1){
	perror("shmid2 create");
	exit(1);
	}
 	else printf("shmid2 get\n");

	if((UC_Turntable_Running_Status=(char*)shmat(shmid2,(void*)0,0))==(void*)-1){
	perror("shmat faild");
	exit(1);
	}
 	else printf("UC_Turntable_Running_Status attach\n");
        sprintf(UC_Turntable_Running_Status,"0");

	//////////////////////////UC_Epson_C4_Running_Status//////////////////////////////
	if((shmid3=shmget((key_t)1357,1024,IPC_CREAT|0666))==-1){
	perror("shmid3 create");
	exit(1);
	}
 	else printf("shmid3 get\n");

	if((UC_Epson_C4_Running_Status=(char*)shmat(shmid3,(void*)0,0))==(void*)-1){
	perror("shmat3 faild");
	exit(1);
	}
 	else printf("UC_Epson_C4_Running_Status attach\n");
        sprintf(UC_Epson_C4_Running_Status,"0");
	//////////////////////////UC_EPSON_C4_SensorLR_Running_Status//////////////////////////////
	if((shmid4=shmget((key_t)1358,1024,IPC_CREAT|0666))==-1){
	perror("shmid4 create");
	exit(1);
	}
 	else printf("shmid4 get\n");

	if((UC_EPSON_C4_SensorLR_Running_Status=(char*)shmat(shmid4,(void*)0,0))==(void*)-1){
	perror("shmat4 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_SensorLR_Running_Status attach\n");
        sprintf(UC_EPSON_C4_SensorLR_Running_Status,"0");
	//////////////////////////UC_EPSON_C4_Indicator_Light_Status//////////////////////////////
	if((shmid5=shmget((key_t)1359,1024,IPC_CREAT|0666))==-1){
	perror("shmid5 create");
	exit(1);
	}
 	else printf("shmid5 get\n");

	if((UC_EPSON_C4_Indicator_Light_Status=(char*)shmat(shmid5,(void*)0,0))==(void*)-1){
	perror("shmat5 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_Indicator_Light_Status attach\n");
        sprintf(UC_EPSON_C4_Indicator_Light_Status,"0");
	//////////////////////////UC_EPSON_C4_Gripper_Status//////////////////////////////
	if((shmid6=shmget((key_t)1360,1024,IPC_CREAT|0666))==-1){
	perror("shmid6 create");
	exit(1);
	}
 	else printf("shmid6 get\n");

	if((UC_EPSON_C4_Gripper_Status=(char*)shmat(shmid6,(void*)0,0))==(void*)-1){
	perror("shmat6 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_Gripper_Status attach\n");
        sprintf(UC_EPSON_C4_Gripper_Status,"0");
	//////////////////////////UC_EPSON_C4_X_Data//////////////////////////////
	if((shmid7=shmget((key_t)1361,1024,IPC_CREAT|0666))==-1){
	perror("shmid7 create");
	exit(1);
	}
 	else printf("shmid7 get\n");

	if((UC_EPSON_C4_X_Data=(char*)shmat(shmid7,(void*)0,0))==(void*)-1){
	perror("shmat7 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_X_Data attach\n");
        sprintf(UC_EPSON_C4_X_Data,"0");
	//////////////////////////UC_EPSON_C4_Y_Data//////////////////////////////
	if((shmid8=shmget((key_t)1362,1024,IPC_CREAT|0666))==-1){
	perror("shmid8 create");
	exit(1);
	}
 	else printf("shmid8 get\n");

	if((UC_EPSON_C4_Y_Data=(char*)shmat(shmid8,(void*)0,0))==(void*)-1){
	perror("shmat8 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_Y_Data attach\n");
        sprintf(UC_EPSON_C4_Y_Data,"0");
	//////////////////////////UC_EPSON_C4_Z_Data//////////////////////////////
	if((shmid9=shmget((key_t)1363,1024,IPC_CREAT|0666))==-1){
	perror("shmid9 create");
	exit(1);
	}
 	else printf("shmid2 get\n");

	if((UC_EPSON_C4_Z_Data=(char*)shmat(shmid9,(void*)0,0))==(void*)-1){
	perror("shmat9 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_Z_Data attach\n");
        sprintf(UC_EPSON_C4_Z_Data,"0");
	//////////////////////////UC_EPSON_C4_U_Data//////////////////////////////
	if((shmid10=shmget((key_t)1364,1024,IPC_CREAT|0666))==-1){
	perror("shmid10 create");
	exit(1);
	}
 	else printf("shmid10 get\n");

	if((UC_EPSON_C4_U_Data=(char*)shmat(shmid10,(void*)0,0))==(void*)-1){
	perror("shmat10 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_U_Data attach\n");
        sprintf(UC_EPSON_C4_U_Data,"0");
	//////////////////////////UC_EPSON_C4_V_Data//////////////////////////////
	if((shmid11=shmget((key_t)1365,1024,IPC_CREAT|0666))==-1){
	perror("shmid11 create");
	exit(1);
	}
 	else printf("shmid11 get\n");

	if((UC_EPSON_C4_V_Data=(char*)shmat(shmid11,(void*)0,0))==(void*)-1){
	perror("shmat11 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_V_Data attach\n");
        sprintf(UC_EPSON_C4_V_Data,"0");
	//////////////////////////UC_EPSON_C4_W_Data//////////////////////////////
	if((shmid12=shmget((key_t)1366,1024,IPC_CREAT|0666))==-1){
	perror("shmid12 create");
	exit(1);
	}
 	else printf("shmid12 get\n");

	if((UC_EPSON_C4_W_Data=(char*)shmat(shmid12,(void*)0,0))==(void*)-1){
	perror("shmat12 faild");
	exit(1);
	}
 	else printf("UC_EPSON_C4_W_Data attach\n");
        sprintf(UC_EPSON_C4_W_Data,"0");


    UA_Server_addRepeatedCallback(server, loopcallback, NULL, 100, NULL); 
    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_clean(config);
    return (int)retval;
}
