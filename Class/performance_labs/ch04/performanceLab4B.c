/*
    Author: Jared Young
    Date: 04 FEB 2019
    Project: Performance Lab 4B
    Description: Input a single character and then print the previous sequential character.
*/
#include <stdio.h>

int main()
{
    int userInput = 0;
    printf("Input something scrub: ");
    userInput = getc(stdin);
    printf("The prior character is: ");
    putc(userInput - 1, stdout);
    printf("\n");
    return 0;
}