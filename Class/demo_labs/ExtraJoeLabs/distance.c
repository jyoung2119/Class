#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;

    printf("Enter First Point(x,y): ");
    scanf("%f,%f", &x1, &y1);
    printf("Enter Second Point(x,y): ");
    scanf("%f,%f", &x2, &y2);

    float side1 = x2 - x1;
    float side2 = y2 - y1;

    float sOneSquared = side1 * side1;
    float sTwoSquared = side2 * side2;
    double num = sOneSquared + sTwoSquared;

    double distance = sqrt(num);

    printf("The distance between the two points is %.2lf\n", distance);
    return 0;
}