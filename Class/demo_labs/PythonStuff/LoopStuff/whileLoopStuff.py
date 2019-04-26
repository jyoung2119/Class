#While Loop

def main():
    product = 0
    while product < 100:
        product = float(input("Enter a Number: ")) * 10
        print("Output = ", format(product, '.2f'))

    choice = 1;
    while choice == 1:
        x, y = input("Enter Two Numbers(x, y): ").split(", ")
        x, y = [float(x), float(y)]
        sumNum = x + y
        print("SUM = ", sumNum)
        choice = int(input("Enter 1 to Loop Again: "))

    for i in range(101):
        if i == 100:
            print(i*10)
        else:
            print(i*10, end = ', ')
        
main()
