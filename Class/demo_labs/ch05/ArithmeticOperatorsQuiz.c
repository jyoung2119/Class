#include <stdio.h>
#include <math.h>

int main()
{
    int x = 7;
    int y = 4;
    float z = 0;

    //x * y
    printf("%d * %d = %d\n", x, y, (x*y));
    //z=x/y
    printf("%d / %d = %d\n", x, y, (x/y));
    //x%y
    printf("%d modulo operator %d = %d\n", x, y, (x%y));
    //y+x
    printf("%d + %d = %d\n", y, x, (y+x));
    //y-x
    printf("%d - %d = %d\n", y, x, (y-x));
    //-y
    printf("Negative %d = %d\n", y, -y);
    //++x
    printf("Increment before evalution of %d = %d\n", x, ++x);
    //y--
    printf("Decrement after evalution of %d = %d\n", y, y++);
    //x--
    printf("Decrement after evaluation of %d = %d\n", x--);
    //--y
    printf("Decrement before evaluation of %d = %d\n", y, --y);
    //1 + 2 * (3 + y) + 5
    printf("1 + 2 * (3 + %d) + 5 = %d\n", y, 1 + 2 * (3 + y) + 5);
    return 0;
}