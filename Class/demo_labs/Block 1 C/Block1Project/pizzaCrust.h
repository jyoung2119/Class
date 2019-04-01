#ifndef PIZZA_CRUST
#define PIZZA_CRUST

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * crustFunc() //defines char function
{
    int choice = 0;
    char * crustyString = NULL; //declares value of char at an address, lets you input a string as a linked list so no array necessary

    do
    {   
        printf("Which crust would you like? Choose\n 1- Thick\n 2- Hand-tossed\n 3- Thin\n 4- Cheese-stuffed\n 5- Deep-dish\n");
        scanf("%i", &choice); //scans in a string
        clear_input();

        if(choice < 1 || choice > 5)
        {
            printf("ERROR: Enter a number from 1-5\n");
        }
        else 
        {
            //Stores crust type 
            switch(choice)
            {
            case 1:
                crustyString = "Thick";
                break;
            case 2: 
                crustyString = "Hand-Tossed";
                break;           
            case 3: 
                crustyString = "Thin";
                break;            
            case 4:
                crustyString = "Cheese-Stuffed";
                break;            
            case 5:
                crustyString = "Deep Dish";
                break;
            }           
        }    
    }while(crustyString == NULL); 

    return crustyString;    //returns value at address of crustyString
}
#endif     