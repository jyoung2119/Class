#Reverse Interger

def main():
    reverse(number = int(input("Enter an integer: ")))

def reverse(number):
    print("Reverse = ", int(str(number)[::-1]))

main()
