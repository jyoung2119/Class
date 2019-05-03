#Each line of the file gives the name of a country, the name of its currency, and the number of units of the currency that were equal to one American dollar (called theexchange rate4). 
#For instance, one American dollar is equal to 591.4077 Chilean pesos. 
#Use the text fileExchrate.txt
#Write a program that requests the name of a county as input and then displays the nameof its currency and its exchange rate.

def main():
    country = input("Enter the name of a country: ").capitalize()

    try:
        fileStuff = open("Exchrate.txt", 'r')

        for line in fileStuff:
            currentLine = line.split(",")
            if currentLine[0] == country:
                currency = currentLine[1]
                exRate = currentLine[2]
                break

    finally:
        fileStuff.close()
    
    print("Currency: ", currency)
    print("Exchange Rate: ", exRate)

main()