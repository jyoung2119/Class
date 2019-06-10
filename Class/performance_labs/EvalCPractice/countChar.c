#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int charVal = 0;
    int total = 0;
    char userInput[256] = {0};
    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);
    char *pos = strchr(userInput, '\n');           
    if(pos) *pos = 0; 

    for(int i = 0; i < strlen(userInput); i++)
    {
        total += (int)userInput[i];
    }
    printf("%s\n", userInput);
    printf("String ASCII Total: %i\n", total);
}