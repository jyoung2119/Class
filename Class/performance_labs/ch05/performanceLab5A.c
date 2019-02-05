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
    scanf("%i\t%i", &legA, &legB);

    if((legA > 0) && (legB > 0))
    {

        dblHypotenuse = ((legA * legA) + (legB * legB));
        printf("The hypotenuse equals %lf\n", sqrt(dblHypotenuse));
    }
    else
    {
        printf("Wrong input scrub\n");
    }
}