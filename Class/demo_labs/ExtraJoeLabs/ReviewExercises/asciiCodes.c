#include <stdio.h>

int main()
{
    //Declare and initialize variable
    int userInput = 0;

    //Ask for user input
    printf("Input ASCII code: ");

    //Scan for input(& error handle)
    if(!scanf("%d", &userInput))
    {
        printf("Try Again\n");
    }
    else
    {
        //Print int as a character
        printf("Corresponding Character: %c\n", userInput);
    }
}