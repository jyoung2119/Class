#File manipulation

def main():
    inFile = "fourScore.txt"
    outFile = "f0urSc0r3.txt"
    leet_speak(inFile, outFile)

def leet_speak(inFile, outFile):    
    inFileStuff = open(inFile, 'r')
    inFileText = inFileStuff.read()
    
    iList = list(inFileText) 

    for i in range(len(iList)):
        if iList[i] == 'o':
            iList[i] = '0'
        elif iList[i] == 'l':
            iList[i] = '1'
        elif iList[i] == 'e':
            iList[i] = '3'
        elif iList[i] == 'a':
            iList[i] = '4'
        elif iList[i] == 't':
            iList[i] = '7'
        elif iList[i] == 's' and (iList[i+1] == '\n' or iList[i+1] == ' '):
            iList[i] = 'Z'
        
    str1 = ''.join(iList)   
    iwList = list(str1.split())
    
    #print(str1)

    for x in range(len(iwList)):
        iwList[x] = "(" + iwList[x] + ")"

    str2 = ''.join(iwList)
    
    print(str2)

    #for k in range(len(iwList)):

    
    inFileStuff.close()

main()