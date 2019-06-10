#TDD practice with geometry

def main():
    userBase = float(input("Enter a base length: "))
    userHeight = float(input("Enter height value: "))
    calculation(userBase, userHeight)

def calculation(base, height):
    area = (base * height) / 2
    print(area)
    return area

main()