#include <stdio.h>
#include <stdlib.h>

//argc counts the number of files inputted(should be a.out & poem.txt).
//*argv stores each file in the first two spots of the array(a.out is [0] & poem.txt[1]).
int main(int argc, char *argv[])
{
    //If user gives less than two files.
    if(argc < 2)
    {
        printf("NEED TO PROVIDE FILE NAME \n");
        return EXIT_FAILURE;
    }

    //Prints "poem.txt"
    printf("The name of the file is %s\n", argv[1]);
    return EXIT_SUCCESS;
}