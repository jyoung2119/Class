#include <stdio.h>

int main(void)
{
    char myArray[256] = {0};
    printf("Input a string: ");
    scanf("%255[^\n]s", myArray);

    if(myArray[0] != 0)
    {
        printf("Your string was: ");
        puts(myArray);
    }
    else
    {
        printf("Type something else\n");
    }
}