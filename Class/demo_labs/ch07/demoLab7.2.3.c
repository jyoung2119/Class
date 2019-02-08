#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int firstVar = 0;
    int secondVar = 0;
    int thirdVar = 0;

    printf("Please input two numbers separated by a tab: ");
    scanf("%d   %d", &firstVar, &secondVar);

    if(firstVar == secondVar)
    {
        thirdVar = 0;
    }
    else if(firstVar > secondVar)
    {
        thirdVar = firstVar - secondVar;
    }
    else
    {
        thirdVar = secondVar - firstVar;
    }

    if(thirdVar >= 0)
    {
        printf("The difference is: %d\n", thirdVar);
    }
    else
    {
        printf("ERROR: Variable 3 is not positve.\nTRY AGAIN:\n");
    }
}