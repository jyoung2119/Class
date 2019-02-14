/*
    Author: Jared Young
    Date: 08 FEB 2019
    Project: Performance Lab 7C
    Description: Initialize ONLY three unsigned int variables to 0.
                 Safely scan user input into the variable #1 and #2 utilizing a single line.
                 Using a single ELSE-IF statement:
                    If variable #1 is equal to variable #2, print an ERROR.
                    Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
                 Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE-IF statement.
*/
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    //Initializes and zeroizes unsigned integers with 32 bits each.
    uint32_t firstVariable = 0;
    uint32_t secondVariable = 0;
    uint32_t thirdVariable = 0;

    printf("Please input two numbers separated by a tab:");
    scanf("%d   %d", &firstVariable, &secondVariable);

    //Error Handling
    //Runs if user inputs the same number for each input.
    if(firstVariable == secondVariable)
    {
        printf("ERROR: Numbers Must Be Different!\n");
    }
    //Runs if the first number > the second.
    else if(firstVariable > secondVariable)
    {
        //Exchange the value of the largest variable with variable #3 while preserving the other value.
        thirdVariable = firstVariable;
    }
    //Runs if second number > the first.
    else
    {
        //Exchange the value of the largest variable with variable #3 while preserving the other value.
        thirdVariable = secondVariable;
    }

    //Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE-IF statement.
    if((firstVariable + secondVariable + thirdVariable) > 2 && firstVariable != secondVariable)
    {
        printf("Var1:%d Var2:%d Var3:%d\n", firstVariable, secondVariable, thirdVariable);
    }
}