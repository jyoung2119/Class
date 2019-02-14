#include <stdio.h>
#include <string.h>

int main()
{
    char myArray[256] = {0};
    char newArray[256] = {0};

    printf("Input String: ");
    scanf("%255[^\n]s", myArray);
    int reverseCounter = strlen(myArray);
    int endString = reverseCounter - 1;

    for(int i = 0; i < reverseCounter + 1; i++)
    {
        newArray[i] = myArray[endString];
        endString--;
    }

    printf("New string = %s\n", newArray);
    return 0;
}