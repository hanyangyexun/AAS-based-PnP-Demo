/*note read/write copy from 0115client.c (git version open62541 0.3)*/
/*This is robot control SW = opc client + udp client */
//1210 updated according to changdae's logic
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
 
#define MYPORT 6666  // UDP port
char* SERVERIP = "192.168.0.80";   // TSN listener IP
struct sockaddr_in servaddr;

#define ERR_EXIT(m) \
    do \
{ \
    perror(m); \
    exit(EXIT_FAILURE); \
    } while(0)
 
/*****************udp client*///////////////

int main(int argc, char *argv[])
{
	//udp client 
	int sock;
    if ((sock = socket(PF_INET, SOCK_DGRAM, 0)) < 0)
        ERR_EXIT("socket");
	
	memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(MYPORT);
    servaddr.sin_addr.s_addr = inet_addr(SERVERIP);
    
	// all declaration should be here
    int ret;
    char sendbuf[1024] = {0};
    char recvbuf[1024];
	char b[64] = {0};
	int a = 1; 		//1127
	char positionstr[1024] = "10";
	char a1[32];
	char b1[32];
	char c1[32];
	char x[32];
	char y[32];
	char z[32];
	char gripper[32];
	char light[32];
	char sensor[32];
	char robot[32];
	
	/* Create a client and connect */
    UA_Client *client = UA_Client_new(UA_ClientConfig_standard);
    UA_StatusCode status = UA_Client_connect(client, "opc.tcp://192.168.0.80:4841");
    if(status != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return status;
    }

	UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);
	
while (1)
{	
			char en1[2];
			//UA_String read s1 or s2 or t2 and t3 from cloud opc client
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "StartCommand"), &value);
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value, &UA_TYPES[UA_TYPES_STRING])) {
				UA_String* Variant1 = value.data;
				strncpy(en1, (*Variant1).data, (*Variant1).length);
				printf("reading the \"StartCommand\" from cloud is: %s\n", en1);
				}
				
