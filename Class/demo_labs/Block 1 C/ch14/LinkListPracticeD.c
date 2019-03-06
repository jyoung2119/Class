/**SORTS BY ASCENDING ORDER**/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;

} Node, *NodePtr;

void printList(NodePtr);
NodePtr addInPlace(NodePtr, int);
NodePtr makeNode(int);

int main()
{  
    int n;
    NodePtr top = NULL;
    if(scanf("%d",&n) != 1) 
    {
        n = 0;
    }
    while(n != 0)
    {
        top = addInPlace(top,n);
        if(scanf("%d",&n) !=1) 
        {
            n = 0;
        }
    }

    printList(top);
}

NodePtr addInPlace(NodePtr top, int n)
{
    NodePtr np, curr, prev, makeNode(int);

    np = makeNode(n);
    prev = NULL;
    curr = top;
    while(curr !=NULL && n > curr->num)
    {
        prev = curr;
        curr = curr-> next;
    }
    if (prev == NULL)           /// new number must be added at the top
    {
        np -> next = top;
        return np;             /// the top of the list has changed to the new node
    }
    np -> next = curr;
    prev -> next = np;
    return top; //

}// end of addInplace

NodePtr makeNode(int n)
{
    NodePtr np =(NodePtr)malloc(sizeof(Node));
    np -> num = n;
    np -> next = NULL;
    return np;

}// end of makeNode

void printList(NodePtr np)
{
    printf("Function call works\n");
    while (np != NULL)              // as long as there's a node
    { 
        printf("%d\n", np -> num);
        np = np -> next;            //go on to the next node
    }
}