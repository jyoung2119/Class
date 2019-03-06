#include <stdio.h>

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if(num < 0.0)
    {
        printf("You have entered a negative number.\n");
    }
    else if(num > 0.0)
    {
        printf("You have entered a postitve number.\n");
    }
    else
    {
        printf("You have entered zero.\n");
    }

    return 0;
}