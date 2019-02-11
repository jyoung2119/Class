#include <stdio.h>

int main()
{
    int x = 0;
    int y = 1;

    printf("Enter a number between 1-10: ");
    scanf("%4d", &x);

    if(x > 10)
    {
        printf("Senpai!! You can't enter numbers larger than 10");
        return 0;
    }

    while(y <= 10)
    {
        if(x <= 0)
        {
            printf("Skipping Number %d! Adding 1.\n", x);
            x++;
            continue;
        }
        printf("%d * %d = %d\n", x, y, x*y);
        y++;
    }
}