if (strcmp(en1, "S1") == 0 || strcmp(en1, "S2") == 0)  //in s1 s2, send 1-7 to robot, receive all 10 parameters and write to kuka opc ua server 
{	
	//char read1[1024] = "9";
	char read1[1024]; // no initial value
	//UA_String read table_KUKA == 0 from cloud opc client
	status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "table_to_kuka"), &value);
	if (status == UA_STATUSCODE_GOOD &&
		UA_Variant_hasScalarType(&value, &UA_TYPES[UA_TYPES_STRING])) {
		UA_String* state1 = value.data;
		strncpy(read1, (*state1).data, (*state1).length);
		printf("reading the \"table_KUKA == 0\" from cloud is: %s\n", read1);
		}
		
	if (strcmp(read1, "0") == 0)
	{	
	//1210: send kuka_to_PLC = 1
	char rostate2[1];
	strcpy(rostate2, "1");
	UA_String robotoff2;
	UA_String_init(&robotoff2);	
	robotoff2.length = strlen(rostate2);
	robotoff2.data = (UA_Byte*)rostate2;
	//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
	UA_Variant_setScalarCopy(&value, &robotoff2, &UA_TYPES[UA_TYPES_STRING]);
	UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_state"), &value);
	printf("writing \"Kuka_table\" = 0 to Table: %s\n", robotoff2.data);
				
	for ( a=1; a < 8; a++)   //1127
		{
			sprintf(b, "%d", a);
			strcpy(sendbuf, b);
			
			//sleep(2); // 5s can not, stop at the position of command "2"
			
			printf("向UDP服务器发送：%s\n",sendbuf);
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
            
			sleep(2); // move to here
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("从UDP服务器接收：%s\n",recvbuf);
			
			/********cut the xml string to xyzabc*************/
			
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			printf("position string =%s\n", positionstr);

			//m l n p is for gripper(1, 0), light(green, red, yellow), sensor(11, 10, 01, 00), robot(1, 0) states
			sscanf(positionstr, "<Robot><Data><ActPos X=\"%[^\"]\" Y=\"%[^\"]\" Z=\"%[^\"]\" A=\"%[^\"]\" B=\"%[^\"]\" C=\"%[^\"]\"></ActPos></Data><GripperOn>$%[^$]$</GripperOn><LightOn>$%[^$]$</LightOn><SensorOn>$%[^$]$</SensorOn><RobotOn>$%[^$]$</RobotOn></Robot>" , x, y, z, a1, b1, c1, gripper, light, sensor, robot);
			printf("x = %s, y = %s, z = %s, a1 = %s, b1 = %s, c1 = %s, gripper = %s, light = %s, sensor = %s, robot = %s\n", x, y, z, a1, b1, c1, gripper, light, sensor, robot);
			/********cut the xml string to xyzabc*************/
			
			//UA_String write 1
			char Control1[32];
			strcpy(Control1, x);
			UA_String con1;
			UA_String_init(&con1);	
			con1.length = strlen(Control1);
			con1.data = (UA_Byte*)Control1;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con1, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataX"), &value);
			printf("writing the position X value1 is: %s\n", con1.data);
			
			//UA_String write 2
			char Control2[32];
			strcpy(Control2, y);
			UA_String con2;
			UA_String_init(&con2);	
			con2.length = strlen(Control2);
			con2.data = (UA_Byte*)Control2;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con2, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataY"), &value);
			printf("writing the position Y value2 is: %s\n", con2.data);
			
			//UA_String write 3
			char Control3[32];
			strcpy(Control3, z);
			UA_String con3;
			UA_String_init(&con3);	
			con3.length = strlen(Control3);
			con3.data = (UA_Byte*)Control3;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con3, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataZ"), &value);
			printf("writing the position Z value3 is: %s\n", con3.data);
			
			//UA_String write 4
			char Control4[32];
			strcpy(Control4, a1);
			UA_String con4;
			UA_String_init(&con4);	
			con4.length = strlen(Control4);
			con4.data = (UA_Byte*)Control1;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con4, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataA"), &value);
			printf("writing the position A value4 is: %s\n", con4.data);
			
			//UA_String write 5
			char Control5[20];
			strcpy(Control5, b1);
			UA_String con5;
			UA_String_init(&con5);	
			con5.length = strlen(Control5);
			con5.data = (UA_Byte*)Control5;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con5, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataB"), &value);
			printf("writing the position B value5 is: %s\n", con5.data);
			
			//UA_String write 6
			char Control6[32];
			strcpy(Control6, c1);
			UA_String con6;
			UA_String_init(&con6);	
			con6.length = strlen(Control6);
			con6.data = (UA_Byte*)Control6;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con6, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataC"), &value);
			printf("writing the position C value6 is: %s\n", con6.data);
			
			//UA_String write 7
			char Control7[32];
			strcpy(Control7, gripper);
			UA_String con7;
			UA_String_init(&con7);	
			con7.length = strlen(Control7);
			con7.data = (UA_Byte*)Control7;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con7, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_gripper"), &value);
			printf("writing the GripperOn value7 is: %s\n", con7.data);
			
			//UA_String write 8
			char Control8[32];
			strcpy(Control8, light);
			UA_String con8;
			UA_String_init(&con8);	
			con8.length = strlen(Control8);
			con8.data = (UA_Byte*)Control8;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con8, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value);
			printf("writing the LightOn value8 is: %s\n", con8.data);
			
			//UA_String write 9
			char Control9[32];
			strcpy(Control9, sensor);
			UA_String con9;
			UA_String_init(&con9);	
			con9.length = strlen(Control9);
			con9.data = (UA_Byte*)Control9;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con9, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_sensors"), &value);
			printf("writing the SensorOn value9 is: %s\n", con9.data);
			/*
			//UA_String write 10
			char Control10[32];
			strcpy(Control10, robot);
			UA_String con10;
			UA_String_init(&con10);	
			con10.length = strlen(Control10);
			con10.data = (UA_Byte*)Control10;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &con10, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_state"), &value);
			printf("writing the RobotOn value10 is: %s\n", con10.data);
			*/
			
			//1210
			if (a == 7)
			{
				// when kuka final step, read PLC_to_kuka = 2 and send kuka_to_plc = 2
				char read2[1];
				status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "table_to_kuka"), &value);
				if (status == UA_STATUSCODE_GOOD &&
					UA_Variant_hasScalarType(&value, &UA_TYPES[UA_TYPES_STRING])) {
					UA_String* state2 = value.data;
					strncpy(read2, (*state2).data, (*state2).length);
					printf("reading the \"table_KUKA == 0\" from cloud is: %s\n", read2);
					}
				
				char rostate3[1];
				strcpy(rostate3, read2);
        printf("\n%s\n",rostate3);
				UA_String robotoff3;
				UA_String_init(&robotoff3);	
				robotoff3.length = strlen(rostate3);
				robotoff3.data = (UA_Byte*)rostate3;
				//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
				UA_Variant_setScalarCopy(&value, &robotoff3, &UA_TYPES[UA_TYPES_STRING]);
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_state"), &value);
				printf("writing \"Kuka_table\" = 0 to Table: %s\n", robotoff3.data);
				
			}		
		}
			memset(b, 0, sizeof(b));
			memset(a1, 0, sizeof(a1));
			memset(b1, 0, sizeof(b1));
			memset(c1, 0, sizeof(c1));
			memset(x, 0, sizeof(x));
			memset(y, 0, sizeof(y));
			memset(z, 0, sizeof(z));
			//memset(c, 0, sizeof(c));
			memset(sendbuf, 0, sizeof(sendbuf));
			memset(recvbuf, 0, sizeof(recvbuf));
		  usleep (10000);
		  
		  if (a == 8)
			{	
				a = 1;		//1127
				//break; //a=1;
			}
	}
	//1210
	else if (strcmp(read1, "1") == 0)
	{
		//send kuka_to_plc = 0
		char rostate4[1] = "0";
				//strcpy(rostate3, read2);
				UA_String robotoff4;
				UA_String_init(&robotoff4);	
				robotoff4.length = strlen(rostate4);
				robotoff4.data = (UA_Byte*)rostate4;
				//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
				UA_Variant_setScalarCopy(&value, &robotoff4, &UA_TYPES[UA_TYPES_STRING]);
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_state"), &value);
				printf("writing \"Kuka_table\" = 0 to Table: %s\n", robotoff4.data);
	}
}
else if (strcmp(en1, "T2") == 0 || strcmp(en1, "T3") == 0 || strcmp(en1, "T1") == 0 )  //in t2 t3, send 20 to robot, receive only "yellow" and write to kuka opc ua server 
{	
	//send command to light to turn on yellow light
	for (int m = 20; m < 21; m++)
		{
			sprintf(b, "%d", m);
			strcpy(sendbuf, b);
			
			printf("向UDP服务器发送：%s\n",sendbuf);
			
			//sleep(2); // 2 seconds
			
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
           
		    sleep(2);
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("从UDP服务器接收：%s\n",recvbuf);
	
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			printf("yellow light is on =%s\n", positionstr); //yellow
			
			//UA_String write to light
			char yellow[32];
			strcpy(yellow, positionstr);
			UA_String ye;
			UA_String_init(&ye);	
			ye.length = strlen(yellow);
			ye.data = (UA_Byte*)yellow;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &ye, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value);
			printf("writing the transition yellow light is: %s\n", ye.data);
		}
		
		memset(b, 0, sizeof(b));
		memset(sendbuf, 0, sizeof(sendbuf));
		memset(recvbuf, 0, sizeof(recvbuf));
}
else if (strcmp(en1, "S3") == 0)  //in S3, send 30 to robot, receive only "red" and write to kuka opc ua server 
{	
	//send command to light to turn on red light
	for (int m1 = 30; m1 < 31; m1++)
		{
			sprintf(b, "%d", m1);
			strcpy(sendbuf, b);
			
			printf("向UDP服务器发送：%s\n",sendbuf);
			
			//sleep(2); // 2 seconds
			
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
           
		    sleep(2);
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("从UDP服务器接收：%s\n",recvbuf);
	
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			printf("red light is on =%s\n", positionstr); //red
			
			//UA_String write to light
			char red[32];
			strcpy(red, positionstr);
			UA_String re;
			UA_String_init(&re);	
			re.length = strlen(red);
			re.data = (UA_Byte*)red;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &re, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value);
			printf("writing the red light is: %s\n", re.data);
		}
		
		memset(b, 0, sizeof(b));
		memset(sendbuf, 0, sizeof(sendbuf));
		memset(recvbuf, 0, sizeof(recvbuf));
			
	//sleep (2);
}    

