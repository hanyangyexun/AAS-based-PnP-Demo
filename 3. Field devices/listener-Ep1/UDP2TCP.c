/**************************************
* Author: 	Junhui Jiang
* DESC:  	Conver TSN to Ethernet-frame
			Conver UDP-data to TCP-data
*Copyright: Hanyang University CSS Lab Junhui Jiang
*Update Data: 2019-11-05
* Test:	
		tsn_talker(udp_client)  <---> tsn_listener(udp_server:6666 <----> Kuka-tcp_Client:59152)
		tsn_talker(udp_client)  <---> tsn_listener(udp_server:6666 <----> Epson-tcp_Server:59152)

How to compile this file:
				sudo gcc -Wall -o udp2tcp UDP2TCP.c  -lpthread
How to run:
				sudo ./udp2tcp
 *************************************/
#define APP_NAME		"TSN agent"
#define APP_DESC		"Convert TSN frame to Ethernet frame"
#define APP_COPYRIGHT	"Hanyang University CSS Lab Junhui Jiang"
#define APP_DISCLAIMER	"THERE IS ABSOLUTELY NO WARRANTY FOR THIS PROGRAM."

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
//#include <pcap.h>
#include <ctype.h>


/*The only area in this file you can modify, please do not modify the other codes*/
/****************Start******************/

#define Robot_RC "Epson"    //if this line is not commented, then this app will work for Epson
//#define Robot_RC "Kuka"  //if this line is not commented, then this app will work for Kuka
#define Epson_tcp_PORT 4084     //TCP port for Epson
#define Kuka_tcp_PORT 59152	////TCP port for Kuka
#define Epson_tcp_address "192.168.10.41" // Ip address of Epson

/****************End******************/

#define UDP_SERVER_PORT 11181	//udp server port of TSN taker



#define QUEUE   20
#define BUF_LEN 1024



//int tcp_client_fd;
int udp_server_init();
int udp_client_init();   
int tcp_client_init();  
int tcp_server_init(); 
void handle_udp_msg(int fd); //udp_server send message to SW(TSN listener SW)
int Iscommand(char *buf);     //check whether the head of command is "CMD"
void CMD_handle(int fd);//   if a message is a command, send to TCP client
void TCP_Rec(int fd);//      TCP client Rec tcp message from Epson tcp_server   
void UDP_Rec(int fd);//      UDP server rec message from TCP client



 char CMDbuf[BUF_LEN]={};     //command buffer
 char DATAbuf[BUF_LEN]={};     //response buffer
 struct sockaddr_in client_addr;  //client_addr: IP address of TSN Talker
 
 struct sockaddr_in servaddr; // Server ip of tsn talker
 struct sockaddr_in talkeraddr; // ip,port,protocal of TSN talker //0930
 
 
 //client_addr = "192.168.0.2";
