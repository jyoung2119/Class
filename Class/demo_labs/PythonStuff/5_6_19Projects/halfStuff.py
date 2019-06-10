#Function Practice

def main():
    userInput = float(input("Enter a number to cut in half: "))
    result = half(userInput)
    print("Result = ", result)

def half(number):
    return number / 2

main()