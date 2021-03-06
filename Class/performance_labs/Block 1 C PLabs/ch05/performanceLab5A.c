/*
    Author: Jared Young
    Date: 05 FEB 2019
    Project: Performance Lab 5A
    Description:Write a program to calculate the hypotenuse of a right triangle
                Use the Pythagorean Theorem (a^2 + b^2 = c^2)
                Input the two legs (A and B)
                Output the hypotenuse (C)
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void)
{
    int legA = 0;
    int legB = 0;
    double dblHypotenuse = 0;

    printf("Please input measurements for each side of the triangle separated by a tab: ");
    //Stores user input into integer values while ignoring the tab separator.
    scanf("%i\t%i", &legA, &legB);

    //Error Handling
    //Runs if user inputs suitable measurements.
    if((legA > 0) && (legB > 0))
    {
        //Utilizes sqrt function to find the hypotenuse.
        dblHypotenuse = sqrt((legA * legA) + (legB * legB));
        //Prints hypotenuse as a double hence the %lf.
        printf("The hypotenuse equals %lf\n", dblHypotenuse);
    }
    else
    {
        printf("Wrong input scrub\n");
    }
}