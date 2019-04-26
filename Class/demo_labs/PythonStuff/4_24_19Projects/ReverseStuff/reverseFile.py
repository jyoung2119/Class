#Reverse lines of a file and reverse the order of the words in each line of the file

def main():
    '''fileStuff = open("normFile.txt", "r")
    if fileStuff.mode == "r":
        contents = fileStuff.read()
    fileStuff.close()
    print(contents)'''

    for line in reversed(list(open("normFile.txt"))):
        string = "".join(reversed(line.rstrip()))
        print(string)

main()