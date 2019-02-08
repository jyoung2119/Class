
#include <stdio.h>

int showMenu(void);

int main(void)
{
    int userInput = 0;
    int menuSelection = 3;
    printf("Input a number: ");
    scanf("%d", &userInput);   

    do
    {
        showMenu();
        scanf("%d", &menuSelection);
        switch(menuSelection)
        {
            case 0:
                printf("\nEXITING...\n");
                break;

            case 1:
                printf("Octal: %o\n", userInput);
                break;
            
            case 2:
                printf("Decimal: %d\n", userInput);
                break;
            
            case 3:
                printf("Hexadecimal: %X\n", userInput);
                break;

            case 4:
                printf("Character: %c\n", userInput);
                break;

            case 5:
                printf("Enter a new number to display: ");
                userInput = 0;
                scanf("%d", &userInput);

            default:
                printf("ERROR: TRY AGAIN\n");
                break;
        }
    }while(menuSelection != 0);

    return 0;
}

int showMenu(void)
{
    printf("What do you want it converted to?\n");
    printf("1: Octal\n2: Decimal\n3: Hex\n4: Character\n5: New Number\n0: Exit: ");
    return 0;
}

