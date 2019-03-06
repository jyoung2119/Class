/*
    Author: Jared Young
    Date: 19 FEB 2019
    Project: Performance Lab 10.6A
    Description: PREPROCESSOR DIRECTIVES
                 Write a C program with preprocessor directives to:
                    Combine two string literals
                    Wrap those string literals in quotes
                    Define a constant buffer size of 64
                 Define an array:
                    Of standard buffer size
                    Assign the wrapped string literals to the array
                 Print the array
*/
#include <stdio.h>

//# operator converts token into a string.
#define STRINGIFY(x) #x
//Combines the two string literals using ## operator.
#define MERGE(x, y) STRINGIFY(x##y)
//Puts the combined strings within quotes.
#define QUOTES(x,y) "\""MERGE(x,y)"\""
//Define a constant buffer size of 64
#define BUFFER 64

int main()
{
    //Calls the merge define statement, passing two string literals.
    puts(MERGE(Young, Money));
    //Calls the quote define statement.
    puts(QUOTES(Young, Money));
    //Stores the quote wrapped string literals into an array.
    char myArray[BUFFER] = {QUOTES(Young, Money)};
    //Prints contents of the array.
    puts(myArray);

    return 0;
}