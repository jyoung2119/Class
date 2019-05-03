#not finished, does not exit loop...

import socket
import json

localIP     = "127.0.0.1"
localPort   = 1
serverAddressPort   = ("127.0.0.1", 1)
bufferSize  = 1024

# Create a datagram socket
UDPServerSocket = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)

# Bind to address and ip
UDPServerSocket.bind((localIP, localPort)) 

print("UDP server up and listening")

# Listen for incoming datagrams
while(True):
    #Receive data from client and store in variable
    bytesAddressPair = UDPServerSocket.recvfrom(bufferSize)

    userString = str(bytesAddressPair[0])

    userString = userString[2:-1]
    userList = userString.split()
    userList = sorted(userList, key=len)

    newString = str.encode(' '.join(userList))
    
    UDPServerSocket.sendto(newString, serverAddressPort)