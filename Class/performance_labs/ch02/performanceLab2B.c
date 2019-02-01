/*
    Author: Jared Young
    Date: 29 JAN 2019
    Program Name: Performance Lab 2B
*/

#include <stdio.h>

int main(void) 
{ 
    int intVariable = 101; 
    float fltVariable = 3.5; 
    double dblVariable = 5.4987; 
    char chrVariable = 'E';

     printf("The int: %d cast to a float: %f \n", intVariable, (float) intVariable);
     printf("The int: %d cast to a char: %c \n", intVariable, (char) intVariable);
     printf("The float: %f cast to a double: %lf \n", fltVariable, (double) fltVariable);
     printf("The double: %lf cast to a float: %f \n", dblVariable, (float) dblVariable);
     printf("The char: %c cast to a int: %d \n", chrVariable, (int) chrVariable);
     printf("33 cast to a char: %c \n", (char) 33);

     return 0;
}