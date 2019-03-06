#include <stdio.h>

int main()
{
    char buff[4];                        // Will store string
    printf("Enter a string: ");          // Prompts user string
    fgets(buff, sizeof(buff), stdin);    // Stores user string
    printf("Your string was: ");         // Prefaces output
    fputs(buff, stdout);   
}