#Palindrome Int

def main():
    number = int(input("Enter an integer: "))
    revNum = reverse(number)
    print("Reverse = ", revNum)
    
def reverse(number):
    rNum = int(str(number)[::-1])
    result = isPalindrome(rNum)
    print("Is Palindrome?: ", result)
        
    return rNum

def isPalindrome(number):
    if number == int(str(number)[::-1]):
        return True
    else:
        return False

main()
