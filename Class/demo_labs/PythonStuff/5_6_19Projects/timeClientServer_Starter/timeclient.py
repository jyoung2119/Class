"""
File: timeclient.py
Client for obtaining the day and time.
"""

from socket import *
from codecs import decode
import errno

HOST = "localhost" 
PORT = 5000
BUFSIZE = 1024
ADDRESS = (HOST, PORT)

server = socket(AF_INET, SOCK_STREAM)               # Create a socket
try:
    server.connect(ADDRESS)                             # Connect it to a host
    dayAndTime = decode(server.recv(BUFSIZE), "ascii")  # Read a string from it
except ConnectionRefusedError as e:
    print(e)
finally:
    print(dayAndTime)
    server.close()                                      # Close the connection
