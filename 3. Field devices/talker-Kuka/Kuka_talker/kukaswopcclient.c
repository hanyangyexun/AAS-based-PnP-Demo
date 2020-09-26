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
char* SERVERIP = "192.168.0.81";   // TSN listener IP
struct sockaddr_in servaddr;

#define ERR_EXIT(m) \
    do \
{ \
    perror(m); \
    exit(EXIT_FAILURE); \
    } while(0)

UA_Variant value[40]; /* Variants can hold scalar values and arrays of any type */
UA_String S_data[40]; /* Variants can hold scalar values and arrays of any type */
UA_String Test[40];

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
    int i;
for(i=0;i<40;i++) 
S_data[i].data=malloc(sizeof(UA_String));

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
	
char en1[2];
char read1[1];
int m, m1, m2;
	/* Create a client and connect */
    UA_Client *client = UA_Client_new(UA_ClientConfig_standard);
    UA_StatusCode status = UA_Client_connect(client, "opc.tcp://192.168.0.80:4841");
    if(status != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return status;
    }

	
while (1)
{	//UA_String read s1 or s2 or t2 and t3 from cloud opc client
	//UA_String read
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "StartCommand"), &value[0]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[0], &UA_TYPES[UA_TYPES_STRING])) {
				Test[0]= *(UA_String*)value[0].data;
				printf("reading the \"StartCommand\" from cloud is: %s\n", Test[0].data);
				}
				
			strcpy(en1, Test[0].data);	

