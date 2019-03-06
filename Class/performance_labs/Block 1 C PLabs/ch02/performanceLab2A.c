/*
    Author: Jared Young
    Date: 29 JAN 2019
    Program Name: Performance Lab 2A
    Description: In this lab, you will declare and initialize variables of the following types:
                    int, float, double, char
                 Then print the variables and their sizes.
*/

#include <stdio.h>

int main(void) 
{ 
    //Declares and initializes different variable types.
    int intVariable = 1; 
    float fltVariable = 1.5; 
    double dblVariable = 2.757575757575; 
    char chrVariable = 'j'; 

    //Prints the value of the variables.
    printf("The integer is %d \n", intVariable); 
    printf("The float is %f \n", fltVariable); 
    printf("The double is %lf \n", dblVariable); 
    printf("The char is %c \n", chrVariable); 

    //Prints the number of bytes.
    printf("size of the integer is %d \n", sizeof(intVariable)); 
    printf("size of float is %d \n", sizeof(fltVariable)); 
    printf("size of double is %d \n", sizeof(dblVariable)); 
    printf("size of char is %d \n", sizeof(chrVariable)); 

    return 0; 
} 