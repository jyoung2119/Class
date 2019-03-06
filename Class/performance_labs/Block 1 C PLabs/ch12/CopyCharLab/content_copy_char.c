#include <stdio.h>

int main()
{
    //Initialize pointers.
    FILE *readFilePTR;
    FILE *writeFilePTR;
    //Stores each character in the file that is being read.
    char fileChar = 0;

    //Opens file that is being read.
    readFilePTR = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch12/CopyCharLab/randompoem.txt", "r");
    //Opens file that will be written to.
    writeFilePTR = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch12/CopyCharLab/writePoem.txt", "w");

    //Runs if read file was opened
    if(readFilePTR != NULL)
    {
        //Checks to see if write file was opened
        if(writeFilePTR == NULL)
        {
            printf("ERROR OPENING write2me.txt\n");
        }
        while(fileChar != EOF)
        {   
            fileChar = fgetc(readFilePTR);

            //Hacky way to avoid question mark symbol that printed at the end of the poem.
            //Uses ASCII value.
            if(fileChar >= 8)
            {
                fputc(fileChar, writeFilePTR);
            }
        }
        //Closes the opened files
        fclose(readFilePTR);
        fclose(writeFilePTR);
    }
    else
    {
        printf("ERROR OPENING poem.txt\n");
    }

    return 0;
}