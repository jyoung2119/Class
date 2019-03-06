/*
    Author: Jared Young
    Date: 07 FEB 2019
    Project: Performance Lab 7A
    Description: Initialize a char array to zero.
                 Safely store a user-input string in the char array.
                 Safely print the string IF the following conditions are both true:
                    The first element greater than or equal to decimal value 32.
                    The first element is less than decimal value 126.
*/
#include <stdio.h>

int main(void)
{
    char inputArray[256] = {0};
    printf("Input a string: ");
    //Safely scans user input and prevents new line.
    scanf("%255[^\n]c", inputArray);

    //Prints input if first element in the array is an ascii value >= 32 and less than 126.
    //Prevents nonprintable ASCII characters.
    if((inputArray[0] >= 32) && (inputArray[0] < 126))
    {
        printf("Your string is: %s\n", inputArray);
    }
    else
    {
        printf("Try Again:\n");
    }
}