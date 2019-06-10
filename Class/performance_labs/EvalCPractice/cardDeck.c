#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int count = 5;
    int sHolder, fHolder;
    char suits[4][10] = {"Hearts", "Diamonds", "Spades", "Clubs"};
    char face[14][6] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    int arrHolders[10] = {0};

    srand(time(0));

    printf("YOUR CARDS:\n");
    for(int i = 0; i < count; i++)
    {
        int indexS = (rand() % (4));
        sHolder = indexS;
        int indexF = (rand() % (14));
        fHolder = indexF;
        arrHolders[i] = sHolder;
        arrHolders[i+1] = fHolder;

        //printf("%s of %s\n", face[indexF], suits[indexS]);
    }
}