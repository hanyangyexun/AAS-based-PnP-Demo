
/***********************************************************************************
 * This UDP Client made in HYU CSS LAB from Namhyeok Kim.
 * latest update date : 2019-11-19
 * contents : This program is included in TSN Talker board.
 * Also it is connected to TSN Listener(included UDP Server)
 * Additionally, there is an OPC UA Server for connecting to UNEST platform
 * 
 * create an object file using command below
 *
 * $ sudo gcc -o UDPC UDPC.c
 *
 *
 **********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <poll.h>
///////////ShareMemory//////////////
#include <sys/shm.h>


//#define UADD "127.0.0.1"	//UDP SERVER LOCAL ADDRESS
#define UADD "192.168.0.66"     //UDP SERVER ADDRESS : connecting with TSN Listener
#define UPORT 11111		//UDP SERVER PORT

//buffer size
#define BUF_SIZE 250     


//INFOMATION COMMAND
const char* Icommd01 = "\nRobotName\n";
const char* Icommd02 = "\nModelName\n";
const char* Icommd03 = "\nRobotType\n";

//POINT CONTROL COMMAND
const char* Pcommd01 = "\nR_HOME\n";
const char* Pcommd02 = "\nR_U\n";
const char* Pcommd03 = "\nR_D_P\n";
const char* Pcommd04 = "\nR_D_D\n";
const char* Pcommd05 = "\nL_U\n";
const char* Pcommd06 = "\nL_D_P\n";
const char* Pcommd07 = "\nL_D_D\n";
const char* Pcommd08 = "\nCENTER\n"; //Pcommd08 - SCARA ROBOT

//LAMP CONTROL COMMAND
const char* Lcommd01 = "\n3CRO\n";
const char* Lcommd02 = "\n3CRF\n";
const char* Lcommd03 = "\n3CYO\n";
const char* Lcommd04 = "\n3CYF\n";
const char* Lcommd05 = "\n3CGO\n";
const char* Lcommd06 = "\n3CGF\n";

//GRIPPER CONTROL COMMAND
const char* Gcommd01 = "\nGRPP\n";
const char* Gcommd02 = "\nGRPD\n";











//////////////////*share memory*//////////////////////
int shmid1;
char *UC_Epson_SCARA_Start_Set; 

//////////////////*share memory*//////////////////////
int shmid2;
char *UC_Turntable_Running_Status; 
//////////////////*share memory-command*//////////////////////
int shmid3;
char *UC_EPSON_SCARA_Running_Status;



//////////////////*share memory-Monitoring*//////////////////////
int shmid4;
char *UC_EPSON_SCARA_SensorLR_Running_Status;

//////////////////*share memory-Monitoring*//////////////////////
int shmid5;
char *UC_EPSON_SCARA_Indicator_Light_Status;

//////////////////*share memory-Monitoring*//////////////////////
int shmid6;
char *UC_EPSON_SCARA_Gripper_Status;

//////////////////*share memory-Monitoring*//////////////////////
int shmid7;
char *UC_EPSON_SCARA_X_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid8;
char *UC_EPSON_SCARA_Y_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid9;
char *UC_EPSON_SCARA_Z_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid10;
char *UC_EPSON_SCARA_U_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid11;
char *UC_EPSON_SCARA_V_Data;

//////////////////*share memory-Monitoring*//////////////////////
int shmid12;
char *UC_EPSON_SCARA_W_Data;









/********************************************************************************************
 *
 *   MAIN
 *
 *******************************************************************************************/
