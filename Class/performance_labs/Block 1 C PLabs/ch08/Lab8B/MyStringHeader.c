// MyStringHeader.c
#include <stdio.h>
#include <ctype.h>

#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

//Handles the printing of the count of each letter character in a string.
extern int print_the_count(char * inputString, int strLen)
{
    char tempChar = 0;      // Current char being acted on
    int table[26] = {0};    // Alpha
    int count = 0;

    //Error Handling
    if (!inputString)
    {
        return ERR_NULL_POINTER;
    }
    else if (strLen <= 0)
    {
        return ERR_INVALID_LENGTH;
    }

    for (int i = 0; i < strLen; i++)
    {
        if (inputString[i] >= 65 && inputString[i] <= 122)
        {
            tempChar = inputString[i];
            tempChar = toupper(tempChar);
            table[tempChar - 65] += 1;
            count++;
        }
    }

    // Print the table
    for (int i = 0; i < sizeof(table)/sizeof(table[0]); i++)
    {
        printf("%c: %d\n", i + 65, table[i]);
    }
    return count;
}

//Handles the reversal of a user inputted string.
extern int reverse_it(char * forwardString, int strLen)
{
    //Holds the reversed string.
    char tempArray[256] = {0};
    //Stores the length of the string array into a counter
    int reverseCounter = strLen;
    //The actual last index of the string.
    //reverseCounter = the dimension of the array.
    int endString = reverseCounter - 1;

    //Runs if pointer is null.
    if (!forwardString)
    {
        return ERR_NULL_POINTER;
    }
    //If the string length is <= 0, throw an error
    else if (strLen <= 0)
    {
        return ERR_INVALID_LENGTH;
    }

    //Loops for the dimension length of the string.
    for(int i = 0; i < reverseCounter + 1; i++)
    {
        //Stores the last character into the beginning of a temp array.
        tempArray[i] = forwardString[endString];
        //Decrements to the previous index.
        endString--;
    }

    //Prints the reversed string.
    printf("New string = %s\n", tempArray);

    return 0;
}