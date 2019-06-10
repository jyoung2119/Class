#Read file number_list.txt and display data

def main():
    try:
        fileStuff = open("number_list.txt", 'r')
        for line in fileStuff:
            print(line)
    finally:
        fileStuff.close()

main()