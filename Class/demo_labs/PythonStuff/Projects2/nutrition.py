#Nutrition

def main():
    fGrams = float(input("Enter grams of fat: "))
    cGrams = float(input("Enter grams of carbs: "))
    fat_Cal(fGrams)
    carb_Cal(cGrams)

def fat_Cal(fGrams):
    fCal = fGrams * 9
    print("Calories from fat = ", fCal)

def carb_Cal(cGrams):
    cCal = cGrams * 4
    print("Calories from carbs = ", cCal)

main()
