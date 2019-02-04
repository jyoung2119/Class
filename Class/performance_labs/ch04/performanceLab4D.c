/*
    Author: Jared Young
    Date: 04 FEB 2019
    Project: Performance Lab 4D
    Description: 
*/
#include <stdio.h>

int main()
{
    char firstName[256] = {0};
    char middleName[256] = {0};
    char lastName[256] = {0};

    //Part 1
    printf("Enter your full name with each name separated by a tab: ");
    scanf("%255s\t%255s\t%255s", &firstName, &middleName, &lastName);
    printf("Your full name is: \n%s\t\n%s\t\n%s\n", firstName, middleName, lastName);

    //Part 2
    int intFirstNumber = 0;
    int intSecondNumber = 0;
    
    printf("Enter two integers, separated by a *, to be multiplied: ");
    scanf("%i%*c%i", &intFirstNumber, &intSecondNumber);
    int intResult = intFirstNumber * intSecondNumber;
    printf("The result of %i mutltiplied by %i is %i.\n", intFirstNumber,intSecondNumber, intResult);
    
    return 0;
}