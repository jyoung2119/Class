#include <stdio.h>
#include <math.h>

int main()
{
    int x = 99;
    int y = 0;

    if(x && y)
    {
        printf("%d && %d is true\n", x, y);
    }
    else
    {
        printf("%d && %d is false\n", x, y);
    }
    if(y || x)
    {
        printf("%d || %d is true\n", y, x);
    }
    else
    {
        printf("%d || %d is false\n", y, x);
    }
    if(!y)
    {
        printf("!%d is true\n", y);
    }
    else
    {
        printf("!%d is false\n", y);
    }
    if(y && 0)
    {
        printf("%d && 0 is true\n", y);
    }
    else
    {
        printf("%d && 0 is false\n", y);
    }
    if(x || 42)
    {
        printf("%d || 42 is true\n", x);
    }
    else
    {
        printf("%d || 42 is false\n", x);
    }
    if(!x)
    {
        printf("!%d is true\n", x);
    }
    else
    {
        printf("!%d is false\n", x);
    }
    if(x && x)
    {
        printf("%d && %d is true\n", x, x);
    }
    else
    {
        printf("%d && %d is false\n", x, x);
    }
    if(y || y)
    {
        printf("%d || %d is true\n", y, y);
    }
    else
    {
        printf("%d || %d is false\n", y, y);
    }
    if(!1)
    {
        printf("!1 is true\n");
    }
    else
    {
        printf("!1 is false\n");
    }
    if(1 && 1)
    {
        printf("1 && 1 is true\n");
    }
    else
    {
        printf("1 && 1 is false\n");
    }
    if((0 && 1) || (2 && 3))
    {
        printf("(0 && 1) || (2 && 3) is true\n");
    }
    else
    {
        printf("(0 && 1) || (2 && 3) is false\n");
    }
}