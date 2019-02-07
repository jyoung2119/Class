/*
    Author: Jared Young
    Date: 07 FEB 2019
    Project: Performance Lab 6A
    Description: Input a uint32_t userInput from stdin utilizing fscanf()
                 Initialize another uint32_t bitChecker to 0x01
                 Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
                 Print the binary representation of userInput to stdout using only the following:
                    fprintf()
                    Bitwise Shift Right >>
                    Bitwise AND &
                    Relational Operator (e.g., >)
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(void)
{
    uint32_t userInput = 0;
    uint32_t bitChecker = 0x01;
    int spaceCounter = 0;

    //Prints 0x01 (0001 in binary)
    //printf("0x%02X\n",bitChecker);

    //Shifts left 31 to ensure the left most bit is turned on.
    //bitChecker now equals 0x80000000 after shift.
    bitChecker = bitChecker << 31;
 
    //Prints 0x80000000 (1000 0000*7 in binary)
    //printf("0x%08X\n",bitChecker);
    //printf("%u\n", bitChecker);

    printf("Please input a positive integer: ");
    fscanf(stdin, "%i", &userInput);
    fprintf(stdout, "Your number was: %i\n", userInput);
    fprintf(stdout, "Input in Binary: ");

    //Loops while bitChecker is greater than 0.
    //bitChecker = 0 once it shifts past the last bit.
    while(bitChecker > 0)
    {
        //Puts a space between each set of four numbers.
        if(spaceCounter % 4 == 0)
        {
            printf(" ");
        }
        //If the comparison of each bit results in a 0, a 0 will be printed.
        if((userInput & bitChecker) == 0)
        {
            fprintf(stdout, "0");
        }
        //If x & y = 1, output is a 1.
        else
        {
            fprintf(stdout, "1");
        }
        //Shifts
        bitChecker = bitChecker >> 1;
        //Increments counter to keep track of the space placement.
        spaceCounter++;
    }
    printf("\n");
}