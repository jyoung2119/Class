from socket import *

s = socket(AF_INET,SOCK_STREAM)
s.connect(("localhost",14599))

while 1:
    s.send(input("USER:>").encode("utf-8"))
    resp = s.recv(1024)
    print(resp)
    if resp == '':
        break

s.close()