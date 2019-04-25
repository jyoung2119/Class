#include <stdio.h>

//Function prototype
int reverseNum(int num);

int main()
{
    //Declare and initialize variables
    int userInput = 0;
    int newNum = 0;

    //Ask for user input
    printf("Enter an integer: ");

    //Scan for user input(& error handle)
    if(!scanf("%d", &userInput))
    {
        printf("Try Again...\n");
    }
    else
    {
        //Pass input to reverse function
        newNum = reverseNum(userInput);
        //Print result
        printf("Reversed Number: %d\n", newNum);
    }   
}

//Returns an int
int reverseNum(int num)
{
    //Declare a holder variable to store reversed int
    int holder = 0;
    int zeroCount = 0;

    //Loop while original int > 0
    while(num > 0)
    {
        //Perform mod & set it equal to holder
        holder = holder*10 + num%10;
        //Divide original num by 10 in order to move to next place in the integer
        num = num/10;
    }
    //Return reversed int
    return holder;
}