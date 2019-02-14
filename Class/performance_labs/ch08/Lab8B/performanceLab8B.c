/*
    Author: Jared Young
    Date: 13 FEB 2019
    Project: Performance Lab 8B
    Description: Write a program that reads a string from user input, call reverse_it(), and then call print_the_count()
*/
#include <stdio.h>
#include <string.h>
#include "MyStringHeader.h"

int main()
{
    char userString[256] = {0};
    char * inputString[] = {userString};

    printf("Input a string: ");
    fscanf(stdin, "%255[^\n]c", &userString);

    reverse_it(* inputString, strlen(userString));

    print_the_count(* inputString, strlen(userString));

    return 0;
}