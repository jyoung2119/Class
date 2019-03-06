/*
    Author: Jared Young
    Date: 20 FEB 2019
    Project: Performance Lab 10.7
    Description: Redefine EOF as 66 (without compiler warnings)
                 Use preprocessor directive(s) to:
                    Only compile in "release" and only compile if _INC_STDIO is defined
                    Prints the name of a MACRO and also print the integer value of that MACRO
                    Use a #else 'fall through' for ease of use and safety
                 Use your preprocessor directives on FOPEN_MAX, FILENAME_MAX, and EOF
*/
#include <stdio.h>

//Redefines EOF
#undef EOF
#define EOF 66
//Defines given macro and new macro.
#define _INC_STDIO 1
#define MAC_RO 100
//Handles the printing of macro name and value.
#define STRINGIFY(x) #x 
#define PRINT_MAC printf("%s = %i\n", STRINGIFY(MAC_RO), MAC_RO)

//Redefines FOPEN_MAX and FILENAME_MAX
#undef FOPEN_MAX 
#define FOPEN_MAX 20
#undef FILENAME_MAX
#define FILENAME_MAX 60

#ifdef _INC_STDIO //Compiles if _INC_STDIO is defined.
int main()
{    
    printf("_INC_STDIO is defined.\nThe name and value of the macro is: ");
    //Prints macro name and value.
    PRINT_MAC;
    

    //Use your preprocessor directives on FOPEN_MAX
    #if FOPEN_MAX <= 21
        printf("FOPEN_MAX is within an acceptable range.\n");
    #else
        printf("FOPEN_MAX is outside an acceptable range.\n");
    #endif

    //Use your preprocessor directives on FILENAME_MAX
    #if FILENAME_MAX <= 60
        printf("FILENAME_MAX is within an acceptable range.\n");
    #else
        printf("FILENAME_MAX is outside an acceptable range.\n");
    #endif

    //Use your preprocessor directives on EOF
    #if EOF == 66
        printf("EOF is set correctly.\n");
    #else
        printf("EOF is not correct.\n");
    #endif

    return 0;
}
#endif