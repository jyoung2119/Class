#include <stdio.h>

int main()
{
    char inputArray[10];
    printf("Enter a string: ");
    fgets(inputArray, sizeof(inputArray), stdin);
    printf("Your input is: ");
    fputs(inputArray, stdout);
}