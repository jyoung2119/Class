/*
    Author: Jared Young
    Date: 28 FEB 2019
    Project: Performance Lab 14B (Linked List)
    Description: Create a linked list, the struct members should contain the following:
                    Each students initals
                    Each students favoriate musical artist
                    Each students dream car
                    Required data for linked list completion
                    May be worth each student just posting their data into a slack channel so everyone can grab off of it
                 Create a menu allowing for the following:
                    Print out of all students and all of their data
                    Print out of all students and only one of their data members on request of user (ex. print out all students and their fav car)
                    Print out of only a specific student (This one can be challanging)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

//Declare struct (link list)
typedef struct studentInfo
{
    char initials[4];
    char musicArtist[30];
    char dreamCar[30];
    struct studentInfo * next_node;
}node_t;

#include "linkedListHeader.h"           //Header declared after struct b/c node_t hasn't been defined yet.

int main()
{
    int tempUserChoice = 0;                 //Stores user input
    int loopChoice = 0;

    //Allocate memory for each node.
    node_t *Young = (node_t*)malloc(sizeof(node_t));
    node_t *Ogden = (node_t*)malloc(sizeof(node_t));
    node_t *Butler = (node_t*)malloc(sizeof(node_t));
    node_t *McLain = (node_t*)malloc(sizeof(node_t));

    //Store data into each node.
    strcpy(Young->initials, "JDY");
    strcpy(Young->musicArtist, "Red Hot Chili Peppers");
    strcpy(Young->dreamCar, "Datsun 240z");
    Young->next_node = Ogden;                               //Link node to the next one.

    strcpy(Ogden->initials, "GLO");
    strcpy(Ogden->musicArtist, "Some Country Dude");
    strcpy(Ogden->dreamCar, "Lambo");
    Ogden->next_node = Butler;                             //Link to Butler

    strcpy(Butler->initials, "JAB");
    strcpy(Butler->musicArtist, "Some Metal Band");
    strcpy(Butler->dreamCar, "Jaguar");
    Butler->next_node = McLain;                            //Link to McLain

    strcpy(McLain->initials, "KLM");
    strcpy(McLain->musicArtist, "Some Pop Punk Band");
    strcpy(McLain->dreamCar, "Hummer");
    McLain->next_node = NULL;                              //Set tail to NULL.

    //Loops for as long as user desires.
    while(loopChoice = 1)  
    {
        tempUserChoice = printMenu();           //Store input from printMenu().

        switch(tempUserChoice)                  //Handles the printing of desired info based off of user choice.
        {   
            //Prints the whole list.
            case 1:
                printAllInfo(Young);            //Young is the head node.
                break;
            //Prints Initials
            case 2:
                printSpecificInfo(Young, tempUserChoice);
                break;
            //Prints Music Artist
            case 3:
                printSpecificInfo(Young, tempUserChoice);
                break;
            //Prints Dream Car
            case 4:
                printSpecificInfo(Young, tempUserChoice);
                break;
            //Prints Young's Info
            case 5:
                printSpecificStudent(Young);
                break;
            //Prints Ogden's Info
            case 6:
                printSpecificStudent(Ogden);
                break;
            //Prints Butler's Info
            case 7:
                printSpecificStudent(Butler);
                break;
            //Prints McLain's Info
            case 8:
                printSpecificStudent(McLain);
                break;
            default:
                printf("U SUK HOMIE\n");
        }
        printf("Press 1 To Choose Other Info, 2 To Exit: \n");
        scanf("%i", &loopChoice);

        if(loopChoice != 1)             //Handles the looping of the menu.
        {
            break;
        }
    }
    return 0;
}

//Prints the menu of options.
int printMenu()
{
    int userChoice = 0;
    printf("To Display All Students And Their Data, Press 1: \n");
    printf("To Display Initials, Press 2: \n");
    printf("To Display Music Artist, Press 3: \n");
    printf("To Display Dream Car, Press 4: \n");
    printf("To Display Young's Info, Press 5: \n");
    printf("To Display Ogden's Info, Press 6: \n");
    printf("To Display Butler's Info, Press 7: \n");
    printf("To Display McLain's Info, Press 8: \n");

    scanf("%i", &userChoice);
    //Error Handling
    if(userChoice < 1 || userChoice > 8)
    {
        printf("U SUK SCRUB\n");
    }
    else
    {
        return userChoice;
    }
}

//Prints all contents of the linked list.
void printAllInfo(node_t *head)
{
    //Sets the passed node to a different name to avoid confusion.
    node_t *current = head;

    //Loops until the end of linked list.
    while(current != NULL)
    {
        printf("Student Initials:\t\t%s\n",current->initials);
        printf("Student Favorite Artist:\t%s\n",current->musicArtist);
        printf("Student Dream Car:\t\t%s\n\n",current->dreamCar);

        //Moves to the next node in the list.
        current = current->next_node;
    }
}

//Prints desired category for each individual.
void printSpecificInfo(node_t *head, int userChoice)
{
    //Sets the passed node to a different name to avoid confusion.
    node_t *current = head;

    //Based off of user input.
    switch(userChoice)
    {
        case 2:
            while(current != NULL)
            {
                printf("Student Initials:\t\t%s\n",current->initials);
                current = current->next_node;
            }
        case 3:
            while(current != NULL)
            {
                printf("Student Initials:\t\t%s\n",current->initials);
                printf("Student Favorite Artist:\t%s\n",current->musicArtist);
                current = current->next_node;
            }
        case 4:
            while(current != NULL)
            {
                printf("Student Initials:\t\t%s\n",current->initials);
                printf("Student Dream Car:\t\t%s\n\n",current->dreamCar);
                current = current->next_node;
            }
    }
}

//Prints whatever node is desired.
void printSpecificStudent(node_t *desiredNode)
{
    printf("Student Initials:\t\t%s\n",desiredNode->initials);
    printf("Student Favorite Artist:\t%s\n",desiredNode->musicArtist);
    printf("Student Dream Car:\t\t%s\n\n",desiredNode->dreamCar);
}