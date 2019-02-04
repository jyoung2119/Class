/*
    Author: Jared Young
    Date: 04 FEB 2019
    Project: Performance Lab 4C
    Description: Read a string from stdin into a char array of dimension 10.
                 Use fgets() and fputs() to display the string.
*/
#include <stdio.h>

int main()
{
    char inputArray[10];
    printf("Enter a string: ");
    fgets(inputArray, sizeof(inputArray), stdin);
    printf("Your input is: ");
    fputs(inputArray, stdout);
}