if (strcmp(en1, "S1") == 0 || strcmp(en1, "S2") == 0)  //in s1 s2, send 1-7 to robot, receive all 10 parameters and write to kuka opc ua server 
{	
//1227 control the light in S1 S2
	strcpy(sendbuf, "40");
  printf("send robot 1 commands to udp2tcp is: %s\n",sendbuf);
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
            
			sleep(2); // move to here
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("receive from udp2tcp of green light %s\n",recvbuf);

	//read table_KUKA == 0
	status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "table_to_kuka"), &value[1]);  //change id
	if (status == UA_STATUSCODE_GOOD &&
		UA_Variant_hasScalarType(&value[1], &UA_TYPES[UA_TYPES_STRING])) {
		Test[1]= *(UA_String*)value[1].data;
		printf("reading the \"table_KUKA == 0\" from table is: %s\n", Test[1].data);
		}
		
	strcpy(read1, Test[1].data);	

	if (strcmp(read1, "0") == 0)
	{	
	//1210: send kuka_to_PLC = 1
	S_data[0].length = 1;
	strcpy(S_data[0].data, "1");
	UA_Variant_setScalarCopy(&value[2], &S_data[0], &UA_TYPES[UA_TYPES_STRING]);
	UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_state"), &value[2]); //change id
	printf("writing \"Kuka_table\" = 0 to Table: %s\n", S_data[0].data);
				
	for ( a=1; a < 8; a++)   //1127
		{
			sprintf(b, "%d", a);
			strcpy(sendbuf, b);
			
			//sleep(2); // 5s can not, stop at the position of command "2"
			
			printf("send robot 7 commands to udp2tcp is: %s\n",sendbuf);
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
            
			sleep(2); // move to here
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("receive from udp2tcp of raw robot status data %s\n",recvbuf);
			
			/********cut the xml string to xyzabc*************/
			
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			//printf("position string =%s\n", positionstr);

			//m l n p is for gripper(1, 0), light(green, red, yellow), sensor(11, 10, 01, 00), robot(1, 0) states
			sscanf(positionstr, "<Robot><Data><ActPos X=\"%[^\"]\" Y=\"%[^\"]\" Z=\"%[^\"]\" A=\"%[^\"]\" B=\"%[^\"]\" C=\"%[^\"]\"></ActPos></Data><GripperOn>$%[^$]$</GripperOn><LightOn>$%[^$]$</LightOn><SensorOn>$%[^$]$</SensorOn><RobotOn>$%[^$]$</RobotOn></Robot>" , x, y, z, a1, b1, c1, gripper, light, sensor, robot);
			//printf("x = %s, y = %s, z = %s, a1 = %s, b1 = %s, c1 = %s, gripper = %s, light = %s, sensor = %s, robot = %s\n", x, y, z, a1, b1, c1, gripper, light, sensor, robot);
			/********cut the xml string to xyzabc*************/
			
			S_data[1].length = strlen(x);
			strcpy(S_data[1].data, x);
			UA_Variant_setScalarCopy(&value[3], &S_data[1], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataX"), &value[3]);
			printf("writing the position X value is: %s\n", S_data[1].data);

			S_data[2].length = strlen(y);
			strcpy(S_data[2].data, y);
			UA_Variant_setScalarCopy(&value[4], &S_data[2], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataY"), &value[4]);
			printf("writing the position Y value is: %s\n", S_data[2].data);

			S_data[3].length = strlen(z);
			strcpy(S_data[3].data, z);
			UA_Variant_setScalarCopy(&value[5], &S_data[3], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataZ"), &value[5]);
			printf("writing the position Z value is: %s\n", S_data[3].data);

			S_data[4].length = strlen(a1);
			strcpy(S_data[4].data, a1);
			UA_Variant_setScalarCopy(&value[6], &S_data[4], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataA"), &value[6]);
			printf("writing the position A value is: %s\n", S_data[4].data);

			S_data[5].length = strlen(b1);
			strcpy(S_data[5].data, b1);
			UA_Variant_setScalarCopy(&value[7], &S_data[5], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataB"), &value[7]);
			printf("writing the position B value is: %s\n", S_data[5].data);

			S_data[6].length = strlen(c1);
			strcpy(S_data[6].data, c1);
			UA_Variant_setScalarCopy(&value[8], &S_data[6], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "PositionDataC"), &value[8]);
			printf("writing the position C value is: %s\n", S_data[6].data);

			S_data[7].length = strlen(gripper);
			strcpy(S_data[7].data, gripper);
			UA_Variant_setScalarCopy(&value[9], &S_data[7], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_gripper"), &value[9]);
			printf("writing the kuka_gripper value is: %s\n", S_data[7].data);

			S_data[8].length = strlen(light);
			strcpy(S_data[8].data, light);
			UA_Variant_setScalarCopy(&value[10], &S_data[8], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value[10]);
			printf("writing the kuka_light value is: %s\n", S_data[8].data);

			S_data[9].length = strlen(sensor);
			strcpy(S_data[9].data, sensor);
			UA_Variant_setScalarCopy(&value[11], &S_data[9], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_sensors"), &value[11]);
			printf("writing the kuka_gripper value is: %s\n", S_data[9].data);

			//1210
			if (a == 7)
			{
			
			// when kuka final step, read PLC_to_kuka = 2 and send kuka_to_plc = 2
			status = UA_Client_readValueAttribute(client, UA_NODEID_STRING(1, "table_to_kuka"), &value[12]);  //change id
			if (status == UA_STATUSCODE_GOOD &&
				UA_Variant_hasScalarType(&value[12], &UA_TYPES[UA_TYPES_STRING])) {
				Test[2]= *(UA_String*)value[12].data;
				printf("reading the \"table_KUKA == 0\" from table is: %s\n", Test[2].data);
				}
				UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_state"), &value[12]);  //change id
				printf("writing \"Kuka_table\" = 0 to Table: %s\n", Test[2].data);
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

		S_data[10].length = 1;
		strcpy(S_data[10].data, "0");
		UA_Variant_setScalarCopy(&value[13], &S_data[10], &UA_TYPES[UA_TYPES_STRING]);
		UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_state"), &value[13]); //change id
		printf("writing \"Kuka_table\" = 0 to Table: %s\n", S_data[10].data);
	}
}
else if (strcmp(en1, "T2") == 0 || strcmp(en1, "T3") == 0 )  //in t2 t3, send 20 to robot, receive only "yellow" and write to kuka opc ua server 
{	
	//send command to light to turn on yellow light
	for (m = 20; m < 21; m++)
		{
			sprintf(b, "%d", m);
			strcpy(sendbuf, b);
			
			printf("send robot command 20 to udp2tcp %s\n",sendbuf);
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
           
		    sleep(2);
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("receive from udp2tcp of raw robot light yellow %s\n",recvbuf);
	
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			//printf("yellow light is on =%s\n", positionstr); //yellow
			
			//UA_String write to light
			S_data[11].length = strlen(positionstr);
			strcpy(S_data[11].data, positionstr);
			UA_Variant_setScalarCopy(&value[14], &S_data[11], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value[14]);
			printf("writing transition yellow light is: %s\n", S_data[11].data);				
		}
		
		memset(b, 0, sizeof(b));
		memset(sendbuf, 0, sizeof(sendbuf));
		memset(recvbuf, 0, sizeof(recvbuf));
}
else if (strcmp(en1, "S3") == 0)  //in S3, send 30 to robot, receive only "red" and write to kuka opc ua server 
{	
	//send command to light to turn on red light
	for (m1 = 30; m1 < 31; m1++)
		{
			sprintf(b, "%d", m1);
			strcpy(sendbuf, b);
			
			printf("send robot command 30 to udp2tcp %s\n",sendbuf);
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
           
		    sleep(2);
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("receive from udp2tcp of raw robot red yellow %s\n",recvbuf);
	
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			//printf("red light is on =%s\n", positionstr); //red
			
			//UA_String write to light
			S_data[12].length = strlen(positionstr);
			strcpy(S_data[12].data, positionstr);
			UA_Variant_setScalarCopy(&value[15], &S_data[12], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value[15]);
			printf("writing transition red light is: %s\n", S_data[12].data);
		}
		
		memset(b, 0, sizeof(b));
		memset(sendbuf, 0, sizeof(sendbuf));
		memset(recvbuf, 0, sizeof(recvbuf));
			
	//sleep (2);
}    

else if (strcmp(en1, "T1") == 0)  //in T1, send 10 to robot, receive only "green" and write to kuka opc ua server 
{	
	//send command to light to turn on green light
	for (m2 = 10; m2 < 11; m2++)
		{
			sprintf(b, "%d", m2);
			strcpy(sendbuf, b);
			
			printf("send robot command 10 to udp2tcp : %s\n",sendbuf);
			sendto(sock, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&servaddr, sizeof(servaddr));
           
		    sleep(2);
			
			memset(recvbuf, 0, sizeof(recvbuf));
			ret = recvfrom(sock, recvbuf, sizeof(recvbuf), 0, NULL, NULL);
			printf("receive from udp2tcp of raw robot green yellow %s\n",recvbuf);
	
			memset(positionstr, 0, sizeof(positionstr));
			strcpy(positionstr, recvbuf);
			//printf("T1 green light is on =%s\n", positionstr); //red
			
			//UA_String write to light
			S_data[13].length = strlen(positionstr);
			strcpy(S_data[13].data, positionstr);
			UA_Variant_setScalarCopy(&value[16], &S_data[13], &UA_TYPES[UA_TYPES_STRING]);
			UA_Client_writeValueAttribute(client, UA_NODEID_STRING(1, "kuka_light"), &value[16]);
			printf("writing transition green light is: %s\n", S_data[13].data);
		}
		
		memset(b, 0, sizeof(b));
		memset(sendbuf, 0, sizeof(sendbuf));
		memset(recvbuf, 0, sizeof(recvbuf));
			
	//sleep (2);
}   
    //close(sock);
	
	/* Clean up */
    //UA_Variant_deleteMembers(&value);
	//sleep (2);	
}
    UA_Client_delete(client); /* Disconnects the client internally */
    return status;
	
}

