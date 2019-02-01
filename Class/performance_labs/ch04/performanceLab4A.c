#include <stdio.h>

int main()
{
    int userInput = 0;
    printf("Input character: ");
    userInput = getchar();
    printf("The sequential character is: ");
    putchar(userInput + 1);
    printf("\n");
    return 0;
}