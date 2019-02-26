/*
PERFORMANCE LAB 1
Follow instructions below!
The basis of this lab is simple... allocate a section of memory that will
hold a string (your first name). Print the name out, then cleanup the memory and exit.
*/

//TODO: Include needed headers
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(void)
{
    //TODO: Create a string containing your first name
    char firstName[] = "Jared";
    //TODO: Get the size of this string
    int size = sizeof(firstName);
    //TODO: Declare a char pointer *str
    char *str;


    //TODO: Allocate a section of memory of type char
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
    str = (char*)malloc(40);

    //TODO: Copy your name into the allocated space using strcpy()
    strcpy(str, firstName);
    //TODO: Print out your name that is stored in the allocated memory space
    printf("Name stored in the allocated memory space is: %s\n", str);
    //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
    str = realloc(str, size);
    //TODO: Print out the string again
    printf("Reallocated string is: %s\n", str);

    free(str);
    str = NULL;

    return 0;
}