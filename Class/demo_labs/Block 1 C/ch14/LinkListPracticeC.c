#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stock 
{
    char symbol[5];
    int quantity;
    float price;
    struct stock *next;
};
struct stock *first;
struct stock *current;
struct stock *new;

int main()
{ 
    //Create an instance of the struct.
    //struct stock *invest;

    //Allocate memory for instance of the struct.
    //invest = (struct stock *)malloc(sizeof(struct stock));

    first = (struct stock *)malloc(sizeof(struct stock));

    if(first == NULL)
    {
        puts("Error");
        exit(1);
    }

    current = first;
    //Assign data to the instance.
    strcpy(current -> symbol, "GOOG");
    current -> quantity = 100;
    current -> price = 801.19;
    current -> next = NULL;

    new = (struct stock *)malloc(sizeof(struct stock));
    if(new == NULL)
    {
        puts("Error");
        exit(1);
    }

    current -> next = new;
    current = new;
    strcpy(current -> symbol, "YHOO");
    current -> quantity = 50;
    current ->price = 400.00;
    current ->next = NULL;

    //Display data
    puts("Investment Portfolio");
    printf("Symbol\tShares\tPrice\tValue\n");
    current = first;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current->symbol, current->quantity, current->price, current->quantity*current->price);
    current = current->next;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current->symbol, current->quantity, current->price, current->quantity*current->price);

    return 0;
}