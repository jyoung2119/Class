#include <stdio.h>

int main()
{
    int intMonth = 0;
    int intDay = 0;
    int intYear = 0;
    printf("Input the date with the day, month, and year seperated by a - : ");
    scanf("%2d-%2d-%4d)", &intMonth, &intDay, &intYear);
    printf("Your date is: %02d/%02d/%d\n", intMonth, intDay, intYear);
    return 0;
}