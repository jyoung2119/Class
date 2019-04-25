#include <stdio.h>
#include <stdlib.h>

//Function prototype
int findTheB(char *string);

int main()
{
    //Declare and initialize char arrays w/ hard coded strings
    char stringOne[27] = {"What is going on my dudes?"};
    char stringTwo[22] = {"bhocolate bip bookies"};
    char stringThree[46] = {"Bob brought the box of bricks to the basement"};
    char stringFour[10] = {"123456789"};
    char stringFive[93] = {"A purple pig and a green donkey flew a kite in the middle of the night and ended up sunburnt"};
    
    //Set int variables
    int holderOne, holderTwo, holderThree, holderFour, holderFive;

    //Store the return of the findTheB
    holderOne = findTheB(stringOne);
    holderTwo = findTheB(stringTwo);
    holderThree = findTheB(stringThree);
    holderFour = findTheB(stringFour);
    holderFive = findTheB(stringFive);

    system("clear");
    printf("Strings that start with b:\n");

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

//Returns 1 if string starts with the letter "b"
int findTheB(char *string)
{
    //If first index is a "b", return 1
    if(string[0] == 'b' || string[0] == 'B')
    {
        return 1;
    }
    //If not, return 0
    else
    {
        return 0;
    }
}