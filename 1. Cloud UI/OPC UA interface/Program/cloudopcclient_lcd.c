/*note read/write copy from 0115client.c (git version open62541 0.3)*/
/*this is the opc client in cloud*/
#include <stdio.h>
#include "open62541.h"

#include <unistd.h>
/**************udp client*///////////////
//#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
//#include <stdio.h>
#include <errno.h>
#include <string.h>
 
#define MYPORT 5555
char* SERVERIP = "192.168.0.100";
struct sockaddr_in servaddr;

#define ERR_EXIT(m) \
    do \
{ \
    perror(m); \
    exit(EXIT_FAILURE); \
    } while(0)


UA_Variant value[40]; /* Variants can hold scalar values and arrays of any type */
UA_String S_data[40]; /* Variants can hold scalar values and arrays of any type */

UA_String Test;

UA_Variant UI;


/*************udp client************/
void main(int argc, char *argv[])
{

    int i;
    char button[100] = {0};
    int n = 0;	// this n ensures the sequence running of s1 t1 s2 t2...
    int sock,con;
    char recvbuf[1024] = {0};
for(i=0;i<40;i++) S_data[i].data=malloc(sizeof(UA_String));

	/* Create a client and connect */
    UA_Client *client = UA_Client_new(UA_ClientConfig_standard);
    UA_StatusCode status = UA_Client_connect(client, "opc.tcp://192.168.0.178:16664");  //aml-opcua aggregation server port 16664
    if(status != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return status;
    }

while (1)
{	
status =UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"), &UI);  //change id
Test= *(UA_String*)UI.data;
printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
//change id // ns[2] = 1
//read(sock,recvbuf,sizeof(recvbuf));
//printf("recvbuf:%s\n",recvbuf);

strcpy(button,Test.data);
//printf("button:%s\n",button);
//sleep(1);
/*in case 1, Table, Epson1 and KUKA are operating*/			
if ((strcmp(button, "S1") == 0)||(strcmp(button, "S2") == 0)||(strcmp(button, "S3") == 0)||(strcmp(button, "T1") == 0)||(strcmp(button, "T2") == 0)||(strcmp(button, "T3") == 0))   //use if or while?  after: n == 1
// in case 1, if needed, divide if n == 0 and if n == 4 to make sequence of 2345
{		
/* 1. opc ua client write Start Command to E1, Table, KUKA in amlopcua aggregation server*/
	//UA_String write 1 Turn_table_start
		
			S_data[0].length = strlen(button);
		     //   printf("button:%s\n",button);    	
			strcpy(S_data[0].data,button);
		     //   printf("S_data[0].data%s\n",S_data[0].data);
			UA_Variant_setScalarCopy(&value[0], &S_data[0], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start"), &value[0]); //change id // ns[2] = 1
			printf("writing \"StartCommand\" = 1 to Rotation Table: %s\n", S_data[0].data);
			
	//UA_String write 2 KUKA_start	
			S_data[1].length = strlen(button);
			strcpy(S_data[1].data,button);
			UA_Variant_setScalarCopy(&value[1], &S_data[1], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand"), &value[1]); //change id
			printf("writing \"StartCommand\" = 1 to KUKA: %s\n", S_data[1].data);

	//UA_String write 3 Epson1_start	
			S_data[2].length = strlen(button);
			strcpy(S_data[2].data,button);
			UA_Variant_setScalarCopy(&value[2], &S_data[2], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand"), &value[2]); //change id
			printf("writing \"StartCommand\" = 1 to Epons1: %s\n", S_data[2].data);

	//UA_String write 4 Epson2_start	
			S_data[3].length = strlen(button);
			strcpy(S_data[3].data,button);
			UA_Variant_setScalarCopy(&value[3], &S_data[3], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand"), &value[3]); //change id
			printf("writing \"StartCommand\" = 1 to Epons2: %s\n", S_data[3].data);
			n = 1;
}

//////////////////////////maping code/////////////////////////////
/* 2. read (PLC)Table state, and write it to Epson1*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"), &value[4]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[4], &UA_TYPES[UA_TYPES_STRING])) {
				//Test= *(UA_String*)value[4].data;
				//printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write "0" to Epson1
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1"), &value[4]);  //change id
				//printf("writing \"Table off state\" = 0 to Epson1: %s\n",Test.data);
				
			
/*****************************Do we need to clear the "state 0" at each step????? memset(positionstr, 0, sizeof(positionstr));
how to ensure the sequence execution of each informtion flow?????******************************************************************************************************************************/
/* 3. read E1 state, and write it to Table*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state"), &value[5]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[5], &UA_TYPES[UA_TYPES_STRING])) {
				//Test= *(UA_String*)value[5].data;
				//printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table"), &value[5]);  //change id
                               // printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);
					
/* 4. read Table state, and write it to KUKA*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"), &value[6]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[6], &UA_TYPES[UA_TYPES_STRING])) {
				//Test= *(UA_String*)value[6].data;
				//printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Epson1
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka"), &value[6]);  //change id
                                //printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);

/* 5. read KUKA state, and write it to Table*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state"), &value[7]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[7], &UA_TYPES[UA_TYPES_STRING])) {
				//Test= *(UA_String*)value[7].data;
				//printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table"), &value[7]);  //change id
                               // printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);
			

/* 2. read (PLC)Table state, and write it to Epson2*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"), &value[16]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[16], &UA_TYPES[UA_TYPES_STRING])) {
				//Test= *(UA_String*)value[16].data;
				//printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write "0" to Epson2
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2"), &value[16]);  //change id
				//printf("writing \"Table off state\" = 0 to Epson1: %s\n",Test.data);
			
		
/* 3. read E2 state, and write it to Table*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state"), &value[17]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[17], &UA_TYPES[UA_TYPES_STRING])) {
				//Test= *(UA_String*)value[17].data;
				//printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table"), &value[17]);  //change id
                               // printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);
#if 0
/* 4. read Table state, and write it to KUKA*/
			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"), &value[18]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[18], &UA_TYPES[UA_TYPES_STRING])) {
				Test= *(UA_String*)value[18].data;
				printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "65b425fa-0bdb-496e-a1ae-28171cea1fcd.table_to_kuka"), &value[18]);  //change id
                                printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);

/* 5. read KUKA state, and write it to Table*/
				//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_state"), &value[19]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[19], &UA_TYPES[UA_TYPES_STRING])) {
				Test= *(UA_String*)value[19].data;
				printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.kuka_to_table"), &value[19]);  //change id
                                printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);	


/* 2. read (PLC)Table state, and write it to Epson1*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"), &value[28]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[28], &UA_TYPES[UA_TYPES_STRING])) {
				Test= *(UA_String*)value[28].data;
				printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write "0" to Epson2
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.table_to_epson1"), &value[28]);  //change id
				printf("writing \"Table off state\" = 0 to Epson1: %s\n",Test.data);
			
		
/* 3. read E1 state, and write it to Table*/

			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_state"), &value[29]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[29], &UA_TYPES[UA_TYPES_STRING])) {
				Test= *(UA_String*)value[29].data;
				printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson1_to_table"), &value[29]);  //change id
                                printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);

/* 4. read Table state, and write it to Epson2*/
			//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"), &value[30]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[30], &UA_TYPES[UA_TYPES_STRING])) {
				Test= *(UA_String*)value[30].data;
				printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "d6a952c0-2c6c-4941-9c13-94177a3566f7.table_to_epson2"), &value[30]);  //change id
                                printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);

/* 5. read KUKA state, and write it to Table*/
				//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_state"), &value[31]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[31], &UA_TYPES[UA_TYPES_STRING])) {
				Test= *(UA_String*)value[31].data;
				printf("reading the \"Table_Epson1\" = 0 is: %s\n", Test.data);
				}
				//UA_String write to Table
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "0a04cce4-a64a-4566-b916-06a8639d7dcd.epson2_to_table"), &value[31]);  //change id
                                printf("writing \"Epson1 off state\" = 0 to Table: %s\n",Test.data);	

#endif
}

    UA_Client_delete(client); /* Disconnects the client internally */
    return status;
	
}

