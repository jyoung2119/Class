#include <stdio.h>
#include <math.h>

int main()
{
    int x = 2;
    int y = 6;

    if(y < x)
    {
        printf("%d < %d is true\n", y, x);
    }
    else
    {
        printf("%d < %d is false\n", y, x);
    }
    if(y <= x)
    {
        printf("%d <= %d is true\n", y, x);
    }
    else
    {
        printf("%d <= %d is false\n", y, x);
    }
    if(y > x)
    {
        printf("%d > %d is true\n", y, x);
    }
    else
    {
        printf("%d > %d is false\n", y, x);
    }
    if(y >= x)
    {
        printf("%d >= %d is true\n", y, x);
    }
    else
    {
        printf("%d >= %d is false\n", y, x);
    } 
    if(y == x)
    {
        printf("%d = %d is true\n", y, x);
    }
    else
    {
        printf("%d = %d is false\n", y, x);
    }
    if(y != x)
    {
        printf("%d != %d is true\n", y, x);
    }
    else
    {
        printf("%d != %d is false\n", y, x);
    }
    if(2 == y)
    {
        printf("2 = %d is true\n", y);
    }
    else
    {
        printf("2 = %d is false\n", y);
    }
    if(6 != x)
    {
        printf("6 != %d is true\n", x);
    }
    else
    {
        printf("6 != %d is false\n", x);
    }
    if(6 >= 2)
    {
        printf("6 >= 2 is true\n");
    }
    else
    {
        printf("6 >= 2 is false\n");
    }
    if(2 < 6)
    {
        printf("2 < 6 is true\n");
    }
    else
    {
        printf("2 < 6 is false\n");
    }
    if(x != y && y != 3 && y >= x)
    {
        printf("%d != %d, %d != 3, 3 >= %d is true\n", x, y, y, x);
    }
    else
    {
        printf("%d != %d, %d != 3, 3 >= %d is false\n", x, y, y, x);
    }
    return 0;
}