#ifndef NEW_PIZZA          //Error handling
#define NEW_PIZZA

#include <stdio.h>
#include <stdlib.h>
#include "toppings.h"


typedef struct pizza        //Declare a linked list
{
    char *size;
    char *crust;
    toppings_t *toppings;
    struct pizza *next;
}Node, *NodePtr;

//Creates a new pizza
NodePtr newPizza()
{
    NodePtr current;            //Declare current node in list
    char *tempSize;             //Declare temporary pointer to store size
    char *tempCrust;            //Declare temporary pointer to store crust.
    toppings_t *tempToppings;   //Declare temporary pointer with type link list to store list of toppings
    
    printf("\nChoose the desired size of the pizza.\n");
    //Store size selection from sizza()
    tempSize = sizza();             
    printf("\nChoose the desired type of crust.\n");
    //Store crust selection
    tempCrust = crustFunc();
    printf("\nChoose your desired toppings.\n");
    //Store selected toppings
    tempToppings = toppings();

    current = (NodePtr)malloc(sizeof(Node));        //Allocate memory for current node
    current -> size = tempSize;                     //Store size, crust, and toppings into node
    
    current -> crust = tempCrust;
    
    current -> toppings = tempToppings;

    current -> next = NULL;                         //Set current node to the end of list
    
    //return the node
    return current;
}

//static int pizzaCount = 1;      //Counter for displaying pizza number in the order
int pizzaCount = 1;

//Prints the list of pizza based of the top node
void printPizzas(NodePtr np)
{
    
    if(np == NULL)          //If the node passed is empty
    {
        pizzaCount = 1;     //Sustain current value
        return;            //Return nothing
    }

    //Set toppings list to current node pointer.
    toppings_t * current = np->toppings;
    
    printf("\nPizza #%d: %s pizza with %s crust topped with", pizzaCount, np->size, np->crust); 

    //Runs while toppings exist
    while(current != NULL)
    {
        printf(" %s", current->data);
        current = current->next;        //Move to next node to get the stored toppings
    }
    printf(".\n\n");

    //Increment pizza counter
    pizzaCount++;
    //Recursion passing next pizza to be printed.
    printPizzas(np->next);    
}

//Displays program info
void aboutPage()
{
    //Declare file pointer
    FILE *pFile;
    //Declare array to store characters in the file.
    char aboutInfo[256];

    //Open file and store in the pointer
    pFile = fopen("./AboutPage.txt","r");

    //Run if file opens
    if(pFile != NULL)
    {
        printf("\n");
        //Run until the end of the file.
        while(!feof(pFile))
        {
            //Store the contents into the array
            fgets(aboutInfo, 256, pFile);
            //Print to terminal
            printf("%s", aboutInfo);
        }
        printf("\n");
        //Close the file
        fclose(pFile);
    }
    //Error handling
    else
    {
        printf("IO ERROR: PROBLEM WITH FILE");
    }
}

//Create nodes for additional pizzas
void addNode(NodePtr head)
{
    //Declare and set current node as the top of the list.
    NodePtr current = head;

    //While there are still nodes in the list
    while(current->next != NULL)
    {
        //set current node to the next node in the list
        current = current->next;      
    }
    
    current->next = malloc(sizeof(Node));       //Allocate memory for the next node
    current->next = newPizza();                 //Create a new pizza to store in the next node
    current = current->next;                    //Set next node as the current node

}

#endif