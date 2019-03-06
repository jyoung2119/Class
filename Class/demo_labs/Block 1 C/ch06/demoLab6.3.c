#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(void)
{
    uint32_t userInput = 0;
    uint32_t holderNumber = 0;

    //Asks user for input
    printf("Input a positive number: ");
    //Scans input as an unsigned integer
    scanf("%u", &userInput);
    //Outputs user input in hexidecimal
    printf("Your number was: %u (Hex: 0x%08X)\n", userInput, userInput);

    //Sets holder to user input
    holderNumber = userInput;
    //Shift right by four
    userInput = userInput >> 4;
    //Shift holder left by 28 (32-4=28)
    //sizeof outputs the bytes(4) not bits(32)
    holderNumber = holderNumber << ((sizeof(holderNumber) * 8) - 4);
    //OR the shifted input and shifted holder
    userInput = userInput | holderNumber;
    //Outputs new number
    printf("Your number now: %u (Hex: 0x%08X)\n", userInput, userInput);
}