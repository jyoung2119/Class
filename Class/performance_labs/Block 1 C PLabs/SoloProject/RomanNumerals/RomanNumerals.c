#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Prototypes
void encrypt();
void printRomanNumerals();
void displayRoman(int num);
void displayDec(char *roman);

int main()
{
    char key[4] = {"idf"};          //key to display 
    char userInput[256] = {0};      //stores user inputted key
    int userNumber = 0;             //Stores integer to convert to Roman
    char userRoman[256] = {0};      //Stores Roman numerals to convert to integer

    printf("Enter an Integer: ");
    if(scanf("%i", &userNumber) != 1)       //Error handling
    {
        printf("Why do you suck?\n");
        return 0;
    }

    printf("Enter Roman Numerals (I, V, X, L, C): ");
    scanf("%s", userRoman);

    for(int i = 0; i < strlen(userRoman); i++)          //Error handling
    {
        if(userRoman[i] != 'I' && userRoman[i] != 'V' && userRoman[i] != 'X'
            && userRoman[i] != 'L' && userRoman[i] != 'C')
        {
            printf("Why do you suck?\n");
            return 0;
        }
        else if((userRoman[i] == 'I' && userRoman[i+1] == 'I' && userRoman[i-1] == 'I' && userRoman[i+2] == 'I')||
                (userRoman[i] == 'X' && userRoman[i+1] == 'X' && userRoman[i-1] == 'X' && userRoman[i+2] == 'X')||
                (userRoman[i] == 'V' && userRoman[i+1] == 'V')||
                (userRoman[i] == 'L' && userRoman[i+1] == 'L')||
                (userRoman[i] == 'C' && userRoman[i+1] == 'C' && userRoman[i-1] == 'C' && userRoman[i+2] == 'C'))
        {
            printf("Why do you suck?\n");
            return 0;
        }
    }

    printf("Enter Key: ");
    scanf("%s", userInput);

    if(strcmp(key, userInput) == 0)         //If user inputs correct key
    {
        // printf("DECIMAL ROMAN\n");
        // printf("~~~~~~~~~~~~~\n");
        // printRomanNumerals();

        displayRoman(userNumber);           
        displayDec(userRoman);
    }
    else                                   //Error handling
    {
        printf("Scrub\n");
        encrypt();
    }    
}

//Display Roman Numerals based off of user input
void displayRoman(int num)
{
    printf("Roman Numeral: ");
    switch (num / 10)              //Prints the tens place
    {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
        case 10:
            printf("C");
        default:
            break;
    }
    switch (num % 10)               //Prints ones place if there is a remainder 
    {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
        default:
            break;
    }
    printf("\n");
}

//Display integer equivalent of Roman numeral user input
void displayDec(char *roman)
{   
    int total = 0;             //Stores the decimal value

    for(int r = 0; r < strlen(roman); r++)      //Loops for length of Roman numeral input
    {
        if(roman[r] == 'C')                 //Manipulates total based of off 100 numeral
        {
            if(roman[r-1] == 'X')           //If previous character is X
            {
                total += 80;                //Add 80 to enter the 90's (XC...)
            }
            else
            {
                total += 100;               //Take true value of C
            }
        }
        else if(roman[r] == 'L')        //Manipulates total based of off 50 numeral
        {
            if(roman[r-1] == 'X')       //If previous character is X
            {
                total += 30;            //Add 30 to enter the 40's (XL...)
            }
            else
            {
                total += 50;            //Take true value of L
            }
        }
        else if(roman[r] == 'X')        //Manipulates total based of off 10 numeral
        {
            if(roman[r-1] == 'I')       //If previous character is I
            {
                total += 8;             //Add 8 to equal 9 (IX)
            }
            else
            {
                total += 10;           //Take true value of X
            }
        }
        else if(roman[r] == 'V')        //Manipulates total based of off 5 numeral
        {
            if(roman[r-1] == 'I')       //If previous character is I
            {
                total += 3;             //Add 3 to equal 4 (IV)
            }
            else
            {
                total += 5;             //Take true value of V
            }
        }
        else if(roman[r] == 'I')        //Take true value of I
        {
            total += 1;
        }
    }
    printf("Decimal Value: %i\n", total);
}

//Displays copy pasta instead of desired information
void encrypt()
{
    FILE *pFile;                //Declare file pointer
    char copyPasta[1024];       //Array to store contents of file

    pFile = fopen("./copyPasta.txt", "r");      //Open file and store in the pointer

    if(pFile != NULL)           //If file was opened
    {
        while(!feof(pFile))     //Until end of file
        {
            fgets(copyPasta, 1024, pFile);      //Copy contents into array
            printf("%s", copyPasta);
        }
        printf("\n");
        fclose(pFile);      //Close file
    }
    else
    {
        printf("IO ERROR: PROBLEM WITH FILE\n");
    }
}

//Prints list of Roman Numerals 1-100
//No longer required...
void printRomanNumerals()
{
    int numeralTracker = 0;

    for(int j = 1; j <= 9; j++)
    {
        numeralTracker = j;
        printf("%d      ", j);
        switch (numeralTracker % 10) 
        {
            case 1:
                printf("I\n");
                break;
            case 2:
                printf("II\n");
                break;
            case 3:
                printf("III\n");
                break;
            case 4:
                printf("IV\n");
                break;
            case 5:
                printf("V\n");
                break;
            case 6:
                printf("VI\n");
                break;
            case 7:
                printf("VII\n");
                break;
            case 8:
                printf("VIII\n");
                break;
            case 9:
                printf("IX\n");
                break;
            default:
                printf("\n");
                break;
        }
    }

    for(int i = 10; i <= 100; i++)
    {
        numeralTracker = i;
        printf("%d      ", i);

        switch (numeralTracker / 10) 
        {
            case 1:
                printf("X");
                break;
            case 2:
                printf("XX");
                break;
            case 3:
                printf("XXX");
                break;
            case 4:
                printf("XL");
                break;
            case 5:
                printf("L");
                break;
            case 6:
                printf("LX");
                break;
            case 7:
                printf("LXX");
                break;
            case 8:
                printf("LXXX");
                break;
            case 9:
                printf("XC");
                break;
            case 10:
                printf("C");
            default:
                printf("\n");
                break;
        }
        switch (numeralTracker % 10) 
        {
            case 1:
                printf("I\n");
                break;
            case 2:
                printf("II\n");
                break;
            case 3:
                printf("III\n");
                break;
            case 4:
                printf("IV\n");
                break;
            case 5:
                printf("V\n");
                break;
            case 6:
                printf("VI\n");
                break;
            case 7:
                printf("VII\n");
                break;
            case 8:
                printf("VIII\n");
                break;
            case 9:
                printf("IX\n");
                break;
            default:
                printf("\n");
                break;
        }
    }
}