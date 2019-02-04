#include <stdio.h>

int main()
{
    char myArray[256] = {0};
    printf("Type a string: ");
    //Prevents the scanning of capital letters and newlines.
    scanf("%255[^A-Z\n]s", myArray);
    printf("Your string is: %s\n", myArray);
}