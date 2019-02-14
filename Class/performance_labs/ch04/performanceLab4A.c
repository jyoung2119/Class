/*
    Author: Jared Young
    Date: 04 FEB 2019
    Project: Performance Lab 4A
    Description: Input a single character and then print the next sequential character.
*/

#include <stdio.h>

int main()
{
    int userInput = 0;
    printf("Input character: ");

    //Stores the single character's ascii value as an interger.
    userInput = getchar();
    printf("The sequential character is: ");
    
    //Adds 1 to the ascii value of the original character and prints it.
    putchar(userInput + 1);
    printf("\n");
    return 0;
}