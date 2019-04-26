#Tax Report

def main():
    tSales = float(input("Enter Total Sales for the Month: "))
    cRate = county(tSales)
    sRate = state(tSales)
    total_tax(cRate, sRate)
    
def county(tSales):
    cRate = tSales * 0.02
    print("Amount of County Sales Tax = $", format(cRate, '.2f'))
    return cRate

def state(tSales):
    sRate = tSales * 0.04
    print("Amount of State Sales Tax = $", format(sRate, '.2f'))
    return sRate
    
def total_tax(cRate, sRate):
    total = cRate + sRate
    print("Total Sales Tax = $", format(total, '.2f'))

main()
