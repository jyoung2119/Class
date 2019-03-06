/*
    Author: Jared Young
    Date: 11 FEB 2019
    Project: Performance Lab 7.5A
    Description: Print all the even or odd numbers from 0 to 100.
                 Prompt the user for input to indicate odds or evens.
                 Loop from 0 to 100 and print all indicated numbers.
                 Use and IF statement to check if even or odd.
*/
#include <stdio.h>

int main()
{
    int holder = 0;
    int evenCounter = 0;
    char userChoice = 0;

    printf("For Odds press o, For Evens press e: ");
    scanf("%c", &userChoice);

    //Error handling
    if(userChoice != 'o' && userChoice != 'O' && userChoice != 'e' && userChoice != 'E')
    {
        printf("WRONG INPUT SCRUB\n");
    }
    //Outputs odd numbers
    else if(userChoice == 'o' || userChoice == 'O')
    {
        //Set to 1 in order to calculate following odd numbers
        holder = 1;
        //Prints 1
        printf("%d ", holder);
        //Runs 50(i starts at 0) times in order to calculate and display all 50 odd numbers.
        for(int i = 0; i < 49; i++)
        {
            //Calculates next odd number starting at 1.
            holder = holder + 2;
            printf("%d ", holder);
        }
        printf("\n");
    }
    //Outputs even numbers
    else if(userChoice == 'e' || userChoice == 'E')
    {
        //Runs 50(evenCounter = 0) times to calculate and display even numbers.
        while(evenCounter < 50)
        {
            //Calulates next even number starting at 0.
            holder = holder + 2;
            printf("%d ", holder);
            //Increments counter for loop condition.
            evenCounter++;
        }
        printf("\n");
    }

    return 0;
}