#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int userInputNumber = 0;

    printf("Input an integer: ");
    scanf("%d", &userInputNumber);

    //Uses mod operator to determine if there is a remainder when dividing input by 2.
    //If so, input is an odd number.
    if(userInputNumber % 2 != 0)
    {
        userInputNumber = userInputNumber * 2;
        printf("The number was odd but I made it even. \nThe new number is %d.\n", userInputNumber);
    }
    else
    {
        printf("The number is even.\n");
    }
    return 0;
}