pthread_mutex_t mutex[2];// mutex[0]:CMDbuf; mutex[1]:DATAbuf;

 
/*client*/
int main(int argc, char **argv)
{
	
	printf("2019-11-05 Junhui\n");
	printf("APP for %s\n",Robot_RC);
	pthread_t thread[5];  
 

	
	// Threads
	
	 int udp_server_fd=udp_server_init(); //udp_server_init(); 
	if(udp_server_fd!=-1){                 
		printf("UDP server: Successfully Creat! wait CMD from TSN Talker\n");
		}
	else printf("UDP server: Error\n");
	//int tcp_client_fd=tcp_client_init();//tcp_client _init();   
	
	/*
	int udp_client_fd = udp_client_init();
	
	if(udp_client_fd >0 ){
		printf("UDP client is ready \n");
	}
	*/
	
 
	int err1=pthread_create(&thread[0],NULL,(void *)handle_udp_msg,(void *)udp_server_fd); 
	if(err1!=0)
	printf("create udp_message_handle thread failed:%s\n",strerror(err1));
                  
	//
	
	//tcp_server_init

	if(memcmp(Robot_RC,"Kuka",4)==0)
	{
		printf("Kuka Robot RC \n");
		int tcp_server_fd=tcp_server_init();
		pthread_create(&thread[1],NULL,(void *)CMD_handle,(void *)tcp_server_fd);
		pthread_create(&thread[2],NULL,(void *)TCP_Rec,(void *)tcp_server_fd);
		
		/*if(err2!=0)
		printf("create tcp_message_handle thread failed:%s\n",strerror(err2));
		if(err3!=0)
		printf("create tcp_message_handle thread failed:%s\n",strerror(err3));*/
	}
	if(memcmp(Robot_RC,"Epson",5)==0)
	{
		printf("Epson Robot RC \n");
		int tcp_client_fd=tcp_client_init();
		pthread_create(&thread[1],NULL,(void *)CMD_handle,(void *)tcp_client_fd);
		pthread_create(&thread[2],NULL,(void *)TCP_Rec,(void *)tcp_client_fd);
		/*if(err2!=0)
		printf("create tcp_message_handle thread failed:%s\n",strerror(err2));
		if(err3!=0)
		printf("create tcp_message_handle thread failed:%s\n",strerror(err3));*/
		
	}

	//


	int err4=pthread_create(&thread[3],NULL,(void *)UDP_Rec,(void *)udp_server_fd);
	if(err4!=0)
	printf("create tcp_message_handle thread failed:%s\n",strerror(err4));


// TSN function
 
    while(1);
	
     return 0;

      
}



