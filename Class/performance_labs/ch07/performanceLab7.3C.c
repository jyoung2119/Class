/*
    Author: Jared Young
    Date: 09 FEB 2019
    Project: Performance Lab 7.3C
    Description: Initialize a 26 element int array to 0.
                 Initialize a char variable to 0.
                 Use a DO-WHILE loop to input, but not store, a string one character at a time from stdin without scanf()!!
                 Each time a character is entered:
                    convert the character to upper case using toupper()
                    increment the corresponding array element if the user input is a letter
                    Ensure non-letters (i.e. Ctrl-D, tab) are safely handled
                 End the loop when a newline is read.
                 Print the results using a for loop ()
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    int myArray[26] = {0};
    char charVariable = 0;
    int indexCounter = 0;

    printf("Input a string: ");
    //Runs until user hits enter.
    do
    {
        //stores user input
        charVariable = getc(stdin);
        //Error handling to prevent non-letter characters.
        if((charVariable >= 0 && charVariable < 65) || charVariable > 122)
        {
            break;
        }
        else        
        {
            //Stores acceptable input and capitalizes each character.
            myArray[indexCounter] = toupper(charVariable);
            //Moves to next index in array.
            indexCounter++;
        }
    }while(charVariable != '\n');

    //Prints out each index of the array separately.
    for(int i = 0; i < indexCounter; i++)
    {
        printf("%c", myArray[i]);
    }

    return 0;
}