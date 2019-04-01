/***********************************************************************
    Creators: Joseph Beasley, Jonathan Butler, Onawa Lanier, Jared Young
    Special Thanks To: Grant Ogden
    Project: Pi Day Special "Pizza Time" (Block 1 Project)
    Date: 14 MAR 2019  
***********************************************************************/
#include <stdio.h>
#include <strings.h>
#include "toppings.h"   
#include "pizzaCrust.h"
#include "pizzaSize.h"
#include "newPizza.h"

int main()
{
    NodePtr top = NULL;     //Declare the top node in the list

    int loop = 1;     //Declares and initializes loop condition
    
    while (loop == 1) //setting up the looping menu
    {
        int choice1 = 0;        //Holds menu choice 
        printf("1)New Pizza\n2)Show Existing Pizzas\n3)Order & Quit\n"); //prompt user
        scanf("%d", &choice1); //accept user input

        clear_input();

        if (choice1 == 1)       //If user chooses to create a new pizza
        {
            if(top == NULL)     //If top of linked list is null
            {
                top = newPizza();          //Create new pizza and store it at top of list.
            }
            else
            {
                addNode(top);       //If top exists, create new node.
            }
        }
        else if(choice1 == 2)         //Runs if user wants to display previous orders.
        {
            if(top != NULL)         //If pizzas exist   
            {
                printPizzas(top);   //Pass top of the linked list 
            }
            else                    //If no pizza has been created
            {
                printf("You haven't ordered anything.\n");
            }
        }
        else if(choice1 == 3)         //To exit ordering process
        {
            loop = 0;               //Set counter to loop exit condition
        }
        else                        //If user is illiterate
        {
            printf("ERROR INCORRECT INPUT\n\n");
        }  

    }
    //Display program information at the end of ordering process.
    aboutPage();
}