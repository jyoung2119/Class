#ifndef TOPPINGS 
#define TOPPINGS
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <malloc.h>

//Link list to store toppings list
typedef struct toppings{
    struct toppings* next;
    char *data;
}toppings_t;

int clear_input();

//Displays topping selection menu
//Returns the top node of the list
toppings_t* toppings()
{
    int choice;         //Holds user choice
    int loop = 1;       //Loop condition
    toppings_t* head = (toppings_t*)malloc(sizeof(toppings_t));     //Allocate memory for the top node
    toppings_t* current;     //Declare current node
    do
    {
        choice = 0;         
        printf("select a topping to add:1)Sausage 2)Pepperoni 3)Bacon 4)Ham 5)Onions 6)Mushrooms 7)Green Peppers 8)Banana Peppers 9)Pineapple 10) Finish Selecting Toppings: ");
        scanf("%i",&choice);

        clear_input();          //clear stdin
        
        //Runs if user wants toppings
        if (choice != 10) 
        {
            //If no topping has been chosen
            if(head->data == NULL)
            {
                //Set current node to top of the linked list
                current = head;
            }
            //Wack error handling
            //Stops the creation of empty nodes
            else if(choice != 1&&choice != 2&&choice != 3&&choice != 4&&
            choice != 5&&choice != 6&&choice != 7&&choice != 8&&
            choice != 9)
            {
                //does nothing but avoids else
            }
            //Runs for additional toppings
            else
            {
                current->next = malloc(sizeof(toppings_t));     //Allocate memory for the next topping
                current = current->next;                        //Move the current node to next node
            }
        }
        
        //Store each topping choice
        switch(choice)
        {
            case 1:
                current ->data ="Sausage";       
                break;
            case 2:
                current ->data ="Pepperoni";
                break;
            case 3:
                current ->data="Bacon";
                break;
            case 4:
                current ->data="Ham";
                break;
            case 5:
                current ->data="Onions";
                break;
            case 6:
                current ->data="Mushrooms";
                break;
            case 7:
                current ->data="Green Peppers";
                break;
            case 8:
                current ->data="Banana Peppers";
                break;
            case 9:
                current ->data="Pineapple";
                break;
            case 10:
                loop = 0;                   //Set loop variable to break out of loop
                if(head->data == NULL)      //Runs if user doesn't want toppings
                {
                    head->data = "Nothing. You degenerate";
                }
                break;
            default:                            //Error handling
                printf("Why do you suck?\n");
                break;
            // default:
            //     loop = 0;                   //Change loop variable to break out of topping selection
            //     if(head->data == NULL)      //Runs if user doesn't want toppings
            //     {
            //         head->data = "Nothing. You degenerate";
            //     }
        }
    }while (loop == 1);

    printf("\n");
    
    return head;            //Return top of the list    
}

//Clears stdin
int clear_input()
{
   while(getchar() != '\n');
}

#endif