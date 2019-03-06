#include <stdio.h>

int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("/home/student/Downloads/Class(linux)/Class/demo_labs/ch12/poem.txt", "r");
    //Stores the first character of file.
    num = fgetc(fptr);

    //Runs until the end of the file(EOF).
    while(num != EOF)
    {
        //Prints the stored character.
        putchar(num);
        //Stores next character in the file.
        num = fgetc(fptr);
    }
    //Close file.  
    fclose(fptr);

    printf("\n");
    return 0 ;
}