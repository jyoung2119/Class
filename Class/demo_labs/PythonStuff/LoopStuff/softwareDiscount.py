#Software Discount

def main():
    cost = 99
    packageNum = int(input("Enter Number of Packages Purchased: "))
    if packageNum >= 10 and packageNum <= 19:
        discount = (packageNum * cost) * 0.20
    elif packageNum >= 20 and packageNum <= 49:
        discount = (packageNum * cost) * 0.30
    elif packageNum >= 50 and packageNum <= 99:
        discount = (packageNum * cost) * 0.40
    elif packageNum >= 100:
        discount = (packageNum * cost) * 0.50
    else:
        discount = 0
    total = packageNum * cost - discount
    print("Discount = $", format(discount, '.2f'))
    print("Final Total = $", format(total, '.2f'))
main()
