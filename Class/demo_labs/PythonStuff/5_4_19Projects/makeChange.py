# Make ChangeWrite a program to make change for an amount of money from 0 through 99 cents input by the user. 
# The output of the program should show the number of coins from each denomination used to make the change.

def main():
    qValue = 25
    dValue = 10
    nValue = 5
    pValue = 1
    userChoice = 1

    while userChoice == 1:
        
        userInput = int(input("Enter amount of change(0-99): "))
        
        if userInput > 99 or userInput < 0:
            print("Why do you suck?")
            continue
    
        quarters = int(userInput / qValue)
        holder = userInput - (quarters * qValue)
        dimes = int(holder / dValue)
        holder = holder - (dimes * dValue)
        nickels = int(holder / nValue)
        holder = holder - (nickels * nValue)
        cents = int(holder / pValue)

        print("Quarters: ", quarters, "\tDimes: ", dimes)
        print("Nickels: ", nickels, "\tCents: ", cents)
        userChoice = int(input("Enter 1 For More Change: "))

main()