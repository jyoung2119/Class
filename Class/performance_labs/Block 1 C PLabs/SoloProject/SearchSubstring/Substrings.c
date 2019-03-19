#include <stdio.h>
#include <string.h>

//Prototypes
void substringSearch(char *string, char *sub); 
int clear_input();

int main()
{
    char userString[256] = {0};     //Stores string input
    char userSearch[256] = {0};     //Stores search word input
    char key[4] = {"idf"};          //The decryption key
    char userInput[256] = {0};      //Stores user key input

    printf("Enter a string: ");
    fgets(userString, sizeof(userString), stdin);   //Store 
    if(userString[0] == '\n')                       //Error Handling
    {
        printf("No string entered. Try again.\n");
        return 0;
    }
    
    printf("Enter a search string: ");
    fgets(userSearch, sizeof(userSearch), stdin);
    char *pos = strchr(userSearch, '\n');           //hacky way to get rid of \n at end of string(from fgets())
    if(pos) *pos = 0;                               //Sets location of \n to 0

    if(userSearch[0] == '\n')                       //Error handling
    {
        printf("No search string entered. Try again.\n");
        return 0;
    }

    int loop = 0;
    while(loop != 1)
    {
        printf("Enter Key: ");
        scanf("%s", userInput);

        if(strcmp(key, userInput) == 0)
        {
            loop = 1;
            substringSearch(userString, userSearch);
        }
        else
        {
            printf("SCRUB!\n");
        }
    }       
}

//Searches for search word and prints results
void substringSearch(char *string, char *sub)
{
    char *searchPtr;                    //Declare char pointer
    searchPtr = strstr(string, sub);    //Set it to the location of search word

    if(searchPtr != NULL)               //If searchword is found
    {
        printf("First Appearance of %s: ", sub);       //Print the resulting substring
        printf("%s\n", searchPtr);

        searchPtr = strstr((searchPtr + 1), sub);      //Search for possible occurence.

        if(searchPtr != NULL)           //If searchword is found again
        {
            printf("Second Appearance of %s: ", sub);   //Print second substring
            printf("%s\n", searchPtr);
        }
    }
    else
    {
        printf("%s not found in original string.\n", sub);      //Print if search word doesn't exist.
    }
}