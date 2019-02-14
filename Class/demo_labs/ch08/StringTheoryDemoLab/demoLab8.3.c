#include <stdio.h>
#include <string.h>
#include "MyStringHeader.h"

int main()
{
    char userString[256] = {0};
    char * inputString[] = {userString};

    printf("Input a string: ");
    fscanf(stdin, "%255[^\n]c", &userString);
    print_the_count(* inputString, strlen(userString));

    /*char someString[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'}; // Non null term
	int someStringLen = 11;

	int counter = print_the_count(someString, someStringLen);

	printf("\n\n\n\nTotal count: %d", counter);*/

    return 0;
}