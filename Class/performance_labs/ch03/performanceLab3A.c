/*
    Author: Jared Young
    Date: 30 JAN 2019
    Program: Performance Lab 3A
*/
#include <stdio.h>

int main()
{
    int ageOfStudents[15] = {0};
    ageOfStudents[0] = 29;
    ageOfStudents[1] = 20;
    ageOfStudents[2] = 21;
    ageOfStudents[3] = 21;
    ageOfStudents[4] = 21;
    ageOfStudents[5] = 21;
    ageOfStudents[6] = 21;
    ageOfStudents[7] = 25;
    ageOfStudents[8] = 25;
    ageOfStudents[9] = 30;
    ageOfStudents[10] = 32;
    ageOfStudents[11] = 33;
    ageOfStudents[12] = 34;
    ageOfStudents[13] = 35;
    ageOfStudents[14] = 36;

    for(int i = 0; i < 15; i++)
    {
        printf("Student %d is %d years old.\n", i+1, ageOfStudents[i]);
    }

    char mySaying[7] = {'U', 'R', '\n', 'M', 'U', 'M', '\0'};
    for(int j = 0; j < 7; j++)
    {
        printf("%c", mySaying[j]);
    }

    return 0;
}