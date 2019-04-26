#Ch8 Calculator

'''#include <stdio.h>
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
}'''

def main():    
    userChoice = 1
    while userChoice == 1:
        fNum, operator, sNum = input("Enter a number, an operator, and another number(x-y): ")
        fNum, sNum = [float(fNum), float(sNum)]

        if operator == '+':
            answer = add(fNum, sNum)            
        elif operator == '-':
            answer = subtract(fNum, sNum)           
        elif operator == '/':
            answer = divide(fNum, sNum)            
        elif operator == '*':
            answer = multiply(fNum, sNum)
        else:
            print("Why do you suck?")
        
        print("Answer = ", answer)
        userChoice = int(input("Press 1 for new calculation: "))
        if int(userChoice) != 1:
           break     
        
def add(fNum, sNum):
    return fNum + sNum

def subtract(fNum, sNum):
    return fNum - sNum

def divide(fNum, sNum):
    return fNum / sNum

def multiply(fNum, sNum):
    return fNum * sNum

main()

