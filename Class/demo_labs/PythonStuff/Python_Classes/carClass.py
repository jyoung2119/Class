#Class practice using car info

class Car:
    def __init__(self, year, make):
       self.__year_model = year
       self.__make = make
       self.__speed = 0 
    
    def accelerate(self):
        self.__speed += 5
        return self.__speed
    
    def brake(self):
        self.__speed -= 5
        return self.__speed
    
    def get_speed(self):
        return self.__speed

def main():
    myCar = Car(int(input("Enter Model Year: ")), input("Enter the Make: "))
    
    for i in range(5):
        Car.accelerate(myCar)
        print("Speed after accelerate", i+1, "=", Car.get_speed(myCar))
    print()
    for i in range(5):
        Car.brake(myCar)
        print("Speed after break", i+1, "=", Car.get_speed(myCar))

main()