#include <stdio.h>

int main()
{
    int userInput = 0;
    printf("Enter a character: ");
    userInput = getchar();
    printf("Your character was: ");
    putchar(userInput);
    printf("\n");
    return 0;
}