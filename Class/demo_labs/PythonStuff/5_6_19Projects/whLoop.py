#While Loop practice

def main():
    product = 0
    while product < 100:
        userInput = int(input("Enter a number: "))
        product = userInput * 10
        print("Answer = ", product)

main()