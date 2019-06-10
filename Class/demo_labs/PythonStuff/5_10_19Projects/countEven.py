#Count Even Digits

def main():
    try:
        firstInt = int(input("Enter first number: "))
    except ValueError:
        print("You Suck")
    else:
        intLen = len(str(firstInt))
        result = count_even_digits(firstInt, intLen)
        print("There were", result, "even digits in", firstInt)

def count_even_digits(firstInt, intLen):
    evenCount = 0
    intString = str(firstInt)
    for i in range(0, intLen):

        if int(intString[i]) % 2 == 0:
            evenCount += 1
    
    return evenCount

main()