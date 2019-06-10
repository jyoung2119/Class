#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char userInput[256] = {0};
    int total = 0;

    printf("Enter Stuff: ");
    fgets(userInput, sizeof(userInput), stdin);
    char *pos = strchr(userInput, '\n');           
    if(pos) *pos = 0;

    for(int i = 0; i< strlen(userInput); i++)
    {
        total += (int)userInput[i];
    }

    printf("Total = %i\n", total);
}