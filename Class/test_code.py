import os
from test_module import ERROR_NOT_FOUND, ERROR_INVALID

# STUDENT SECTION

#Given a directory, traverse through all sub-directories and build a dictionary with the directory as the key and a list
#of the .txt files as the value
def FileDict(dir):
    fileDict = {}
    #Loop through directory
    for root, _, files in os.walk(dir):
        #Store .txt files
        txts = [f for f in files if f.endswith(".txt")]
        #Throw them into dictionary based of place in directory
        fileDict[root] = txts
    return fileDict

#Given a string, find all occurrences of badLtr and replace them with goodLtr. If you cannot find any
#of badLtr, return ERROR_NOT_FOUND. If an invalid string is passed in, return ERROR_INVALID
def ChangeLetter(inputStr, badLtr, goodLtr):
    outputStr = ""
    
    if not inputStr:
        return ERROR_INVALID
    elif badLtr not in inputStr:
        return ERROR_NOT_FOUND
    else:
        outputStr = inputStr.replace(badLtr, goodLtr)

    return outputStr

#Given a string and a word, find the word in the sentence and reverse it. Return the corrected string if the word is
#found, or ERROR_NOT_FOUND if the word is not in the string, or ERROR_INVALID if a parameter is invalid
def ReverseWord(inputStr, revWord):
    outputStr = ''

    if not inputStr or not revWord:
        return ERROR_INVALID
    elif revWord not in inputStr:
        return ERROR_NOT_FOUND
    else:
        # loc = inputStr.find(revWord)
        # for letter in 
        newWord = revWord[::-1]
        outputStr = inputStr.replace(revWord, newWord)

    return outputStr

#Given a string and a key, XOR each letter with the key and return the string. If a parameter is invalid, return
#ERROR_INVALID
def ObfuscateString(inputStr, key):
    outputStr = ''
    i = 0
    if not inputStr or not key:
        return ERROR_INVALID
    else:
        for letter in inputStr:
            result = ord(letter) ^ key
            outputStr = outputStr + chr(result)
            i = i + 1

    return outputStr

#Given two strings, combine them and return the total string. If a parameter is invalid, return ERROR_INVALID
def CombineStrings(string1, string2):
    outputStr = ''

    if not string1 or not string2:
        return ERROR_INVALID
    else:
        outputStr = string1 + string2

    return outputStr

#Given a string, insert the given word behind the target word. For instance, if given the sentence "insert the here",
#with the word to be inserted as "word" and the target as "the", the final string should be "insert the word here".
#If any parameter is invalid, return ERROR_INVALID
def InsertWord(inputStr, word, target):
    outputStr = ''
   
    if not inputStr or not word or not target:
        return ERROR_INVALID
    # elif target not in inputStr:
    #     return ERROR_NOT_FOUND
    else:
        index = inputStr.find(target) + len(target)
        outputStr = inputStr[:index] + word + inputStr[index:]
    return outputStr

#Given a string and a word, delete the word from the string and return the modified string. If the target word cannot
#be found, return ERROR_NOT_FOUND.
def DeleteWord(inputStr, word):
    outputStr = ''

    if word not in inputStr:
        return ERROR_NOT_FOUND
    else:
        outputStr = inputStr.replace(word, '')

    return outputStr