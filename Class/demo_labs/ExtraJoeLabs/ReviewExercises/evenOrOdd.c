#include <stdio.h>

//Function prototype
int evenOdd(int num);

int main()
{
    //Declare and initialize variables
    int userChoice = 1;
    int userInput = 0;
    int holder = 0;

    //Loop to allow for multiple inputs
    while(userChoice = 1)
    {
        //Ask for input
        printf("Enter an integer: ");
        //Scan for input(& error handle)
        if(!scanf("%d", &userInput))
        {
            printf("Try Again\n");
            break;
        }
        else
        {
            //Pass input to even function(set return to holder variable)
            holder = evenOdd(userInput);
            //If holder = 1, print input is even
            if(holder == 1)
            {
                printf("%d is even\n", userInput);
            }
            //Else print input is odd
            else
            {
                printf("%d is odd\n", userInput);
            }
        }

        //Loop operations
        printf("Press 1 to Enter New Integer, O to Exit: ");
        if(!scanf("%d", &userChoice))
        {
            printf("Try Again\n");
            break;
        }
        if(userChoice == 0)
        {
            break;
        }
    }
}

//Returns 1 if input is even, 0 if not.
int evenOdd(int num)
{
    //If num/2 has no remainder, return 1
    if(num % 2 == 0)
    {
        return 1;
    }
    //Else return 0
    else
    {
        return 0;
    }
}