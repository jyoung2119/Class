import socket

domain_name = input("Enter a domain name: ")
ip_address = socket.gethostbyname(domain_name)
host_name = socket.gethostbyaddr(ip_address)
print("Domain: ", domain_name)
print("IP Address: ", ip_address)
print("Host Name: ", host_name)