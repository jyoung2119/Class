#Series of 20 numbers

def main():
    numList = []
    temp = 0
    tNum = 0
    numAvg = 0
    hIndex = 0
    lIndex = 0
    for i in range(20):
        temp = int(input("Enter a Number: "))
        numList.append(temp)
        tNum += numList[i]
        
    numAvg = tNum / 20

    numHigh = numList[0]
    numLow = numList[0]

    for i in range(20):
        if numList[i] > numHigh:
            numHigh = numList[i]
            hIndex = i
    for i in range(20):
        if numList[i] < numLow:
            numLow = numList[i]
            lIndex = i

    print("Total = ",tNum)
    print("Average = ",format(numAvg, '.2f'))
    print("Highest Number = ",numList[hIndex])
    print("Lowest Number = ",numList[lIndex])

main()