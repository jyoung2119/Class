/* Reading data that's been sent from the server
In this part of the recipe, we will learn how data that's been 
sent from the server is received and displayed on the screen. 

1.	Define a variable of type sockaddr_i.
2.	Invoke the socket function to create a socket. 
	The port number that's specified for the socket is 2000.
3.	Invoke the connect function to initiate a connection to the socket.
4.	Because we are working on the local machine, 
	the localhost address 127.0.0.1 is assigned to the socket.
5.	Invoke the recv function to receive the message from 
	the connected socket. The message that's read from the socket is then displayed on the screen.



*/

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>

int main(){
    int clientSocket;
    char str[255];
    struct sockaddr_in client_Address;
    socklen_t address_size;
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    client_Address.sin_family = AF_INET;
    client_Address.sin_port = htons(2000);
    client_Address.sin_addr.s_addr = inet_addr("127.0.0.1");
    memset(client_Address.sin_zero, '\0', sizeof client_Address.sin_zero); 
    address_size = sizeof client_Address;
    connect(clientSocket, (struct sockaddr *) &client_Address, address_size);
    recv(clientSocket, str, 255, 0);
    printf("Data received from server: %s", str);  
    return 0;
}