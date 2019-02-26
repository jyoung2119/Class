#include <stdio.h>

int main()
{
    //Declare pointers
    FILE *readFilePTR;
    FILE *writeFilePTR;

    //Stores input from the read file.
    char input[256] = {0};
    char *tempInput = input;
    //Opens both files
    readFilePTR = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch12/CopyLineLab/copypasta.txt", "r");
    writeFilePTR = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch12/CopyLineLab/newmeme.txt", "w");

    //Runs if read file opens successfully.
    if(readFilePTR != NULL)
    {
        //Runs if write can't open
        if(writeFilePTR == NULL)
        {
            printf("ERROR OPENING WRITE TO FILE\n");
        }
        //Runs until pointer hits null character.
        while(tempInput != NULL)
        {
            //Stores string from the read file into pointer
            tempInput = fgets(input, 256, readFilePTR);
            //Runs if EOF hasn't been reached.
            if(tempInput)
            {
                //Prints original file into write file.
                fputs(input, writeFilePTR);
            }    
        }
        //Closes both open files.
        fclose(readFilePTR);
        fclose(writeFilePTR);
    }
    else
    {
        printf("ERROR\n");
    }

    return 0;
}