#Pet Class

class Pet:
    def __init__(self, name, animal_type, age):
        self.__name = name
        self.__animal_type = animal_type
        self.__age = age

    def set_name(self, name):
        self.__name = name

    def set_animal_type(self, animal_type):
        self.__animal_type = animal_type

    def set_age(self, age):
        self.__age = age

    def get_name(self):
        return self.__name

    def get_type(self):
        return self.__animal_type

    def get_age(self):
        return self.__age

def main():
    lilHomie = Pet(input("Enter Dog's Name: "), input("Enter Pet Type: "), int(input("Enter Pet's Age: ")))
    print()
    print("Pet's Name: ", lilHomie.get_name())
    print("Pet Type: ", lilHomie.get_type())
    print("Pet's Age: ", lilHomie.get_age())

main()