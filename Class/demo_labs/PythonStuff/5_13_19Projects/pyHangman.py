#Terminal Hangman
import random

def main():
    word = wordPicker()
    loopCon = 1
    guessList = []
    userInput = ""
    cGuess = 0
    misses = 0

    for i in range(len(word)):
        guessList.append("*")

    while loopCon == 1:
        str1 = ''.join(guessList)    
        print("(Guess) Enter a letter in word", str1, end = " ")
        try:
            userInput = input("> ")[0]
        except IndexError:
            print("(ノಠ益ಠ)ノ彡┻━┻")
            break
        else:
            if userInput in word:
                for k in range(len(word)):
                    if userInput == word[k]:
                        if userInput in str1:
                            print(userInput, "is already in the word")
                            break
                        guessList[k] = userInput
                        cGuess += 1

            else:
                print(userInput + " is not in the word")       
                misses += 1

            if cGuess == len(word):
                print("The word is " + word + ". You missed " + str(misses) + " time(s)")
                userChoice = input("Do you want to guess another word? Enter y or n > ")
                if userChoice != "n" and userChoice != "y":
                    print("(ノಠ益ಠ)ノ彡┻━┻")
                    break
                elif userChoice == "n":
                    print("GAME OVER")
                    break
                elif userChoice == "y":
                    word = wordPicker()
                    guessList = []
                    cGuess = 0
                    misses = 0
                    for i in range(len(word)):
                        guessList.append("*")
    
def wordPicker():
    wordList = ["sidewalk", "rigid", "brush", "laugh", "ablaze", "permissible", "good", "pickle", "branch", "stop"]
    listIndex = random.randint(0,9)
    return wordList[listIndex]

main()