#include <stdio.h>

#define SIZE 10

int main()
{
    /*float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    float *nPtr;

    for(int i = 0; i < SIZE; i++)
    {
        printf("%.1f ", numbers[i]);
    }
    printf("\n");

    nPtr = &numbers[0];
    nPtr = numbers;

    for(int j = 0; j < SIZE; j++)
    {
        printf("%.1f ", *(nPtr+j));
    }
    printf("\n");*/

    float number1 = 7.3;
    float number2;
    float *fPtr;

    fPtr = &number1;
    
    printf("The value of *fPtr is %f\n", *fPtr);

    number2 = *fPtr;

    printf("Value of number2 is %f\n", number2);

    printf("Address of number1 is %p\n", &number1);

    printf("Address that is stored in fPtr is %p\n", fPtr);
}
