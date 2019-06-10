#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int userInput = 0;
    int bitBois[32] = {0};
    int k = 0;
    int index = 0;

    printf("Enter An Integer: ");
    if(!(scanf("%ld", &userInput)))
    {
        printf("YOU SUCK!\n");
    }
    else
    {
        printf("BIT BOIS: ");
        for(int i = 31; i >= 0; i--)
        {
            k = userInput >> i;
            if(k & 1)
            {
                printf("1");
                bitBois[index] = 1;
                index++;
            }
            else
            {
                printf("0");
                bitBois[index] = 0;
                index++;
            } 
        }
        printf("\n");
        printf("REVERSED BITS: ");
        for(index = 31; index >= 0; index--)
        {
            printf("%i", bitBois[index]);
        }
        printf("\n");
    }
    
}