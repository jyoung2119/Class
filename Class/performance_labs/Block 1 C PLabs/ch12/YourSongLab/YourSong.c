#include <stdio.h>

int main()
{
    //Creates a pointer to store the data from the open file.
    FILE *pFILE;
    char input[500];

    //Opens file
    pFILE = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch12/YourSongLab/mySong.txt", "r");

    //Runs if file is opened.
    if(pFILE != NULL)
    {
        //Runs until end of the file.
        while(!feof(pFILE))
        {
            //Stores all text from file
            fgets(input, 500, pFILE);
            printf("%s\n", input);
        }
        //Closes file.
        fclose(pFILE);
    }
    else
    {
        printf("IO ERROR: PROBLEM WITH FILE");
    }

    return 0;
}