int udp_client_init()
{
	int udpfd;
	char udp_buffer[1024];
	//struct sockaddr_in     servaddr; 
  
    // Creating socket file descriptor 
    if ( (udpfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) { 
        perror("socket creation failed"); 
        exit(EXIT_FAILURE); 
    } 
	memset(&servaddr, 0, sizeof(servaddr)); 
    servaddr.sin_family = AF_INET; 
    servaddr.sin_port = htons(10000);   //IP address of TSN talker
    servaddr.sin_addr.s_addr = inet_addr("192.168.0.2");  // Ip address of TSN Talker 
	

	return udpfd;	
	
}


int udp_server_init(){
	
	
	int udp_server_fd, ret;
    struct sockaddr_in ser_addr; 

    udp_server_fd = socket(AF_INET, SOCK_DGRAM, 0); //AF_INET:IPV4;SOCK_DGRAM:UDP
	
    if(udp_server_fd < 0)
    {
        printf("create socket fail!\n");
        return -1;
    }

    memset(&ser_addr, 0, sizeof(ser_addr));
    ser_addr.sin_family = AF_INET;
    ser_addr.sin_addr.s_addr = htonl(INADDR_ANY); 
    ser_addr.sin_port = htons(UDP_SERVER_PORT);   

    ret = bind(udp_server_fd, (struct sockaddr*)&ser_addr, sizeof(ser_addr));
    if(ret < 0)
    {
        printf("socket bind fail!\n");
        return -1;
    }
	return udp_server_fd;
	}


/*
 * function void handle_udp_msg int udp_server_fd 
 * Description: Process data sent from TSN talker, and then cache it in CMDbuf

*/

void handle_udp_msg(int fd) //handle the udp_msg,if a msg is a CMD, 
{

	int BUFF_LEN=1024;
    char buf[BUFF_LEN];  
    socklen_t len;
    int count;
 
    while(1)
    {

        memset(buf, 0, BUFF_LEN);
        len = sizeof(client_addr);
        count = recvfrom(fd, buf, BUFF_LEN, 0, (struct sockaddr*)&client_addr, &len);  //wait until msg comes from TSN talker
        if(count == -1)
        {
            printf("recieve data fail!\n");
            return;
        }
       
        printf("handle_udp_msg:%s\n",buf);  // print MSG received from UDP client of TSN Talker  Junhui 0929
        if(Iscommand(buf)){                  
			pthread_mutex_lock(&mutex[0]); 
			memcpy(CMDbuf,buf,count);// Copy buffer data of udp_server to CMDbuf.  Junhui 0929    
			pthread_mutex_unlock(&mutex[0]); 
			printf("CMDbuf:%s\n",CMDbuf); 
	    }
        memset(buf, 0, BUFF_LEN);         // clear buf
		
		/* 
        sprintf(buf, "I have recieved %d bytes data!\n", count);  // reply client (to be deleted)
        printf("udp server:%s\n",buf);  //print msg sent back to udp_client of TSN Talker
        sendto(fd, buf, BUFF_LEN, 0, (struct sockaddr*)&client_addr, len);  // send back to TSN Talker
		
		*/ // Junhui 0929
 
        
    }
}


int Iscommand(char * buf){     // Always return 1; Junhui 0929
	int ret=0;
	/*
		if(memcmp(buf,"CMD",3)==0)
	ret=1;
	return ret;
	
		*/
		
	ret = 1;
	return ret;
	
	}

int tcp_client_init(){        
	

	int ret;
	int clientSocket;
	struct sockaddr_in serverAddr;
	struct sockaddr_in clientAddr;
	
	printf("TCP client, Connect to Epson RC\n");
	memset(&serverAddr, 0x00, sizeof(serverAddr));
	memset(&clientAddr, 0x00, sizeof(clientAddr));

	/*clientSocket*/
	clientSocket = socket(AF_INET, SOCK_STREAM, 0); /*int socket£¨int domain , int type , int protocol)*/
	if(clientSocket == -1)
	{
		printf("socket() error: %s\n", strerror(errno));
		return -1;
	}
	printf("create tcp_client socket success.\n");


	/*Convert server IP and PORT*/
	serverAddr.sin_family = AF_INET;                           /*ipv4*/
    serverAddr.sin_addr.s_addr = inet_addr(Epson_tcp_address);       /*in_addr_t inet_addr(const char *ip)*/
	serverAddr.sin_port = htons(Epson_tcp_PORT);                         /*uint16_t  htons(uint16_t hostshort)*/
    printf("server ip and port is %s:%d\n", Epson_tcp_address,Epson_tcp_PORT);

	/*connect*/
	/* int connect (int sockfd, struct sockaddr *serv_addr, socketlen_t addrlen)*/
	ret = connect(clientSocket, (struct sockaddr *)(&serverAddr), (socklen_t)(sizeof(serverAddr)) );
	if(ret == -1)
	{
		printf("connect() error: %s\n", strerror(errno));
		return -1;
	}
	printf("connect to tcp_server success.\n");

	/*send*/
	printf("tcp_client has inited.\n");
	return clientSocket;
	}



int tcp_server_init(){        
	
	printf(" TCP Server, Connect to Kuka RC \n");
	int ret;
	int serverSocket;
	struct sockaddr_in serverAddr;
	struct sockaddr_in clientAddr;

    int server_sockfd = socket(AF_INET,SOCK_STREAM, 0);
 
    struct sockaddr_in server_sockaddr;
	
    server_sockaddr.sin_family = AF_INET;
    server_sockaddr.sin_port = htons(Kuka_tcp_PORT);
    server_sockaddr.sin_addr.s_addr = htonl(INADDR_ANY);
 
    if(bind(server_sockfd,(struct sockaddr *)&server_sockaddr,sizeof(server_sockaddr))==-1)
    {
        perror("bind");
        exit(1);
    }
 
    if(listen(server_sockfd,QUEUE) == -1)
    {
        perror("listen");
        exit(1);
    }
 
    char buffer[1024];
    struct sockaddr_in client_addr;
    socklen_t length = sizeof(client_addr);
 
    int conn = accept(server_sockfd, (struct sockaddr*)&client_addr, &length);
    if(conn<0)
    {
        perror("connect");
        exit(1);
    }
	printf("Accept Successfully \n");

 

	return conn;  //return ACCEPT function
	
	}


/*
 * function void CMD_handle(int tcp_client_fd)  
 * Description: Read data from CMDbuf and then send it to Robot RC.
*/

void CMD_handle(int fd)                     // Junhui 0929         
{
	char bufsend[BUF_LEN]={0};
	char dst[64] = "0";
	char a[64], b[64], c[64], command[64];
    int ret;
	int rc = 2;
	while(1)
	{
		if((CMDbuf[0]!=0))//CMDbuf is not empty
		{ 	
			fflush(stdin);
			memset(bufsend, 0, sizeof(bufsend));
			memset(b, 0, sizeof(b));
			memset(c, 0, sizeof(c));
			memset(dst, 0, sizeof(dst));
			
			if(memcmp(Robot_RC,"Epson",5)==0) // Epson RC
			{
				pthread_mutex_lock(&mutex[0]);
				
				strcpy(bufsend,CMDbuf);
			}
			
			if(memcmp(Robot_RC,"Kuka",4)==0)
			{
				pthread_mutex_lock(&mutex[0]); 
				
				strncpy(dst, CMDbuf, 1);
				
				strcpy(b, "<Pc><Command>");
				strcpy(c, "</Command></Pc>");
				strcat(dst, c);
				strcat(b, dst);	//b = b + dst + c
				strcpy(bufsend,b);
					
			}

			memset(CMDbuf, 0, sizeof(CMDbuf));  //clear CMDbuf
			
			pthread_mutex_unlock(&mutex[0]);//½âËø
			//printf("bufsend,%s",bufsend); 
			printf("CMDbuf,%s",CMDbuf);
			
			ret = send(fd, bufsend, sizeof(bufsend)-1, 0);
			if(ret == -1)
			{
				printf("send() error: %s\n", strerror(errno));
	    	
			}
		}
	}
}
/*
 * function void TCP_Rec(int tcp_client_fd) 
 * Description: Receive data from Robot RC and cache data in Databuf.
*/

void TCP_Rec(int fd)
{
	char bufrec[BUF_LEN]={0};
	int ret;
	
	memset(bufrec, 0, sizeof(bufrec));
	while(1){	
	ret=recv(fd, bufrec, sizeof(bufrec)-1, 0);
	if( ret < 0 )  /*ssize_t recv( int sockfd, void *buf, size_t nbytes,  int flags)*/
	{
		printf("TCP_recv() error: %s\n", strerror(errno));
		close(fd);
		exit(1);
		
		
	}

		pthread_mutex_lock(&mutex[1]);    
		strcpy(DATAbuf,bufrec);
		printf("TCP_Rec:%s\n",DATAbuf);   
		memset(bufrec, 0, sizeof(bufrec));
		pthread_mutex_unlock(&mutex[1]);    
     }	
}

/*
 * function void UDP_Rec(int udp_server_fd) 
 * Description: Read data from Databuf and then send data back to TSN Talker.
*/
void UDP_Rec(int fd)
{
	//memset(&client_addr, 0, sizeof(client_addr)); 
	int len = sizeof(servaddr);
	
	// UDP Server
	/* 
	int len;
	char udpbuffer[1024];
	int n_fd;
	 n_fd = recvfrom(fd, (char*)udpbuffer, 1024,MSG_WAITALL,	(struct sockaddr *) &client_addr, &len);
	 
	 */
	 
	/*
	client_addr.sin_family = AF_INET;
	client_addr.sin_port = htons(8888);
	client_addr.sin_addr.s_addr = inet_addr("192.168.0.2"); */
	len = sizeof(client_addr);
	while(1)
	{
		if((DATAbuf[0]!=0))//CMDbuf is not empty
		{ 
     		
			
			//UDP client
			//if(sendto(fd, DATAbuf, BUF_LEN, 0, (struct sockaddr*)&servaddr, len)<0)
		//UDP Server	
		 if(sendto(fd, DATAbuf, BUF_LEN, 0, (struct sockaddr*)&client_addr, len)<0)
			{ 
				printf("Send data to TSN Talker: error.\n"); 
				perror("socket");
				exit(EXIT_FAILURE);
		
			}
			printf("TCP send to UDP: %s\n",DATAbuf);
			pthread_mutex_lock(&mutex[1]);  
			memset(DATAbuf, 0, sizeof(DATAbuf));
			pthread_mutex_unlock(&mutex[1]);  
		}
	}
}

