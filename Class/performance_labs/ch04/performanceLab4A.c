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
    userInput = getchar();
    printf("The sequential character is: ");
    putchar(userInput + 1);
    printf("\n");
    return 0;
}