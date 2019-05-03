#Run with py -2

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",14599))
s.listen(5)
c,a = s.accept()

while 1:
    data = c.recv(1024)
    print(data)
    c.send("Received!")
    if data == "END":
        break

c.close()