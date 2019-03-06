/*
    Author: Jared Young
    Date:30 JAN 2019
    Program Name: Performance Lab 3B
    Description: Declare and zeroize a char array with a dimension of 256
                 Assign your chosen pharse to the leading elements of that array
                 Explicitly verify your string is nul-terminated
                 Print your string
*/

#include <stdio.h>

int main()
{
    //Declare and zeroize a char array.
    char chosenPhrase[256] = {0};

    //Stores ascii values in the array.
    chosenPhrase[0] = 85;
    chosenPhrase[1] = 82;
    chosenPhrase[2] = '\n';
    chosenPhrase[3] = 77;
    chosenPhrase[4] = 85;
    chosenPhrase[5] = 77;
    chosenPhrase[255] = '\0';

    //Prints out array as a string.
    printf("My favorite phrase is %s\n", chosenPhrase);
    return 0; 
}