/*
    Author: Jared Young
    Date: 08 FEB 2019
    Project: Performance Lab 7D
    Description: Write a program that will evaluate a simple math formula.
                 Input the formula with two integers separated by an arithmetic operator from one line.
                    Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
                 Use a switch statement to print the correct value using the operators as cases.
                 Set the default condition to an error.
                 Ensure any division provides a double answer with a precision of two decimal places.
*/
#include <stdio.h>

int main(void)
{
    char mathOperator = 0;
    int firstVariable = 0;
    int secondVariable = 0;

    printf("Input two numbers separated by an operator: ");
    //Stores user input as integers and operator as a character.
    scanf("%d%c%d", &firstVariable, &mathOperator, &secondVariable);

    //Dependent on the operator that is entered.
    switch(mathOperator)
    {
        //Addition
        case '+':
            printf("%d + %d = %d\n", firstVariable, secondVariable, firstVariable+secondVariable);
            break;
        //Subtraction
        case '-':
            printf("%d - %d = %d\n", firstVariable, secondVariable, firstVariable-secondVariable);
            break;
        //Multiplication
        case '*':
            printf("%d * %d = %d\n", firstVariable, secondVariable, firstVariable*secondVariable);
            break;
        //Division
        case '/':
            //Prevents dividing by zero
            if(secondVariable != 0)
            {
                printf("%d / %d = %.2lf\n", firstVariable, secondVariable, (double)firstVariable/secondVariable);
                break;
            }
            else
            {
                printf("ERROR: CAN'T DIVIDE BY 0 SCRUB\n");
                break;
            }
        //Modulo 
        case '%':
            printf("%d %% %d = %d\n", firstVariable, secondVariable, firstVariable%secondVariable);
            break;
        //If person is illiterate
        default:
            printf("ERROR: YOU SUCK. TRY AGAIN.\n");
    }   
}