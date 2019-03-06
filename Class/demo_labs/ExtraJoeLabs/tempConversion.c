#include <stdio.h>

int main()
{
    float fahr, cel;

    printf("Enter a celsius temp: ");
    scanf("%f", &cel);

    fahr = (1.8 * cel) + 32;               //Conversion formula
    printf("\nTemp. in Farenheit: %.2f F\n", fahr);

    return 0;
}