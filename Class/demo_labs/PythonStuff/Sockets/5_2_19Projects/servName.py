import socket

#Prompt for port number and protocol
portNum = int(input("Input Port Number: "))
proto = (input("Input Protocol: "))
#Get service name from port number and protocol
service_name = socket.getservbyport(portNum, proto)
print("Port: " + str(portNum) + " => service name: " + service_name)