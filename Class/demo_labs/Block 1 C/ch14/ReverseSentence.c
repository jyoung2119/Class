#include <stdio.h>
#include <stdlib.h>

typedef struct sentence
{
    char ch;
    struct sentence *next;
}Node, *NodePtr;

void printSentence(NodePtr);
void printReverse(NodePtr);

int main()
{
	NodePtr top = NULL, last, np;

    printf("Please input a sentence: ");
    char c = getchar();
	while (c != '\n') 
    {
		np = (NodePtr) malloc(sizeof(Node));
		np -> ch = c;
		np -> next = NULL;
		if (top == NULL) top = np;
		else last -> next = np;
		last = np;
		c = getchar();
	}
    printSentence(top);
    printf("The sentence reversed:\n");
    printReverse(top);
    printf("\n");
}

void printSentence(NodePtr np)
{
    printf("The sentence you entered is:\n");
    while (np != NULL)              // as long as there's a node
    { 
        printf("%c", np -> ch);
        np = np -> next;            //go on to the next node
    }
    printf("\n");
}

void printReverse(NodePtr np)
{ 
    if(np -> next != NULL)              //Runs as long as there is data in the linked list.
    {
        printReverse(np -> next);       //Recursion: passing the next node in the list.
    }
    printf("%c", np -> ch);   //Prints the current node character.
}