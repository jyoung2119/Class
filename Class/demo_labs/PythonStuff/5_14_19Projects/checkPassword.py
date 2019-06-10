#Password validation
import re

def main():
    userInput = input("Enter a Password: ")
    checkPass(userInput)

def checkPass(userInput):
    digitCount = 0

    for i in range(len(userInput)):
        if userInput[i].isdigit() == True:
            digitCount += 1

    #At least 8 characters, at least 2 numbers, no other special characters
    if len(userInput) < 8 or digitCount < 2 or userInput.isalnum() == False:
        print("Invalid Password")
    else:
       print("Valid Password")

main()