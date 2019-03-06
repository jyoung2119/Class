/*
    Author: Jared Young
    Date: 10 FEB 2019
    Project: Performance Lab 7.4A
    Description: Input an unsigned integer "x".
                 Print the first 10 to 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
                 Repeat this process.
                 Immediately stop this process when the user inputs an integer above 999.
                 Ignore any "divide by 0" errors using continue.
*/
#include <stdio.h>

int main()
{
    //user input
    unsigned int x = 0;
    //Increments through every number in order to find numbers that divide evenly into x. 
    int holder = 0;
    //Keeps track of how many successful mod operations occur(no remainder).
    int counter = 0;
 
    printf("Input a number: ");
    scanf("%d", &x);

    //Loops while holder is <= than user input.
    //And only displays the first 20 integers that x is divided by.
    while(holder <= x && counter != 19)
    {
        //Error handling when user input is > 999.
        if(x > 999)
        {
            printf("TRY AGAIN WITH AN INPUT <= 999\n");
            break;
        }
        //Runs if holder variable is = 0.
        //Or if user input divided by holder has no remainder.
        if(holder == 0 || x % holder == 0)
        {
            //Prevents dividing by zero.
            if(holder == 0)
            {
                //Increments holder so loop skips this if the next time around.
                holder++;
                //Starts while loop over again.
                //Prevents counter increment and print statement.
                continue;
            }

            printf("%d is divisible by %d\n", x, holder);
            //Keeps track of how many numbers x is divisble by.
            counter++;
        }
        //Runs if holder != 0
        //Or if there is a remainder between x and holder.
        else
        {
            //Increments holder
            holder++;          
            continue;
        }
        //Increments holder regardless of previous conditionals
        holder++;
    }

    //Shitty way to make sure program runs again.
    if(x <= 999)
    {
        main();
    }
    
    return 0;
}