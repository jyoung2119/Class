#Miles Conversion

def main():
    km = float(input("Enter Distance in kilometers: "))
    convert(km)
    
def convert(km):
    miles = km * 0.6214
    print("Miles = ", format(miles, '.2f'))

main()
