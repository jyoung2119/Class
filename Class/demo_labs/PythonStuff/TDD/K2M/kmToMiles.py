#TDD for distance conversion

def main():
    try:
        userInput = float(input("Enter km to convert: "))
    except ValueError:
        print("Boi...")      
    else:
        conDist(userInput)

def conDist(userInput):
    result = userInput * 0.62137
    print(result)
    return result

main()