#include <stdio.h>

int main()
{
    FILE *pFILE;
    char input[81];

    //Sets pointer to the file at this specific file path.
    pFILE = fopen("/home/student/Downloads/Class(linux)/Class/demo_labs/ch12/poem.txt", "r");

    //Runs if the file is open
    if(pFILE != NULL)
    {
        //Runs while the end of file hasn't been reached.
        while(!feof(pFILE))
        {
            fgets(input, 81, pFILE);
            printf("%s\n", input);
        }
        //Closes file
        fclose(pFILE);
    }
    //Runs if file cannot be opened.
    else
    {
        printf("IO ERROR: PROBLEM WITH FILE");
    }

    return 0;
}