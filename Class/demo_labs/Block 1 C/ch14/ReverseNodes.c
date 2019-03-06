#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int num;
    struct node *next;
}Node, *NodePtr;

void printList(NodePtr);
void printReverse(NodePtr);
NodePtr makeNode(int n);

int main()
{
    int n;
    int addedNodes = 0;
    NodePtr top, np, last;
    top = NULL;

    printf("Input Quantity of Node: ");
    scanf("%i", &addedNodes);
    for(int i = 1; i <= addedNodes; i++)
    {
        printf("Input info for %i: ", i);
        scanf("%i", &n);  
        np = makeNode(n);           //create a new node containing n.
        if(top == NULL)             //If there first node is empty
        {
            top = np;               //Store the first created node at the top
        }
        else
        {
            last -> next = np;      //The currently last node points to the newly created node.
        }
        
        last = np;                  //Set the newly created node as the last in list.
    }
    printList(top);
    printf("The list in reverse is:\n");
    printReverse(top);
}

NodePtr makeNode(int n)
{
    NodePtr np =(NodePtr)malloc(sizeof(Node));
    np -> num = n;
    np -> next = NULL;
    return np;

}// end of makeNode

void printList(NodePtr np)
{
    printf("The list in entered order is:\n");
    while (np != NULL)              // as long as there's a node
    { 
        printf("Info = %d\n", np -> num);
        np = np -> next;            //go on to the next node
    }
}

void printReverse(NodePtr np)
{ 
    if(np -> next != NULL)              //Runs as long as there is data in the linked list.
    {
        printReverse(np -> next);       //Recursion: passing the next node in the list.
    }
    printf("Info = %i\n", np -> num);   //Prints the current node num value.
}