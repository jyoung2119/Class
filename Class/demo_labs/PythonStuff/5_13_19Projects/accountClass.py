class Account:
    # Construct an Account object 
    def __init__(self, id, balance = 100, annualInterestRate = 0):
        self.__id = id
        self.__balance = balance
        self.__annualInterestRate = annualInterestRate

    def getId(self):
        return self.__id

    def getBalance(self):
        return self.__balance

    def getAnnualInterestRate(self):
        return self.__annualInterestRate

    def getMonthlyInterestRate(self):
        return self.__annualInterestRate / 12

    def setPreviousPrice(self, previousPrice):
        self.previousPrice = previousPrice

    def setCurrentPrice(self, currentPrice):
        self.currentPrice = currentPrice

    def withdraw(self, amount):
        self.__balance -= amount

    def deposit(self, amount):
        self.__balance += amount

    def getMonthlyInterest(self):
        return self.__balance * self.getMonthlyInterestRate()

def main():
    idList = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    accountList = [Account(0, 100, 4.5), Account(1, 100, 4.5), Account(2, 100, 4.5), Account(3, 100, 4.5), Account(4, 100, 4.5), Account(5, 100, 4.5), Account(6, 100, 4.5), Account(7, 100, 4.5), Account(8, 100, 4.5), Account(9, 100, 4.5)]
    loopChoice = 1

    while loopChoice == 1:
        try:
            idInput = int(input("Enter an ID: "))
        except ValueError:
            print("(ノಠ益ಠ)ノ彡┻━┻")
        else:
            if idInput in idList:
                break
            else:
                print("You Suck")
    
    while loopChoice == 1:
        print("Choose an Option:")
        print("[1] View Current Balance")
        print("[2] Withdraw Money")
        print("[3] Deposit Money")
        print("[4] Exit Menu")
        menuChoice = input("Choice: ")
        if menuChoice == "1":
            print("Balance is $", format(accountList[idInput].getBalance(), '.2f'))
        elif menuChoice == "2":
            try:
                withdrawNum = int(input("Enter Amount to Withdraw: "))
            except ValueError:
                print("(ノಠ益ಠ)ノ彡┻━┻")
            else:
                if withdrawNum > accountList[idInput].getBalance():
                    print("Insufficient Funds Broke Boi!")
                else:
                    accountList[idInput].withdraw(withdrawNum)
        elif menuChoice == "3":
            try:
                depositNum = int(input("Enter Amount to Deposit: "))
            except ValueError:
                print("(ノಠ益ಠ)ノ彡┻━┻")
            else:
                accountList[idInput].deposit(depositNum)
        elif menuChoice == "4":
            break
        else:
            print("BRUH")
  
          
main()
