#Ch4 Lab4C
'''#include <stdio.h>

int main()
{
    //Initialize a 10 dimension array.
    char inputArray[10];
    printf("Enter a string: ");

    //Stores user input into the array based off of number of bytes.
    fgets(inputArray, sizeof(inputArray), stdin);
    printf("Your input is: ");
    //Prints the contents of the array as output.
    fputs(inputArray, stdout);
}'''

def main():

    userInput = input("Enter a string: ")
    print(userInput[:10])

main()