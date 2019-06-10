#Anagram Checker

def main():
    str1 = input("Enter First Word: ")
    str2 = input("Enter Second Word: ")
    isAnagram(str1, str2)

def isAnagram(s1, s2):
    #sort strings by character in alphabetical order and convert them to lists
    list1 = sorted(list(s1))
    list2 = sorted(list(s2))
    
    if list1 == list2:
        print(s1, "and", s2, "are anagrams")
    else:
        print(s1, "and", s2, "are not anagrams")

main()