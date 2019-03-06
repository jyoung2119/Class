/*
    Author: Jared Young
    Date: 12 FEB 2019
    Project: Calculator
    Description: Create the following functions:
                    main():
                        This should be what runs your ui, asks for user input, checks for errors/input and runs the needed functions
                    add()
                        This should add two numbers together
                    subtract()
                        This should subtract two numbers
                    divide()
                        This should divide two numbers
                    multiply()
                        This should multiply two numbers
                 Check for errors and valid user input
                 Make the program loop
*/
#include <stdio.h>
#include <math.h>
#define ERR_YOU_SUCK -1

//Function prototypes
int add(double firstNumber, double secondNumber);
int subtract(double firstNumber, double secondNumber);
int divide(double firstNumber, double secondNumber);
int multiply(double firstNumber, double secondNumber);
//int modulo(double firstNumber, double secondNumber, double mathAnswer);

int main()
{
    double firstNumber = 0;
    double secondNumber = 0;
    //double thirdNumber = 0;
    double  mathAnswer = 0;
    char charOperator = ' ';
    int userChoice = 1;

    //Loops as long as user chooses to
    while(userChoice == 1)
    {
        printf("Input a number, an operator, and another number: ");
        scanf("%lf%c%lf", &firstNumber, &charOperator, &secondNumber);

        //Determines which function to pass to based off of desired operator.
        switch(charOperator)
        {
            case '+':
                mathAnswer = add(firstNumber, secondNumber);
                break;
            case '-':
                mathAnswer = subtract(firstNumber, secondNumber);
                break;
            case '/':
                mathAnswer = divide(firstNumber, secondNumber);
                break;
            case '*':
                mathAnswer = multiply(firstNumber, secondNumber);
                break;
            //In case user is illiterate
            default:
                printf("You Suck\n");
                mathAnswer = ERR_YOU_SUCK;
                break;
        }

        //Only runs if no error is passed back
        if(mathAnswer != ERR_YOU_SUCK)
        {
            printf("Result of %lf%c%lf = %lf\n", firstNumber, charOperator, secondNumber, mathAnswer);
        }

        printf("Press 1 for new calculation, 2 to exit.: ");
        scanf("%i", &userChoice);
        
        //Determines whether to loop program or not.
        if(userChoice != 1 || userChoice == 2)
        {
            break;
        }
    }
    return 0;
}

//Handles addition
int add(double firstNumber, double secondNumber)
{
    return firstNumber + secondNumber;
}

//Handles subtraction
int subtract(double firstNumber, double secondNumber)
{
    return firstNumber - secondNumber;
}

//Handles division
int divide(double firstNumber, double secondNumber)
{
    //Error handling
    if(secondNumber == 0)
    {
        printf("Can't divide by zero scrub.\n");
        return ERR_YOU_SUCK;
    }
    else
    {
        return firstNumber / secondNumber;
    }
}

//Handles multiplication
int multiply(double firstNumber, double secondNumber)
{
    return firstNumber * secondNumber;
}