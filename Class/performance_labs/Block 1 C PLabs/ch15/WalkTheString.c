/*
    Author: Jared Young
    Date: 01 MAR 2019
    Project: Performance Lab 15A (Walk The String)
    Description: READ A STRING AND WRITE IT TO A ZEROIZED CHAR ARRAY.
                 USE ASSERT() TO VERIFY THE LAST ELEMENT OF THE CHAR ARRAY IS NUL.
                 STEP #1- SAFELY WRITE TO THE ARRAY.
                 STEP #2- BREAK ASSERT() BY UNSAFELY READING INPUT INTO THE CHAR ARRAY.
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
    //Zeroized char array
    char stringArray[20] = {0};

    printf("Input a string: ");

    //Unsafely scan input
    //Input 20 char string to break assert.
    //scanf("%s", &stringArray);

    //Safely write to array
    fgets(stringArray, sizeof(stringArray), stdin);

    //USE ASSERT() TO VERIFY THE LAST ELEMENT OF THE CHAR ARRAY IS NULL.
    assert(stringArray[19] == '\0');

    printf("String entered: %s\n", stringArray);
}