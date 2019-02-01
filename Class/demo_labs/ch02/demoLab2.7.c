/*
    Author: Jared Young
    Date: 29 JAN 2019
    Program Name: Demo Lab 2.7
*/

#include <stdio.h>

int main(void) 
{ 
    int intVariable = 35; 
    float fltVariable = 1.5; 
    double dblVariable = 2.75757; 
    char chrVariable = 'j';

     printf("The int: %d cast to a float: %f \n", intVariable, (float) intVariable);
     printf("The int: %d cast to a char: %c \n", intVariable, (char) intVariable);
     printf("The float: %f cast to a double: %lf \n", fltVariable, (double) fltVariable);
     printf("The double: %lf cast to a float: %f \n", dblVariable, (float) dblVariable);
     printf("The char: %c cast to a int: %d \n", chrVariable, (int) chrVariable);
     printf("63 cast to a char: %c \n", (char) 63);

     return 0;
}