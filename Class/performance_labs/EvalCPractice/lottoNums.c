#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower = 1;
    int upper = 99;
    int count = 5;
    int holder = 0;

    srand(time(0));

    printf("LOTTO NUMBERS: ");
    for(int i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        //Prevents duplicate numbers
        if(num == holder)
        {
            i--;
            continue;
        }
        holder = num;
        printf("%d ", num);
    }
    printf("\n");
}