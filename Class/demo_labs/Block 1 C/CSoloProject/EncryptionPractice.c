#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encryptStuff(char *str);
void wordTracker(char *str);
void pigConversion(char *str);

int main()
{
    //char string[15] = {"You Suck Scrub"};
    char string[256] = {0};
    char key[4] = {"IDF"};
    char userInput[256] = {0};

    printf("Enter Stuff: ");
    fgets(string, sizeof(string), stdin);
    char *pos = strchr(string, '\n');           //hacky way to get rid of \n at end of string(from fgets())
    if(pos) *pos = 0;
    printf("Regular String: ");
    printf("%s\n", string);

    printf("Pig Latin: ");
    //pigConversion(string);
    wordTracker(string);

    printf("Enter Key: ");
    scanf("%s", userInput);

    if(strcmp(key, userInput) == 0)
    {
        printf("Encrypted String: ");
        encryptStuff(string);
    }
    else
    {
        printf("SCRUB!\n");
    }
}

void encryptStuff(char *str)
{
    char result[256] = {""};

    for(int i = 0; i < strlen(str); i++)
    {
        if(isupper(str[i]))
        {
            //result += char(int(str[i] + 1 - 65) % 26 + 65);
            result[i] = (int)str[i] + 1;
        }
        else
        {
            //result += char(int(str[i] + 1 - 97) % 26 + 97);
            result[i] = (int)str[i] - 1;
        }
    }
    printf("%s\n", result);

    for(int j = 0; j < strlen(result); j++)
    {
        if(isupper(str[j]))
        {
            //result += char(int(str[i] + 1 - 65) % 26 + 65);
            result[j] = (int)result[j] - 1;
        }
        else
        {
            //result += char(int(str[i] + 1 - 97) % 26 + 97);
            result[j] = (int)result[j] + 1;
        }
    }
    printf("Decrypted String: ");
    printf("%s\n", result);
}

void wordTracker(char *str)
{
    char wordHolder[20] = {0};
    char *token;
    char s[] = " ";

    token = strtok(str, s);

    while(token != NULL)
    {
        pigConversion(token);
        token = strtok(NULL, s);
    }
    printf("\n");
}

void pigConversion(char *str)
{
    char translation[256] = {0};
    char tempString[256] = {0};
    char tempWord[256] = {0};
    char consonantEnd[3] = {"ay"};
    char vowelEnd[4] = {"way"};
    int consonantCount = 0;

    if(str[0] != 'a'&&str[0] != 'A'&&
        str[0] != 'e'&&str[0] != 'E'&&
        str[0] != 'i'&&str[0] != 'I'&&
        str[0] != 'o'&&str[0] != 'O'&&
        str[0] != 'u'&&str[0] != 'U')
    {   
        memmove(tempString, str + 1, (strlen(str) - 1));
        tempString[strlen(tempString)] = str[0];
        printf("%s ", strcat(tempString, consonantEnd));
    }
    else
    {
        strcpy(tempString, str);
        strcat(tempString, vowelEnd);
        printf("%s ", tempString);
    }

    //Code for consonant clusters(not working)
    /*for(int i = 1; i < strlen(str); i++)
        {
            if(str[i] != 'a'&&str[i] != 'A'&&
                str[i] != 'e'&&str[i] != 'E'&&
                str[i] != 'i'&&str[i] != 'I'&&
                str[i] != 'o'&&str[i] != 'O'&&
                str[i] != 'u'&&str[i] != 'U')
            {
                if(str[i+1] == 'a'&&str[i+1] == 'A'&&
                    str[i+1] == 'e'&&str[i+1] == 'E'&&
                    str[i+1] == 'i'&&str[i+1] == 'I'&&
                    str[i+1] == 'o'&&str[i+1] == 'O'&&
                    str[i+1] == 'u'&&str[i+1] == 'U')
                {
                    break;
                }
                else
                {
                    consonantCount++;
                }
            }
        }
        for(int k = 0; k < consonantCount; k++)
        {
            tempString[strlen(tempString)] = str[k];
        }*/
}