/*
    Author: Jared Young
    Date:30 JAN 2019
    Program Name: Performance Lab 3B 
*/

#include <stdio.h>

int main()
{
    char chosenPhrase[256] = {0};

    chosenPhrase[0] = 85;
    chosenPhrase[1] = 82;
    chosenPhrase[2] = '\n';
    chosenPhrase[3] = 77;
    chosenPhrase[4] = 85;
    chosenPhrase[5] = 77;
    chosenPhrase[255] = '\0';

    printf("My favorite phrase is %s\n", chosenPhrase);
    return 0; 
}