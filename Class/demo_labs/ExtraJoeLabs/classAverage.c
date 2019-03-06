#include <stdio.h>

int main()
{
    int gradeHolder = 0; 
    int total = 0;
    int gradeCounter = 1;
    float average = 0;

    while(gradeCounter <= 10)
    {
        printf("Input grade %i: ", gradeCounter);
        scanf("%d", &gradeHolder);
        total = total + gradeHolder;
        gradeCounter++;
    }

    average = (float)total/10;                          //Cast as float to get decimal values.
    printf("The class average is %.2f\n", average);

    return 0;
}