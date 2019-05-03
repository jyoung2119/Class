#Client program that send an int to server for conversion

from socket import *

s = socket(AF_INET,SOCK_STREAM)
s.connect(("localhost",14599))

while 1:
    s.send(input("USER:>").encode("utf-8"))
    resp = s.recv(1024)
    #resp = ntohl(int(resp))
    print(str(resp))
    if resp == '':
        break

s.close()