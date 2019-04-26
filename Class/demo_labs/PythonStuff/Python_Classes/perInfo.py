#Personal Info Class

class PersonalInfo:
    def __init__(self, name, address, age, phoneNum):
        self.__name = name
        self.__address = address
        self.__age = age
        self.__phoneNum = phoneNum
    
    def name_stuff(self, name):
        self.__name = name

    def address_stuff(self, address):
        self.__address = address

    def age_stuff(self, age):
        self.__age = age
    
    def phone_num(self, phoneNum):
        self.__phoneNum = phoneNum

    def get_name(self):
        return self.__name
    
    def get_address(self):
        return self.__address
    
    def get_age(self):
        return self.__age

    def get_phone(self):
        return self.__phoneNum

def main():
    myInfo = PersonalInfo("Jared", "1234 Street St.", "22", "456-7890")
    fInfo = PersonalInfo("Butler", "1234 Street Dr.", "21", "789-4561")
    f2Info = PersonalInfo("Ogden", "1234 Street Blvd.", "22", "456-1234")

    print(fInfo.get_address())
    print(myInfo.get_name())
    print(f2Info.get_phone())

main()