#Two dimensional list

def main():
    intList = []
    for i in range(0,5):
        intList.append([])
        for x in range(0,3):
            intList[i].append(0)
            intList[i][x] = int(input("Enter a number: "))
    print(intList)

main()