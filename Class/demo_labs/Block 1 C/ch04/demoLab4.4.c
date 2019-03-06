#include <stdio.h>

int main()
{
    int userInput = 0;
    printf("Enter a character: ");
    userInput = getc(stdin);
    printf("Your character was: ");
    putc(userInput, stdout);
    printf("\n");
    return 0;
}