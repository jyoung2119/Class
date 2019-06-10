#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int countMatch(int *arr, int x);

int main()
{
    int roll = 0;
    int diceRolls[6] = {0};
    int flag = 1;
    int matchCount = 0;
    int iterations = 0;
    srand(time(0));
    while(flag == 1)
    {
        iterations++;
        for(int i = 0; i < 6; i++)
        {
            roll = (rand() % (6 - 1 + 1)) + 1;
            diceRolls[i] = roll;
            printf("%i ", diceRolls[i]);
        }
        printf("\n");
        matchCount = countMatch(diceRolls, diceRolls[0]);
        if(matchCount == 4)
        {
            flag--;
        }
        matchCount = countMatch(diceRolls, diceRolls[1]);
        if(matchCount == 4)
        {
            flag--;
        }
        matchCount = countMatch(diceRolls, diceRolls[2]);
        if(matchCount == 4)
        {
            flag--;
        }
        matchCount = countMatch(diceRolls, diceRolls[3]);
        if(matchCount == 4)
        {
            flag--;
        }
        matchCount = countMatch(diceRolls, diceRolls[4]);
        if(matchCount == 4)
        {
            flag--;
        }
        matchCount = countMatch(diceRolls, diceRolls[5]);
        if(matchCount == 4)
        {
            flag--;
        }
    }
    printf("It took %i iterations to get 4 matching rolls!\n", iterations);

}

int countMatch(int *arr, int x)
{
    int matches = 0;
    for(int k = 0; k < 6; k++)
    {
        if(x == arr[k])
        {
            matches++;
        }
    }
    return matches;
}