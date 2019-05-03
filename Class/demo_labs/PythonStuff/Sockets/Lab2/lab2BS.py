import socket
import json

localIP     = "127.0.0.1"
localPort   = 20001
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
    #Take first part of the data received(the actual JSON bytes)
    person_dict = json.loads(bytesAddressPair[0]) 
    #Store second part(IP and port)
    address = bytesAddressPair[1]

    #clientMsg = "Message from Client:{}".format(message)
    clientMsg = "Message from Client:{}".format(person_dict)
    clientIP  = "Client IP Address:{}".format(address)
    
    print(clientMsg)
    print(clientIP)
    print("Data Type of Dictionary: ", type(person_dict))
