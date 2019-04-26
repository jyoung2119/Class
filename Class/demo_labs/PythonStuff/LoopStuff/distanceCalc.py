#Distance Calculator

def main():
    speed = int(input("What is the speed of the vehicle in mph? "))
    time = int(input("How many hours has it traveled? "))

    print("Hour\t\tDistance Traveled")
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    for i in range(1,time+1):
        dist = speed * i
        print(i, "\t\t      ", dist)

main()
