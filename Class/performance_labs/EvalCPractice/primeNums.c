#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, count, flag;

    x = 2;
    i = 1;
    while(i <= 100)
    {
        flag = 1;
        for(count = 2; count <= x - 1; count++)
        {
            if(x % count == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d ", x);
            i++;
        }
        x++;
    }
    printf("\n");
}