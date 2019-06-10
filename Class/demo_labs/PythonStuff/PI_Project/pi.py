from timeit import default_timer as timer
try:
    # import version included with old SymPy
    from sympy.mpmath import mp
except ImportError:
    # import newer version
    from mpmath import mp

def main():
    try:   
        mp.dps = int(input("Enter the number of decimals to calculate to: "))  # set number of digits
    except ValueError:
        print("You Suck")
    else:
        piDate = input("Enter the day to find(MMDDYY): ")

        start = timer()

        piStuff(piDate)

        end = timer()
        print("Execution took ", end - start, "seconds.")

def piStuff(piDate):
    print("hi")
    fileStuff = open("outPi.txt", 'w')

    stringPi = str(mp.pi)
    indexFound = stringPi.find(piDate)

    if indexFound == -1:
        print("Pi Day Not Found Within Specified Digits...")
    else:
        endIndex = indexFound + 6

        piOut = stringPi[:indexFound] + "***" + stringPi[indexFound:endIndex] + "***" + stringPi[endIndex:endIndex+1000]

        fileStuff.write(piOut)
        print("Pi Day found at digit", indexFound)

    fileStuff.close()

main()