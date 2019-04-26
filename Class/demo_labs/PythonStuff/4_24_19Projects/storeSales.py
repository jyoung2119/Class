#Store Sales using list

def main():
    tSales = 0
    temp = 0
    sList = []
    dayList = ['Sun', 'Mon', 'Tues', 'Wed', 'Thurs', 'Fri', 'Sat']
    for i in range(7):
        print("Enter sales for", dayList[i], ": ", end="")
        temp = float(input(""))
        tSales += temp
        sList.append(temp)
    
    print("Total Sales for the Week = $", format(tSales, '.2f'))

main()