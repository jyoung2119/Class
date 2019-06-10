#Pizza Class
import os
import random

class Pizza:
    def __init__(self, size, crust, toppings):
        self.__size = size
        self.__crust = crust
        self.__toppings = toppings

    def set_size(self, size):
        self.__size = size
    
    def getSize(self):
        return self.__size 

    def set_crust(self, crust):
        self._crust = crust

    def getCrust(self):
        return self.__crust

    def set_toppings(self, toppings):
        self.__toppings = toppings
    
    def getToppings(self):
        return self.__toppings

def main():
    pizzaCount = 0
    pizzaList = []
    while True:
        choice = int(input("1)New pizza\n2)View existing pizzas\n3)Order and quit\n>"))
        if choice == 1:
            pizzaList = newPizza(pizzaCount, pizzaList)
            pizzaCount += 1
        elif choice == 2:
            viewPizzaBoi(pizzaList)
        elif choice == 3:
            aboutPage()
            return False
        else:
            print("Incorrect input!")


def newPizza(pizzaCount, pizzaList):
    pizzaSize = Sizzea()
    pizzaCrust = crustFunc()
    toppers = toppings()
    pizzaBoi = Pizza(pizzaSize, pizzaCrust, toppers)

    pizzaList.append(pizzaBoi)
    return pizzaList

def viewPizzaBoi(pizzaList):
    for i in range(len(pizzaList)):
        print("Pizza #", i+1, ":", pizzaList[i].getSize(), "pizza with", pizzaList[i].getCrust(), "crust topped with", pizzaList[i].getToppings())


def Sizzea():
    choice = 0
    loop = 1
    insult = ''

    print("\n[WARNING]\n[VIEWER DISCRETION IS ADVISED]")

    while loop != 0:
        print("\n-------------------")
        print(" [ITS PIZZA TIME]")
        print("-------------------")
        print("[1] - Personal:  8\"")
        print("[2] - Small   : 10\"")
        print("[3] - Medium  : 12\"")
        print("[4] - Large   : 14\"")
        print("[5] - X-Large : 16\"")
        print("[6] - MURICA  : 24\"")
        print("-------------------")

        choice = input("Select your desired size: ")

        if choice == '1':
            Spicy_Sizzea = ' 8\"'
            loop = 0
        elif choice == '2':
            Spicy_Sizzea = '10\"'
            loop = 0
        elif choice == '3':
            Spicy_Sizzea = '12\"'
            loop = 0
        elif choice == '4':
            Spicy_Sizzea = '14\"'
            loop = 0
        elif choice == '5':
            Spicy_Sizzea = '16\"'
            loop = 0
        elif choice == '6':
            Spicy_Sizzea = '24\"'
            loop = 0
        else:
            print("\nPlease pick an option from the list...")
            insult = RareInsults()
            print("You",insult)
    return Spicy_Sizzea


def crustFunc(): #defines function

    crustyString = "0" #declares value of char at an address, lets you input a string as a linked list so no array necessary
    choice = 0

    while(crustyString == "0"):
        choice = int(input("Which crust would you like? Choose\n 1- Thick\n 2- Hand-tossed\n 3- Thin\n 4- Cheese-stuffed\n 5- Deep-dish\n"))
            #scans in a string, stores in choice

        if choice < 1 or choice > 5: #compares to ascii value
            
            print("ERROR: Enter a number from 1-5\n")
        else:
                #Stores crust type
            if choice == 1:
                crustyString = "Thick"
            elif choice == 2: 
                crustyString = "Hand-Tossed"           
            elif choice == 3: 
                crustyString = "Thin"           
            elif choice == 4:
                crustyString = "Cheese-Stuffed"            
            elif choice == 5:
                crustyString = "Deep Dish"

    return crustyString    #returns value at address of crustyString


def toppings():
    toppers=[]
    while True:
        #os.system('clear')
        print("----------------------------------------------------------------")
        print("Current toppings:",toppers)
        print("----------------------------------------------------------------")
        print("                          |TOPPINGS|                            ")
        print("----------------------------------------------------------------")
        print("|Sausage  |Pepperoni    |Bacon         |Ham      |Onions|       ")
        print("|Mushrooms|Green Peppers|Banana Peppers|Pineapple|              ")
        print("----------------------------------------------------------------")
        print("Type the topping you want. Type done when done")
        choice = str(input(">"))
        choice = choice.lower()
        if choice == 'sausage':
            toppers.append('sausage')
        elif choice == 'pepperoni':
            toppers.append('pepperoni')
        elif choice == 'bacon':
            toppers.append('bacon')
        elif choice == 'ham':
            toppers.append('ham')
        elif choice == 'onions':
            toppers.append('onions')
        elif choice == 'mushrooms':
            toppers.append('mushrooms')
        elif choice == 'green peppers':
            toppers.append('green peppers')
        elif choice == 'banana peppers':
            toppers.append('banana peppers')
        elif choice == 'pineapple':
            toppers.append('pineapple')
        elif choice == 'done':
            break

    strToppings = ', '.join(toppers)

    return strToppings

def RareInsults():
    InsultList = ['doorknob', 'pineapple', 'coconut', 'walnut', 'clown', 'snollygoster', 'pillock', 'lickspittle', 'smellfungus', 'ninny',
    'milksop', 'hipster', 'sausage party', 'hircismus', 'shmeet', 'wandought', 'yaldson', 'shot-clog', 'rakefire', 'lubberwort', 'plonker',
    'billy-no-mates', 'minger', 'bimbo', 'donkey', 'fruitcake', 'twit', 'numpty', 'beetroot', 'hackit', 'howlin']
    index = random.randint(0, (len(InsultList) - 1))
    Insult = InsultList[index]
    return Insult


def aboutPage():
    aboutFile = open("aboutStuff.txt", 'r')
    fileText = aboutFile.read()
    print(fileText)
    aboutFile.close()

main()