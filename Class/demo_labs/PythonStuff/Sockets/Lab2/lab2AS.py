from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",14599))
s.listen(5)
c,a = s.accept()

while 1:
    data = c.recv(1024)
    reverse = data[::-1]

    print(reverse)
    c.send(reverse)
    if data == "END":
        break

c.close()