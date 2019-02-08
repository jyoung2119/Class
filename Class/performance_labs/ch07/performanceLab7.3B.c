/*
    Author: Jared Young
    Date: 08 FEB 2019
    Project: Performance Lab 7.3B
    Description: Initialize a NUL terminated char array with multiple phrases separated by newlines (\n).
                 Test the char array with puts().
                 Write a WHILE loop that only prints the first line AND stops at a NUL character
*/
#include <stdio.h>

int main()
{   
    //Keeps track of index in the array.
    int counter = 0;
    char myArray[] = "Get\nRekt\nScrub\0";
    //Tests the array
    printf("The string was:\n");
    puts(myArray);

    printf("First phrase before a new line is: ");
    //Runs until the NULL terminator is reached in the array.
    while(myArray[counter] != '\0')
    {   
        //Prints the character at the specified index in the array.
        printf("%c", myArray[counter]);
        //Breaks out of loop once a new line character is reached.
        if(myArray[counter] == '\n')
        {
            break;          
        }
        //Increments array index counter.
        counter++;       
    }

    return 0;
}