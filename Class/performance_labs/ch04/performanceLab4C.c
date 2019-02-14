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
    //Initialize a 10 dimension array.
    char inputArray[10];
    printf("Enter a string: ");

    //Stores user input into the array based off of number of bytes.
    fgets(inputArray, sizeof(inputArray), stdin);
    printf("Your input is: ");
    //Prints the contents of the array as output.
    fputs(inputArray, stdout);
}