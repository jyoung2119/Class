#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letterClassification(char *input);

int main()
{
    //Declare and initialize array
    char userInput[256] = {0};
    //Ask for user input
    printf("Enter a string: ");
    //Store user input
    fgets(userInput, sizeof(userInput), stdin);
    char *pos = strchr(userInput, '\n');           
    if(pos) *pos = 0; 

    //Pass array to count function
    letterClassification(userInput);
}

//Receive string as a pointer
void letterClassification(char *input)
{
    //Declare counter variables
    int vowelCount = 0;
    int conCount = 0;

    //Loop through user input
    for(int i = 0; i < strlen(input); i++)
    {
        //Set every character to lowercase to ensure correct counting
        input[i] = tolower(input[i]);
        //If current character = vowel, increment vowel counter
        if(input[i] == 'a'||input[i] == 'e'||input[i] == 'i'||input[i] == 'o'||input[i] == 'u')
        {
            vowelCount++;
        }
        //Else if character is not a space, increment consonant counter
        else if(input[i] != ' ')
        {       
            conCount++;
        }
    }    
    //Print number of vowels and consonants
    printf("Vowel Count: %d", vowelCount);
    printf("\nConsonant Count: %d\n", conCount);
}