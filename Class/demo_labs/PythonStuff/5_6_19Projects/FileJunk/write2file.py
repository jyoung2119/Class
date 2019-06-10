#File IO Practice
#Write number 1-100 to number_list.txt

def main():
    try:
        fileStuff = open("number_list.txt", 'w')
        for i in range(1, 101):
            fileStuff.write(str(i))
            if i < 100:
                fileStuff.write("\n")

    finally:
        fileStuff.close()

main()