/*else if (strcmp(en1, "T1") == 0)  //in T1, send 10 to robot, receive only "yellow" and write to kuka opc ua server 
{	
	//send command to light to turn on green light
	for (int m2 = 10; m2 < 11; m2++)
		{
			sprintf(b, "%d", m2);
			strcpy(sendbuf, b);
			
			printf("向UDP服务器发送：%s\n",sendbuf);
			
			//sleep(2); // 2 seconds
			
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
           
		    sleep(2);
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("从UDP服务器接收：%s\n",recvbuf);
	
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			printf("T1 green light is on =%s\n", positionstr); //red
			
			//UA_String write to light
			char gre[32];
			strcpy(gre, positionstr);
			UA_String gr;
			UA_String_init(&gr);	
			gr.length = strlen(gre);
			gr.data = (UA_Byte*)gre;
			//con1.data = (UA_Byte*)buffer; //TCP server to OPC client
			UA_Variant_setScalarCopy(&value, &gr, &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value);
			printf("writing the green light is: %s\n", gr.data);
		}
		
		memset(b, 0, sizeof(b));
		memset(sendbuf, 0, sizeof(sendbuf));
		memset(recvbuf, 0, sizeof(recvbuf));
			
	//sleep (2);
}*/    
    //close(sock);
	
	/* Clean up */
    //UA_Variant_deleteMembers(&value);
	//sleep (2);	
}
    UA_Client_delete(client); /* Disconnects the client internally */
    return status;
	
}

