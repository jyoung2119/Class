#Rainfall Calculator

def main():
    #list and variables
    monthList = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec']
    rList = []
    tRain = 0
    avgMonthly = 0
    mHigh = 0
    hIndex = 0
    mLow = 0
    lIndex = 0

    #Loop for input and calculate total
    for i in range(12):
        print("Enter total rainfall for month of", monthList[i], ": ", end="")
        rain = float(input(""))
        tRain += rain
        rList.append(rain)
    #Average
    avgMonthly = tRain / 12

    #Set first index as low and high to start
    mHigh = rList[0]
    mLow = rList[0]

    #loop to find highest
    for i in range(12):
        if rList[i] > mHigh:
            mHigh = rList[i]
            hIndex = i
    #loop to find lowest
    for i in range(12):
        if rList[i] < mLow:
            mLow = rList[i]
            lIndex = i

    print("Total Rainfall = ",tRain)
    print("Average Monthly Rainfall = ",format(avgMonthly, '.2f'))
    print("Month with Highest Amount = ",monthList[hIndex],"(", mHigh,")")
    print("Month with Lowest Amount =", monthList[lIndex], "(",mLow,")")
     
main()