int main()
{



	//////////////////////////UC_Epson_SCARA_Start_Set//////////////////////////////
	if((shmid1=shmget((key_t)1355,1024,IPC_CREAT||0666))==-1){
	perror("shmid1 create");
	exit(1);
	}
 	else {}//printf("shmid1 get\n");

	if((UC_Epson_SCARA_Start_Set=(char*)shmat(shmid1,(void*)0,0))==(void*)-1){
	perror("shmat faild");
	exit(1);
	}
 	else {}//printf("UC_Epson_SCARA_Start_Set attach\n");





	//////////////////////////UC_Turntable_Running_Status//////////////////////////////
	if((shmid2=shmget((key_t)1356,1024,IPC_CREAT||0666))==-1){
	perror("shmid2 create");
	exit(1);
	}
 	else {}//printf("shmid2 get\n");

	if((UC_Turntable_Running_Status=(char*)shmat(shmid2,(void*)0,0))==(void*)-1){
	perror("shmat faild");
	exit(1);
	}
 	else {}//printf("UC_Turntable_Running_Status attach\n");





	//////////////////////////UC_EPSON_SCARA_Running_Status//////////////////////////////
	if((shmid3=shmget((key_t)1357,1024,IPC_CREAT||0666))==-1){
	perror("shmid3 create");
	exit(1);
	}
 	else {}//printf("shmid3 get\n");

	if((UC_EPSON_SCARA_Running_Status=(char*)shmat(shmid3,(void*)0,0))==(void*)-1){
	perror("shmat3 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_Running_Status attach\n");
        
sprintf(UC_EPSON_SCARA_Running_Status,"0");
	





////////////////////////UC_EPSON_SCARA_SensorLR_Running_Status//////////////////////////////
	if((shmid4=shmget((key_t)1358,1024,IPC_CREAT||0666))==-1){
	perror("shmid4 create");
	exit(1);
	}
 	else {}//printf("shmid4 get\n");

	if((UC_EPSON_SCARA_SensorLR_Running_Status=(char*)shmat(shmid4,(void*)0,0))==(void*)-1){
	perror("shmat4 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_SensorLR_Running_Status attach\n");
        
sprintf(UC_EPSON_SCARA_SensorLR_Running_Status,"0");
	






//////////////////////////UC_EPSON_SCARA_Indicator_Light_Status//////////////////////////////
	if((shmid5=shmget((key_t)1359,1024,IPC_CREAT||0666))==-1){
	perror("shmid5 create");
	exit(1);
	}
 	else {}//printf("shmid5 get\n");

	if((UC_EPSON_SCARA_Indicator_Light_Status=(char*)shmat(shmid5,(void*)0,0))==(void*)-1){
	perror("shmat5 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_Indicator_Light_Status attach\n");
        
sprintf(UC_EPSON_SCARA_Indicator_Light_Status,"0");






	//////////////////////////UC_EPSON_SCARA_Gripper_Status//////////////////////////////
	if((shmid6=shmget((key_t)1360,1024,IPC_CREAT||0666))==-1){
	perror("shmid6 create");
	exit(1);
	}
 	else {}//printf("shmid6 get\n");

	if((UC_EPSON_SCARA_Gripper_Status=(char*)shmat(shmid6,(void*)0,0))==(void*)-1){
	perror("shmat6 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_Gripper_Status attach\n");
        
sprintf(UC_EPSON_SCARA_Gripper_Status,"0");







	//////////////////////////UC_EPSON_SCARA_X_Data//////////////////////////////
	if((shmid7=shmget((key_t)1361,1024,IPC_CREAT||0666))==-1){
	perror("shmid7 create");
	exit(1);
	}
 	else {}//printf("shmid7 get\n");

	if((UC_EPSON_SCARA_X_Data=(char*)shmat(shmid7,(void*)0,0))==(void*)-1){
	perror("shmat7 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_X_Data attach\n");
        
sprintf(UC_EPSON_SCARA_X_Data,"0");





	//////////////////////////UC_EPSON_SCARA_Y_Data//////////////////////////////
	if((shmid8=shmget((key_t)1362,1024,IPC_CREAT||0666))==-1){
	perror("shmid8 create");
	exit(1);
	}
 	else {}//printf("shmid8 get\n");

	if((UC_EPSON_SCARA_Y_Data=(char*)shmat(shmid8,(void*)0,0))==(void*)-1){
	perror("shmat8 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_Y_Data attach\n");
        
sprintf(UC_EPSON_SCARA_Y_Data,"0");






	//////////////////////////UC_EPSON_SCARA_Z_Data//////////////////////////////
	if((shmid9=shmget((key_t)1363,1024,IPC_CREAT||0666))==-1){
	perror("shmid9 create");
	exit(1);
	}
 	else {}//printf("shmid2 get\n");

	if((UC_EPSON_SCARA_Z_Data=(char*)shmat(shmid9,(void*)0,0))==(void*)-1){
	perror("shmat9 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_Z_Data attach\n");
        
sprintf(UC_EPSON_SCARA_Z_Data,"0");





	//////////////////////////UC_EPSON_SCARA_U_Data//////////////////////////////
	if((shmid10=shmget((key_t)1364,1024,IPC_CREAT||0666))==-1){
	perror("shmid10 create");
	exit(1);
	}
 	else {}//printf("shmid10 get\n");

	if((UC_EPSON_SCARA_U_Data=(char*)shmat(shmid10,(void*)0,0))==(void*)-1){
	perror("shmat10 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_U_Data attach\n");
        
sprintf(UC_EPSON_SCARA_U_Data,"0");






	//////////////////////////UC_EPSON_SCARA_V_Data//////////////////////////////
	if((shmid11=shmget((key_t)1365,1024,IPC_CREAT||0666))==-1){
	perror("shmid11 create");
	exit(1);
	}
 	else {}//printf("shmid11 get\n");

	if((UC_EPSON_SCARA_V_Data=(char*)shmat(shmid11,(void*)0,0))==(void*)-1){
	perror("shmat11 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_V_Data attach\n");
        
sprintf(UC_EPSON_SCARA_V_Data,"0");





	//////////////////////////UC_EPSON_SCARA_W_Data//////////////////////////////
	if((shmid12=shmget((key_t)1366,1024,IPC_CREAT||0666))==-1){
	perror("shmid12 create");
	exit(1);
	}
 	else {}//printf("shmid12 get\n");

	if((UC_EPSON_SCARA_W_Data=(char*)shmat(shmid12,(void*)0,0))==(void*)-1){
	perror("shmat12 faild");
	exit(1);
	}
 	else {}//printf("UC_EPSON_SCARA_W_Data attach\n");
        
sprintf(UC_EPSON_SCARA_W_Data,"0");




















struct pollfd fd;
int ret;

//create socket
struct sockaddr_in ser_addr;
int sockfd;
char send_buf[BUF_SIZE], recv_buf[BUF_SIZE];
int recv_len, ser_len;


if((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
{
fprintf(stderr, "socket error\n");
exit(1);
}

memset(&ser_addr, 0, sizeof(ser_addr));

ser_addr.sin_family = AF_INET;
ser_addr.sin_addr.s_addr = inet_addr(UADD);
ser_addr.sin_port = htons(UPORT);


//Pick and Place Sequence Variable
int seq_RtoL = 0;   //Right -> Left Sequence
int seq_LtoR = 0;   //Left -> Right Sequence


//string parser variable : coordinates value
  char* ptrX = '\0';
  char* ptrY = '\0';
  char* ptrZ = '\0';
  char* ptrU = '\0';
  char* ptrV = '\0';
  char* ptrW = '\0';


//OPC UA server can control the 3 color lamp using variables below
int opc_server_lamp_on_red = 0;
int opc_server_lamp_on_yellow = 0;
int opc_server_lamp_on_green = 0;
int opc_server_lamp_off_red = 0;
int opc_server_lamp_off_yellow = 0;
int opc_server_lamp_off_green = 0;



int epson_SCARA_running_stat = 0;  // 1 is start, 0 is stop
int turntable_running_stat = 1; // checking turntable status.. 1 is running, 0 is stopping


int sensor_RLflag = 0; // detection infomation : left=0, right=1
int sensor_LRflag = 0; // detection infomation : left=1, right=0


int left_sensor_flag = 0;
int right_sensor_flag = 0;

int lamp_flag = 0;

int stat_count = 0;

char* current_lamp_cp = {0};

int check_UC_Turntable_Running_Status =1;

int only_one_strt;

int flag_RT1=0; //if S1, S2, S3 change to T1, T2, T3, robot does not stop when robot finished job 
int flag_RT2=0;
int sensing=0;








/********************************************************************************************
 *
 *   LOOP 
 *
 *******************************************************************************************/
while(1)
{
 usleep(100*999); //periodic








/********************************************************************************************
 * Function below can control the 3 color lamp
 * ROUTE: OPC UA server -> UDP client -> UDP server -> TCP client -> TCP server(EPSON RC)
 * 
 *
 *******************************************************************************************/
if (opc_server_lamp_on_red == 1)
{
 opc_server_lamp_on_red = 0;
 //send to UDP server
}
else if (opc_server_lamp_off_red == 1)
{
 opc_server_lamp_off_red = 0;
 //send to UDP server
}
else if (opc_server_lamp_on_yellow == 1)
{
 opc_server_lamp_on_yellow = 0;
 //send to UDP server
}
else if (opc_server_lamp_off_yellow == 1)
{
 opc_server_lamp_off_yellow = 0;
 //send to UDP server
}
else if (opc_server_lamp_on_green == 1)
{
 opc_server_lamp_on_green = 0;
 //send to UDP server
}
else if (opc_server_lamp_off_green == 1)
{
 opc_server_lamp_off_green = 0;
 //send to UDP server
}
else {}//printf("waiting the lamp control data..");










/********************************************************************************************
 * 
 * condition for one time operation
 * 
 *
 *******************************************************************************************/
if((check_UC_Turntable_Running_Status != atoi((char *)UC_Turntable_Running_Status)))
{
  check_UC_Turntable_Running_Status = atoi((char *)UC_Turntable_Running_Status);

 sensor_RLflag = 0; //initialize sendsor flage 
 sensor_LRflag = 0; //initialize sendsor flage 
// stat_count = 0; //initialize start count

if(check_UC_Turntable_Running_Status == 0) epson_SCARA_running_stat = 1;
if(check_UC_Turntable_Running_Status == 2) epson_SCARA_running_stat = 1;
if(check_UC_Turntable_Running_Status == 1) epson_SCARA_running_stat = 0;



}





if(atoi((char *)UC_Turntable_Running_Status) == 0 && strcmp(UC_Epson_SCARA_Start_Set,"0") == 0 && atoi((char *)UC_EPSON_SCARA_Running_Status) == 0) epson_SCARA_running_stat=0;




//UC_Turntable_Running_Status :: running 1, stopped 0, waiting 2
if(atoi((char *)UC_Turntable_Running_Status) == 0 && (strcmp(UC_Epson_SCARA_Start_Set,"S2") == 0||strcmp(UC_Epson_SCARA_Start_Set,"S3") == 0))
{
 sprintf(UC_EPSON_SCARA_Running_Status,"1");
}


/*
else if(atoi((char *)UC_Turntable_Running_Status) == 1&&atoi((char *)UC_EPSON_SCARA_Running_Status) == 2)
{
 sprintf(UC_EPSON_SCARA_Running_Status,"0");
 sensor_RLflag = 0; //initialize sendsor flage 
 sensor_LRflag = 0; //initialize sendsor flage 
}

else if(atoi((char *)UC_Turntable_Running_Status) == 2 &&(seq_LtoR == 40||seq_RtoL ==40))
{
 sprintf(UC_EPSON_SCARA_Running_Status,"2");
 sensor_RLflag = 0; //initialize sendsor flage 
 sensor_LRflag = 0; //initialize sendsor flage 
}
*/
















/********************************************************************************************
 * Pick and Place : Right Object -> Left Slot
 * Check the 3 Condition below:  
 * epson_SCARA_running_stat=1, 
 * turntable_running_stat=0,
 * sensorLR_running_stat="SLR01" 
 *******************************************************************************************/

if(
epson_SCARA_running_stat == 1 && 
sensor_RLflag == 1 && 
strcmp(UC_Epson_SCARA_Start_Set,"T1") != 0 && 
strcmp(UC_Epson_SCARA_Start_Set,"T2") != 0 && 
strcmp(UC_Epson_SCARA_Start_Set,"T3") != 0 &&
(strcmp(UC_Epson_SCARA_Start_Set,"S2") == 0||strcmp(UC_Epson_SCARA_Start_Set,"S3") == 0)||flag_RT1==1)
{

switch(seq_RtoL){

case 1: // R_U
//seq_LtoR=0;
flag_RT1=1;
sendto(sockfd, Pcommd02, strlen(Pcommd02), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 2: // R_D_P
sendto(sockfd, Pcommd03, strlen(Pcommd03), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 3: // GRIPPER ON (CLOSE)
sendto(sockfd, Gcommd01, strlen(Gcommd01), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 5: // R_U
sendto(sockfd, Pcommd02, strlen(Pcommd02), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 6: // CENTER
sendto(sockfd, Pcommd08, strlen(Pcommd08), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 7: // L_U
sendto(sockfd, Pcommd05, strlen(Pcommd05), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 8: // L_D_D
sendto(sockfd, Pcommd07, strlen(Pcommd07), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 9: // GRIPPER OFF (OPEN)
sendto(sockfd, Gcommd02, strlen(Gcommd02), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 11: // L_U
sendto(sockfd, Pcommd05, strlen(Pcommd05), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

case 12: // R_HOME
sendto(sockfd, Pcommd01, strlen(Pcommd01), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_RtoL++;
break;

default:
sendto(sockfd, "\nNRD\n", strlen("\nNRD\n"), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
flag_RT1=1;
if(seq_RtoL == 20)
{

flag_RT1=0;

seq_RtoL = 0;

epson_SCARA_running_stat = 0;

left_sensor_flag = 0;
right_sensor_flag = 0;

 sensor_RLflag = 0; //initialize sendsor flage 
 sensor_LRflag = 0; //initialize sendsor flage 


 sprintf(UC_EPSON_SCARA_Running_Status,"2"); // UC_Turntable_Running_Status = 1

} //if(seq_RtoL == 60)
else seq_RtoL++;

break;
}//switch(seq_RtoL)
}//if(epson_SCARA_running_stat == 1 && turntable_running_stat == 0 && sensor_RLflag == 1)









/********************************************************************************************
Pick and Place : Left Object -> Right Slot
Check the 3 Condition below: 
epson_SCARA_running_stat=1, 
turntable_running_stat=0,
sensorLR_running_stat="SLR10" 
const char* Pcommd01 = "\nR_HOME\n";^M
const char* Pcommd02 = "\nR_U\n";^M
const char* Pcommd03 = "\nR_D_P\n";^M
const char* Pcommd04 = "\nR_D_D\n";^M
const char* Pcommd05 = "\nL_U\n";^M
const char* Pcommd06 = "\nL_D_P\n";^M
const char* Pcommd07 = "\nL_D_D\n";^M
const char* Pcommd08 = "\nCENTER\n"; //Pcommd08 - SCARA ROBOT^M

********************************************************************************************/

if(
epson_SCARA_running_stat == 1 && 
sensor_LRflag == 1 &&
strcmp(UC_Epson_SCARA_Start_Set,"T1") != 0 && 
strcmp(UC_Epson_SCARA_Start_Set,"T2") != 0 && 
strcmp(UC_Epson_SCARA_Start_Set,"T3") != 0 && 
(strcmp(UC_Epson_SCARA_Start_Set,"S2") == 0||strcmp(UC_Epson_SCARA_Start_Set,"S3") == 0)||flag_RT2==1)
{
switch(seq_LtoR){

	
case 1: // L_U
//seq_RtoL=0;
flag_RT2=1;
sendto(sockfd, Pcommd05, strlen(Pcommd05), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 2: // L_D_P
sendto(sockfd, Pcommd06, strlen(Pcommd06), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 3: // GRIPPER ON (CLOSE)
sendto(sockfd, Gcommd01, strlen(Gcommd01), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 5: // L_U
sendto(sockfd, Pcommd05, strlen(Pcommd05), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 6: // CENTER
sendto(sockfd, Pcommd08, strlen(Pcommd08), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 7: // R_U
sendto(sockfd, Pcommd02, strlen(Pcommd02), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 8: // R_D_D
sendto(sockfd, Pcommd04, strlen(Pcommd04), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 9: // GRIPPER OFF (OPEN)
sendto(sockfd, Gcommd02, strlen(Gcommd02), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 11: // R_U
sendto(sockfd, Pcommd02, strlen(Pcommd02), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

case 12: // R_HOME
sendto(sockfd, Pcommd01, strlen(Pcommd01), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
seq_LtoR++;
break;

default:
sendto(sockfd, "\nNRD\n", strlen("\nNRD\n"), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
flag_RT2=1;
if(seq_LtoR == 20){

flag_RT2=0;

seq_LtoR = 0;

epson_SCARA_running_stat = 0;

left_sensor_flag = 0;
right_sensor_flag = 0;

 sensor_RLflag = 0; //initialize sendsor flage 
 sensor_LRflag = 0; //initialize sendsor flage 

sprintf(UC_EPSON_SCARA_Running_Status,"2"); // UC_Turntable_Running_Status = 1

} //if(seq_LtoR == 90){
else seq_LtoR++;

break;
}//switch(seq_RtoL)
}//if(epson_SCARA_running_stat == 1 && turntable_running_stat == 0 && sensor_LRflag == 1)

 



if(
epson_SCARA_running_stat == 1 && 
seq_RtoL==0 && 
seq_LtoR==0 && 
flag_RT1==0 && 
flag_RT2==0 && 
strcmp(UC_Epson_SCARA_Start_Set,"T1") != 0 && 
strcmp(UC_Epson_SCARA_Start_Set,"T2") != 0 && 
strcmp(UC_Epson_SCARA_Start_Set,"T3") != 0) stat_count++;


if(stat_count >= 3)
{
 //epson_SCARA_running_stat = 0;
 sensor_RLflag = 0;
 sensor_LRflag = 0;
 stat_count = 0;
}




























/********************************************************************************************
 * This function can get string msg from Listener(UDP server)
 *
 *
 *******************************************************************************************/
//if((recv_len = recvfrom(sockfd, recv_buf, 128, MSG_DONTWAIT, (struct sockaddr *)&ser_addr, &ser_len)) < 0)
/*
if((recv_len = recvfrom(sockfd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&ser_addr, &ser_len)) < 0)
{
perror("recvfrom ");return 1;
}
recv_buf[recv_len] = '\0';
printf("received data : %s\n", recv_buf);
*/

 fd.fd = sockfd;
 fd.events = POLLIN;
 ret = poll(&fd, 1, 5000); //if exceed 100ms, execute timeout

 switch(ret)
 {
  case -1: //error
  perror("poll error!\r\n");
  exit(1); 
  break;

  case 0: //timeout
  sendto(sockfd, "\nNRD\n", strlen("\nNRD\n"), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
  break;

  default:

  if((recv_len = recvfrom(sockfd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&ser_addr, &ser_len)) < 0)
  {
  perror("recvfrom ");return 1;
  }
  recv_buf[recv_len] = '\0';
  printf("received data : %s\rdata size: %ld\r\n", recv_buf, strlen(recv_buf));









/********************************************************************************************
 *
 * if opc ua server send the robot scenario on msg here, robot lamp will be turn on
 *
 * -- LAMP CONTROL COMMAND --------------
 * const char* Lcommd01 = "\n3CRO\n";
 * const char* Lcommd02 = "\n3CRF\n";
 * const char* Lcommd03 = "\n3CYO\n";
 * const char* Lcommd04 = "\n3CYF\n";
 * const char* Lcommd05 = "\n3CGO\n";
 * const char* Lcommd06 = "\n3CGF\n";
 *
 *******************************************************************************************/
if(strcmp(UC_Epson_SCARA_Start_Set,"S2") == 0 && lamp_flag != 2 && seq_LtoR == 0 && seq_RtoL == 0)
{
sensor_RLflag = 0;  sensor_LRflag = 0; 
stat_count = 0;
lamp_flag = 2;
sendto(sockfd, Lcommd05, strlen(Lcommd05), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
}
else if(strcmp(UC_Epson_SCARA_Start_Set,"S3") == 0 && lamp_flag != 3 && seq_LtoR == 0 && seq_RtoL == 0)
{
stat_count = 0;
sensor_RLflag = 0;  sensor_LRflag = 0; 
lamp_flag = 3;
sendto(sockfd, Lcommd05, strlen(Lcommd05), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
}
else if(strcmp(UC_Epson_SCARA_Start_Set,"S1") == 0 && lamp_flag != 1 && seq_LtoR == 0 && seq_RtoL == 0)
{
stat_count = 0;
sensor_RLflag = 0;  sensor_LRflag = 0; 
lamp_flag = 1;
sendto(sockfd, Lcommd01, strlen(Lcommd01), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
}
else if((strcmp(UC_Epson_SCARA_Start_Set,"T1") == 0||strcmp(UC_Epson_SCARA_Start_Set,"T2") == 0 ||strcmp(UC_Epson_SCARA_Start_Set,"T3") == 0 ) && lamp_flag != 4 && seq_LtoR == 0 && seq_RtoL == 0)
{
stat_count = 0;
sensor_RLflag = 0;  sensor_LRflag = 0; 
lamp_flag = 4;
usleep(100*1000);
sendto(sockfd, Lcommd03, strlen(Lcommd03), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
sprintf(UC_EPSON_SCARA_Running_Status,"0"); 
}
/*
else if(strcmp(UC_Epson_SCARA_Start_Set,"T2") == 0 && lamp_flag != 5 && seq_LtoR == 0 && seq_RtoL == 0)
{
stat_count = 0;
sensor_RLflag = 0;  sensor_LRflag = 0; 
lamp_flag = 5;
sendto(sockfd, Lcommd05, strlen(Lcommd05), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
sprintf(UC_EPSON_SCARA_Running_Status,"0"); 
}
*/
else if(seq_LtoR == 0 && seq_RtoL == 0)
{
sendto(sockfd, "\nNRD\n", strlen("\nNRD\n"), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));
}


else
{
//printf("waiting.. scenario chang comm..\r\n");
}


//if(sensing>=5){ sensing=0;}
//else{ sensing++;}








/*******************************************************************************************
when 3 robot status changed, Stop 3 robot and Turn on the yellow lamp
if(changing_robot_stat == 1 && current_lamp != "3CYO")
changing_robot_stat = 1
current_lamp_stat = "3CYO"
sendto(sockfd, Lcommd03, strlen(Lcommd03), 0, (struct sockaddr *)&ser_addr, sizeof(ser_addr));

********************************************************************************************/
char* current_lamp = strtok(recv_buf,"\n");

if(strcmp(current_lamp,"3CRO") == 0) 
{
//printf("Current EPSON SCARA robot lamp status : RED ON\n");
sprintf(UC_EPSON_SCARA_Indicator_Light_Status,"%s",current_lamp);
//send to opc ua server
}
else if(strcmp(current_lamp,"3CRF") == 0) 
{
//printf("Current EPSON SCARA robot lamp status : RED OFF\n");
sprintf(UC_EPSON_SCARA_Indicator_Light_Status,"%s",current_lamp);
//send to opc ua server
}
else if(strcmp(current_lamp,"3CYO") == 0) 
{
//printf("Current EPSON SCARA robot lamp status : YELLOW ON\n");
sprintf(UC_EPSON_SCARA_Indicator_Light_Status,"%s",current_lamp);
//send to opc ua server
}
else if(strcmp(current_lamp,"3CYF") == 0) 
{
//printf("Current EPSON SCARA robot lamp status : YELLOW OFF\n");
sprintf(UC_EPSON_SCARA_Indicator_Light_Status,"%s",current_lamp);
//send to opc ua server
}
else if(strcmp(current_lamp,"3CGO") == 0) 
{
//printf("Current EPSON SCARA robot lamp status : GREEN ON\n");
sprintf(UC_EPSON_SCARA_Indicator_Light_Status,"%s",current_lamp);
//send to opc ua server
}
else if(strcmp(current_lamp,"3CGF") == 0) 
{
//printf("Current EPSON SCARA robot lamp status : GREEN OFF\n");
sprintf(UC_EPSON_SCARA_Indicator_Light_Status,"%s",current_lamp);
//send to opc ua server
}
else 
{
 current_lamp_cp = "wating..";
 //printf("Waiting the lamp data...\r\n");
}






/***********************************************************************************
 * processing sensor left/right data
 * Route : SENSOR SIGNAL -> EPSON RC -> TSN Listener -> TSN Talker -> UNEST platform
 * 
 ***********************************************************************************/

char* sensorLR_running_stat = strtok(recv_buf,"\n");
//printf("lenth: %ld | msg:%s\n",strlen(sensorLR_running_stat), sensorLR_running_stat);

if(strcmp(sensorLR_running_stat,"SLR00") == 0) 
{

//printf("SLR00 : There is no object.\n");
sprintf(UC_EPSON_SCARA_SensorLR_Running_Status,"%s",sensorLR_running_stat);
//send to opc ua server
}

else if(strcmp(sensorLR_running_stat,"SLR01") == 0) 
{
left_sensor_flag = 0;
right_sensor_flag = 1;
//printf("SLR01 : detected object in right slot.\n");
sprintf(UC_EPSON_SCARA_SensorLR_Running_Status,"%s",sensorLR_running_stat);
//send to opc ua server
}

else if(strcmp(sensorLR_running_stat,"SLR10") == 0) {
left_sensor_flag = 1;
right_sensor_flag = 0;
//printf("SLR10 : detected object in left slot.\n");
sprintf(UC_EPSON_SCARA_SensorLR_Running_Status,"%s",sensorLR_running_stat);
//send to opc ua server
}

else if(strcmp(sensorLR_running_stat,"SLR11") == 0) {
//printf("SLR11 : detected object in two slot.\n");
sprintf(UC_EPSON_SCARA_SensorLR_Running_Status,"%s",sensorLR_running_stat);
//send to opc ua server
}

else{} //printf("Waiting two sensor data...\r\n");








/********************************************************************************************


 if epson_SCARA_running_stat is 1 , sensor_RLflag or sensor_LRflag will be set up

********************************************************************************************/
/*
if(epson_SCARA_running_stat == 1 && stat_count == 10 && left_sensor_flag == 0 && right_sensor_flag == 1 && seq_RtoL==0 && seq_LtoR==0) 
{
 sensor_RLflag = 1;  sensor_LRflag = 0;
}
*/
if(epson_SCARA_running_stat == 1 && stat_count == 2 && strcmp(sensorLR_running_stat,"SLR01")==0 && seq_RtoL==0 && seq_LtoR==0) 
{
 sensor_RLflag = 1;  sensor_LRflag = 0;
}
else if(epson_SCARA_running_stat == 1 && stat_count == 2 && strcmp(sensorLR_running_stat,"SLR10")==0 && seq_RtoL==0 && seq_LtoR==0)
{
 sensor_RLflag = 0;  sensor_LRflag = 1; 
}
else
{
 //
}








/***********************************************************************************
 * IF string lenth is more than 90, that mean coodinates value data
 *
 *
 **********************************************************************************/
 
 if(strlen(recv_buf) > 50){
 
  char* ptr = '\0';

  ptr = strtok(recv_buf,"  X:    "); ptrX = ptr;
  ptr = strtok(NULL, " Y:  ");   ptrY = ptr;
  ptr = strtok(NULL, " Z:  ");   ptrZ = ptr;
  ptr = strtok(NULL, " U:  ");   ptrU = ptr;
  //ptr = strtok(NULL, " V:  ");   ptrV = ptr;
//  ptr = strtok(NULL, " W:  ");   ptrW = ptr;

printf("X:\t%s\n",ptrX);
printf("Y:\t%s\n",ptrY);
printf("Z:\t%s\n",ptrZ);
printf("U:\t%s\n",ptrU);
//printf("V:\t%s\n",ptrV);
//printf("W:\t%s\n",ptrW);
sprintf(UC_EPSON_SCARA_X_Data,"%s",ptrX);//send the coordinates to opc ua server
sprintf(UC_EPSON_SCARA_Y_Data,"%s",ptrY);//send the coordinates to opc ua server
sprintf(UC_EPSON_SCARA_Z_Data,"%s",ptrZ);//send the coordinates to opc ua server
sprintf(UC_EPSON_SCARA_U_Data,"%s",ptrU);//send the coordinates to opc ua server
//sprintf(UC_EPSON_SCARA_V_Data,"%s",ptrV);



}//if(strlen(recv_buf) > 90)






  break;
 } //switch(ret)





printf("current variables: --------------------------------------\r\n");
printf("             1. epson_SCARA_running_stat     : %d\r\n", epson_SCARA_running_stat);
printf("             2. sensor_RLflag                : %d\r\n", sensor_RLflag);
printf("             3. sensor_LRflag                : %d\r\n", sensor_LRflag);
printf("             4. seq_LtoR                     : %d\r\n", seq_LtoR);
printf("             5. seq_RtoL                     : %d\r\n", seq_RtoL);
printf("             6. stat_count                   : %d\r\n", stat_count);
printf("             7. current_lamp_cp              : %s\r\n", current_lamp_cp);
printf("             8. UC_Epson_SCARA_Start_Set     : %s\r\n", UC_Epson_SCARA_Start_Set);
printf("             9. UC_Turntable_Running_Status  : %s\r\n", UC_Turntable_Running_Status);
printf("            10. UC_EPSON_SCARA_Running_Status: %s\r\n", UC_EPSON_SCARA_Running_Status);
printf("----------------------------------------------------------------------\r\n");



}//while(1)







close(sockfd);

return 0;
}


