#include <stdio.h>

int main()
{
    //Declare pointer
    FILE *readFilePTR;
    //Stores each character
    char songLyrics = 0;
    //Opens file
    readFilePTR = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch12/MightyMorphinLab/powerrangers.txt", "r");
    //Runs if file was opened
    if(readFilePTR != NULL)
    {
        //Runs until end of file
        while(!feof(readFilePTR))
        {   
            //Store each character separately
            songLyrics = fgetc(readFilePTR);
            //Hacky way to get rid of question mark character using ASCII values.
            if(songLyrics >= 8)
            {
                printf("%c", songLyrics);
            }
        }
        printf("\n");
        //Close file
        fclose(readFilePTR);
    }
    else
    {
        printf("ERROR OPENING FILE\n");
    }
}