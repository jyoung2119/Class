#include <stdio.h>

int main()
{
    int userInput = 0;
    printf("Input something scrub: ");
    userInput = getc(stdin);
    printf("The prior character is: ");
    putc(userInput - 1, stdout);
    printf("\n");
    return 0;
}