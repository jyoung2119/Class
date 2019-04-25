#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function prototype
int findED(char *string);

int main()
{
    //Declare and initialize char arrays w/ hard coded strings
    char stringOne[16] = {"underprivilegEd"};
    char stringTwo[15] = {"overprivilegeD"};
    char stringThree[3] = {"ED"};
    char stringFour[13] = {"parsimonious"};
    char stringFive[35] = {"supercalifragilisticexpialidocious"};

    //Set int variables
    int holderOne, holderTwo, holderThree, holderFour, holderFive;

    //Store the return of the findED
    holderOne = findED(stringOne);
    holderTwo = findED(stringTwo);
    holderThree = findED(stringThree);
    holderFour = findED(stringFour);
    holderFive = findED(stringFive);

    system("clear");
    printf("Strings that end with ed:\n");

    //If the int variable = 1, print corresponding string
    if(holderOne == 1)
    {
        printf("%s\n", stringOne);
    }
    if(holderTwo == 1)
    {
        printf("%s\n", stringTwo);
    }
    if(holderThree == 1)
    {
        printf("%s\n", stringThree);
    }
    if(holderFour == 1)
    {
        printf("%s\n", stringFour);
    }
    if(holderFive == 1)
    {
        printf("%s\n", stringFive);
    }
}

//Returns 1 if string ends with "ed"
int findED(char *string)
{
    //Declare two char variables
    //Store second to last and last character
    char letterOne = string[strlen(string) - 2];
    char letterTwo = string[strlen(string) - 1];

    //If those characters are "e" and "d" return 1
    if((letterOne == 'e'||letterOne == 'E')&&(letterTwo == 'd'||letterTwo == 'D'))
    {
        return 1;
    }
    //If not, return 0
    else
    {
        return 0;
    }
}