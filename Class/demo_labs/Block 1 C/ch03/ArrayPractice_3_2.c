#include <stdio.h>

int main(void)
{
    // first
    int computerScienceCourses [5] = {1003, 1023, 1033, 1063, 1073};

    printf("Computer Science Scores:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Scores: %d\n", computerScienceCourses[i]);
    }

    // second
    float studentGPAs [7] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};
    for(int j = 0; j < 7; j++)
    {
        printf("GPAs be like: %f\n", studentGPAs[j]);
    }

    // third
    char cardinalDirections [4] = {0};
    for(int k = 0; k < 4; k++)
    {
        printf("Cardinal Directions: %d\n", cardinalDirections[k]);
    }

    // fourth
    char catchPharse [10] = {76, 101, 103, 101, 111};
    for(int w = 0; w < 10; w++)
    {
        printf("catch phrase: %c\n", catchPharse[w]);
    }

    return 0;
}