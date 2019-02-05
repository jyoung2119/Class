#include <stdio.h>
#include <math.h>

int main()
{
    int x = 9;
    int y = 3;

    printf("x *= y = %i \n", x *= y);
    x = 9;
    y = 3;
    printf("x /= y = %i \n", x /= y);
    x = 9;
    y = 3;
    printf("x %= y = %i \n", x %= y);
    x = 9;
    y = 3;
    printf("x += y = %i \n", x += y);
    x = 9;
    y = 3;
    printf("x -= y = %i \n", x -= y);
    x = 9;
    y = 3;
    printf("x *= ++y = %i \n", x *= ++y);
    x = 9;
    y = 3;
    printf("x /= y-- = %i \n", x /= y--);
    x = 9;
    y = 3;
    printf("x %= --x = %i \n", x %= --x);
    x = 9;
    y = 3;
    printf("x += --y = %i \n", x += --y);
    x = 9;
    y = 3;
    printf("x -= y++ = %i \n", x -= y++); 
    x = 9;
    y = 3;

    printf("(y %= y) || (x /= x--) = %d \n", (y %= y) || (x /= x--) );
 
    return (0);

}
