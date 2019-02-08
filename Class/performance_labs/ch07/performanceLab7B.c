/*
    Author: Jared Young
    Date: 08 FEB 2019
    Project: Performance Lab 7B
    Description: Initialize a signed int to 0.
                 Input a number from the user and store it in the signed int.
                 Determine if the number is negative or positive utilizing a bitwise operator.
                 Utilizing an IF-ELSE statement:
                    INDICATE if the number is negative
                    Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
                 Print the binary
*/
#include <stdio.h>

//Initialize function to display binary
void displayBinary(int holderInput);

int main()
{
    signed int userInput = 0;

    printf("Input an integer: ");
    scanf("%d", &userInput);

    //Shifts right to check for negative input.
    //If the first bit is a 1 then it has to be negative.
    if(((unsigned int)userInput >> 31) == 1)
    {
        printf("This number is negative.\n");
    }
    else
    {
        //Passes positive input to the displayBinary function.
        displayBinary(userInput);
        printf("The negative binary equals:\n");
        //"~" inverses the bits.
        //Cast as an unsigned int in order to manipulate the bits.
        userInput = ~(unsigned int)userInput;
        //Two's complement
        userInput++;
    }
    //Passes any input to displayBinary function
    displayBinary(userInput);
    return 0;   
}

void displayBinary(signed int holderInput)
{

    unsigned int bitChecker = 1;
    int spaceCounter = 0;

    //Shifts left 31 to ensure the left most bit is turned on.
    //bitChecker now equals 0x80000000 after shift.
    bitChecker = bitChecker << 31;

    //Loops while bitChecker does not equal 0.
    //bitChecker = 0 once it shifts past the last bit.
    while(bitChecker != 0)
    {
        //Puts a space between every 4 bits.
        if((spaceCounter % 4)==0)
        {
            printf(" ");
        }
        //If the comparison of each bit results in a 0, a 0 will be printed.
        if((bitChecker & holderInput) == 0)
        {
            printf("0");
        }
        //If x & y = 1, output is a 1.
        else
        {
            printf("1");
        }

        //Shift right to check next bit in line.
        bitChecker = bitChecker >> 1;
        //Increments counter to keep track of space placement.
        spaceCounter++;
    }
    printf("\n");
}