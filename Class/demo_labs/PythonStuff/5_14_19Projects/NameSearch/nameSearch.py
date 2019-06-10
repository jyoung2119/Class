# Read two files into separate lists 

def main():
    i = 0
    x = 0
    mFile = open("BoyNames.txt", 'r')
    fFile = open("GirlNames.txt", 'r')

    mName = input("Enter a boy's name: ")
    fName = input("Enter a girl's name: ")

    mList = list(mFile)
    for name in mList:
        mList[i] = mList[i].strip()
        i += 1

    fList = list(fFile)
    for name in fList:
        fList[x] = fList[x].strip()
        x += 1 

    if mName in mList:
        print(mName, "was among the most popular names(case-sensitive)!")
    else:
        print(mName, "was not among the most popular names(case-sensitive).")
    
    if fName in fList:
        print(fName, "was among the most popular names(case-sensitive)!")
    else:
        print(fName, "was not among the most popular names(case-sensitive).")

    mFile.close()
    fFile.close()

main()