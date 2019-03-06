#include <stdio.h>

int displayPrimeNumber(int x);  //Function prototype

int main()
{
    int num1, num2, i, flag;

    printf("Enter two numbers: ");
    scanf ("%d %d", &num1, &num2);

    printf("Prime numbers between %d and %d are:\t", num1, num2);

    for(i = num1 + 1; i < num2; ++i)
    {
        flag = displayPrimeNumber(i);

        if(flag == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}

int displayPrimeNumber(int x)
{
    int j, flag = 0;

    for(j = 2; j <= x/2; ++j)
    {
        if(x % j == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}