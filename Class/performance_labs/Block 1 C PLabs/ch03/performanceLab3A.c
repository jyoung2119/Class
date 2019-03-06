/*
    Author: Jared Young
    Date: 30 JAN 2019
    Program: Performance Lab 3A
    Description: Print the age of students from an array. 
                 Print a quote from an array.
*/
#include <stdio.h>

int main()
{
    //Declare and zeroize an array of ages.
    int ageOfStudents[15] = {0};
    //Fill each index with a value individually.
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

    //Loop for the entirety of the array.
    for(int i = 0; i < 15; i++)
    {
        //Prints the ages from the array and student number.
        //i+1 because i starts at 0.
        printf("Student %d is %d years old.\n", i+1, ageOfStudents[i]);
    }

    //Storing a quote in an array.
    char mySaying[7] = {'U', 'R', '\n', 'M', 'U', 'M', '\0'};
    
    //Loops for the number of elements in the array.
    for(int j = 0; j < 7; j++)
    {
        printf("%c", mySaying[j]);
    }

    return 0;
}