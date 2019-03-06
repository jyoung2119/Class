#include <stdio.h>

int main()
{
    int num1, num2, num3, temp;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3)
    {
        temp = num1; 
    }
    else if(num2 > num1 && num2 > num3)
    {     
        temp = num2;
    }
    else if(num3 > num1 && num3 > num2)
    {
        temp = num3;
    }

    printf("The greatest number entered is: %d\n", temp);
    return 0;
}