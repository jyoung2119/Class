#Ch8 Lab 8A

'''#include <stdio.h>
#include <string.h>
#define ERR_NULL_POINTER -1		                // Error:  Pointer passed was NULL
#define ERR_NONE_FOUND 0		                // Error:  Character not found
#define ERR_FIND_EQUALS_REPLACE -2              // Error:  To replace and replace are equal to each other
#define ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable

int replace_character(char * string, const char findThisChar, const char replaceItWithThis);
int clearInput();

int main(void)
{
    char inputArray[256] = {0};
    char * beforeStringAray[] = {inputArray};

    char userInput = 0;
    char replaceChar = 0;
    int tempResults = 0;

    printf("Input a string: ");
    fscanf(stdin, "%255[^\n]c", inputArray);
    clearInput();
    printf("Input the characters you want to swap separated by a tab: ");
    fscanf(stdin, "%c  %c", &userInput, &replaceChar);

    //Passes pointer, the character to be changed, and the new character.
    tempResults = replace_character(*beforeStringAray, userInput, replaceChar);

    //Runs if a change occured.
    if(tempResults > 0)
    {
        printf("\n\n\nThe new string is: \n");
        printf("%s\n", beforeStringAray[0]);
        printf("There were %d instances of %c replaced with %c.\n", tempResults, userInput, replaceChar);
    }
    //Error handling
    else if(tempResults == ERR_NULL_POINTER)
    {
        printf("The string was empty.\n");
    }
    else if(tempResults == ERR_FIND_EQUALS_REPLACE)
    {
        printf("The character to replace was the same as the replacement character.\n");
    }
    else if(tempResults == ERR_NONE_FOUND)
    {
        printf("There were no instances of that character.\n");
    }
    else if(tempResults == ERR_NON_PRINTABLE_CHARACTER)
    {
        printf("One of the characters entenerd were not printable.\n");
    }
    
    return 0;
}
//Function that handles the character switching.
int replace_character(char * string, char findThisChar, char replaceItWithThis)
{
    int instanceCounter = 0; //Counts number of changes
    int indexCounter = 0; //Counts number of indexes in the string

    //Error handling
    if(string == NULL)
    {
        return ERR_NULL_POINTER;
    }
    else if(findThisChar == replaceItWithThis)
    {
        return ERR_FIND_EQUALS_REPLACE;
    }
    else if(findThisChar <= 32 || findThisChar > 126 )
    {
        return ERR_NON_PRINTABLE_CHARACTER;
    }
    //Loops for the length of the string
    for(int i = 0; i < strlen(string); i++)
    {
        //Replaces user input with the desired replacement character
        //if this point in the string matches user input.
        if(string[i] == findThisChar)
        {
            string[i] = replaceItWithThis;
            //Increments number of changes
            instanceCounter++;
        }
        //Counts characters in string
        indexCounter++;
    }
    //If no characters in the string, return an error.
    if(indexCounter == 0)
    {
        return ERR_NONE_FOUND;
    }
    //Return number of changes
    return(instanceCounter);
}

int clearInput()
{
    while (getchar() != '\n');
}'''

def main():
    userString = input("Enter a String: ")
    char1, char2 = input("Enter the characters you want to swap(x, y): ").split(", ")
    result = replace_char(userString, char1, char2)
    print("There were", result,"instances of", char1, "replaced with", char2)

def replace_char(userString, char1, char2):
    if not userString:
        print("REEE")
    elif char1 not in userString or char2 not in userString:
        print("REEE")
    else: 
        print(userString.replace(char1, char2))
        count = userString.count(char1)
    return count
main()
