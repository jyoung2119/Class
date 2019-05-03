import socket
import json

# msgFromClient       = "Hello UDP Server"
# bytesToSend         = str.encode(msgFromClient)
serverAddressPort   = ("127.0.0.1", 1)
bufferSize          = 1024

userString = input("Enter a String: ")

#Encode in order to send 
bytesToSend = str.encode(userString)

# Create a UDP socket at client side
UDPClientSocket = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)

# Send to server using created UDP socket
UDPClientSocket.sendto(bytesToSend, serverAddressPort)

sortedString = UDPClientSocket.recvfrom(bufferSize)

msg = "Sorted String from Server {}".format(sortedString[0])

print(msg)