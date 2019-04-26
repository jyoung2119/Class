#Hangman

def main():
    word = ['P', 'Y', 'T', 'H', 'O', 'N']
    body = ['Head', 'Body', 'Arm 1', 'Arm 2', "Leg 1", "Leg 2"]
    cGuess = 0
    guesses = []
    guessNum = 6
    fail = 0

    while guessNum > 0:
        temp = str(input("Enter a letter(caps): "))
        guesses.append(temp)
        if temp in word:
            if word.count(temp) > 1:
                cGuess += (word.count(temp) - 1)
            cGuess += 1
            print(temp, "found in word")
        else:
            print(temp, "not found in word")
            guessNum -= 1
            print(body[fail], "added.")
            fail += 1            
            print(guessNum, "guesses remaining")

        if cGuess == len(word):
            print("You Win!")
            print("Word was", word)
            print("Your guesses were", guesses)
            break

    if guessNum == 0:   
        print("Out of Chances!")
        print("Word was", word)
        print("Your guesses were", guesses)
            
main()