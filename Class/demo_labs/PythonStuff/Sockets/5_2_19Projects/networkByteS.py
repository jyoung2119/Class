#Server that converts int from client into network byte order

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",14599))
s.listen(5)
c,a = s.accept()

while 1:
    data = c.recv(1024)
    if data == "END":
        break

    hostToNet = htonl(int(data))
    print(hostToNet)
    netToHost = ntohl(int(hostToNet))
    print(netToHost)
    c.send(data)

c.close()