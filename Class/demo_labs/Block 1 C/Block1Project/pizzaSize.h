#ifndef PIZZA_SIZE
#define PIZZA_SIZE

#include <stdio.h>
#include <ctype.h>

//Displays pizza size menu
//Allows user to choose and returns choice.
char * sizza()
{
    int choice = 0;                //Holds user choices
    char *pizzaSize = NULL;        //Holds corresponding pizza size

    //Loops while user hasn't picked a pizza size
    do
    {
        printf("\n[PIZZA SIZES]\n");
        printf("|Personal[1]:  8\"|\n|Small   [2]: 10\"|\n|Medium  [3]: 12\"|\n|Large   [4]: 14\"|\n|X-Large [5]: 16\"|\n|Murica  [6]: 24\"|\n");
        printf("Select your size: ");
        scanf("%d", &choice);

        clear_input();

        //Error handling
        if (choice < 1 || choice > 6)
        {
            printf("Error in input\nRestarting size selection\n");
        }
        else
        {
            //Stores corresponding pizza size and returns it.
            switch(choice)
            {
                case 1:
                    pizzaSize = "8\"";
                    break;
                case 2:
                    pizzaSize = "10\"";
                    break;
                case 3:
                    pizzaSize = "12\"";
                    break;
                case 4:
                    pizzaSize = "14\"";
                    break;
                case 5:
                    pizzaSize = "16\"";
                    break;
                case 6:
                    pizzaSize = "24\"";
                    break;
                default:
                    break;
            }       
        }   
    }while(pizzaSize == NULL);
    return pizzaSize; 
}
#endif