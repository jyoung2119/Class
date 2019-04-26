#Times Ten(function practice)

def main():
    num = float(input("Enter a number: "))
    times_ten(num)

def times_ten(userInput):
    product = userInput * 10
    print("Output = ", product)
    show_value(12)

def show_value(quantity):
    print(quantity)

main()
