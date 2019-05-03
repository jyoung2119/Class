import socket

host_name = socket.gethostname()
ip_address = socket.gethostbyname(host_name)
print("Host Name: ", host_name)
print("IP Address: ", ip_address)