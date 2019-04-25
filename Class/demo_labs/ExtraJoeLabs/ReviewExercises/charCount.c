#include <stdio.h>
#include <string.h>

//Function prototype
void countChar(char *string, char c);

int main()
{
    //Declare and initialize variables
    char userInput[256] = {0};
    char searchChar;
    
    //Ask for user input
    printf("Enter a string: ");
    //Scan for input
    fgets(userInput, sizeof(userInput), stdin);
    char *pos = strchr(userInput, '\n');           
    if(pos) *pos = 0; 

    //Ask and scan for search character
    printf("Enter search character: ");
    if(!scanf("%c", &searchChar))
    {
        printf("Try Again\n");
    }
    else
    {
        //Pass string and character to count function
        countChar(userInput, searchChar);
    }
}

void countChar(char *string, char c)
{
    //Declare and initialize counter variable
    int counter = 0;
    //Char pointer to first index of string
    char *ptrChar = string;

    //While pointer is NOT NULL(characters still in string)
    while(ptrChar)
    {
        //Set pointer to location of character
        ptrChar = strchr(ptrChar, c);
        //If character is found
        if(ptrChar)
        {
            //Move to next character
            ptrChar++;
            //Increment counter
            counter++;
        }
    }
    //Print amount of occurences
    printf("%c appears %d times in %s\n", c, counter, string);
}