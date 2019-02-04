/*
    Author: Jared Young
    Date: 04 FEB 2019
    Project: Performance Lab 4D
    Description: Part 1:
                 Read a first, middle and last name as input into separate char arrays.
                 Specify a field-width to protect against buffer overflow.
                 Ensure the field-width leaves room for a nul-terminator.
                 Specify a ("\t") as a delimitating character.
                 Print the full name, separating each string with a tab and newline ("\t\n").
                 Part 2:
                 Read two integers from one line.
                 Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14).
                 Reprint the two integers and result as if the answer were being read by a human.
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