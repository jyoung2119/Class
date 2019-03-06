//ADDING TO END OF LINKED LIST.

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int num;
    struct node *next;
}Node, *NodePtr;

void printlist(NodePtr);
NodePtr makeNode(int);

int main()
{
    int n;
    NodePtr top, np, last;

    top = NULL;

    if(scanf("%d", &n) != 1)        //Runs if scanf fails
    {
        n = 0;
    }
    while(n != 0)                   //Runs until user enters 0.
    {
        np = makeNode(n);           //create a new node containing n.
        if(top == NULL)
        {
            top = np;               //Set top as first node.
        }
        else
        {
            last -> next = np;      //set last -> next for other nodes.
        }

        last = np;                  //Update last to new node.

        if(scanf("%d", &n) != 1)    //Runs if scanf fails
        {
            n = 0;
        }
    }

    printlist(top);

}

//Makes node
NodePtr makeNode(int n)
{
    NodePtr np =(NodePtr)malloc(sizeof(Node));
    np -> num = n;
    np -> next = NULL;
    return np;
}

//Prints contents of struct
void printlist(NodePtr np)
{
    //Loops as long as there is a node.
    while(np != NULL)
    {
        printf("%d\n", np -> num);
        np = np -> next;                //Go on to next node. 
    }
}