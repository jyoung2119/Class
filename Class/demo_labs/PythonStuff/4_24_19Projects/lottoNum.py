#Lotto Number Generator
import random

def main():
    lottoList = []
    for rNum in range(7):
        rNum = random.randint(0,10)
        lottoList.append(rNum)
    print("Random Lotto Number = ")
    for count in range(len(lottoList)):
        print(lottoList[count], end = "")
main()