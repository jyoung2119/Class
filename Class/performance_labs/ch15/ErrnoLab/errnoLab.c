/*
    Author: Jared Young
    Date: 04 MAR 2019
    Project: Performance Lab 15B(ErrnoLab)
    Description: Write (or modify) a program that implements the following:
                    feof()
                    perror()
                    Return errno
                    strerror()
                 Replicate some error to test your implementation…
                    Read a non-existent file.
                    Write to a locked file.
                    Misuse a math function .
*/
#include <stdio.h>
#include <errno.h>          //errno
#include <stdlib.h>         //exit(EXIT_FAILURE)
#include <string.h>         //strerror()

int error_reporting(int currErrno);     //Function prototype

int main()
{
    int currentErrno;           //Stores errno value temporarily.
    char fileChar = 0;          //Stores each character from the read file.
    int firstNum, secondNum;
    int answer;

    //File pointers
    FILE *readFilePTR;
    FILE *writeFilePTR;

    //Opening files
    readFilePTR = fopen("notexist.txt", "r");       //Run to test error handling.
    //readFilePTR = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch15/ErrnoLab/randoFile.txt", "r");
    writeFilePTR = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch15/ErrnoLab/randoWrite.txt", "w");
    
    //Runs if read file opens.
    if(readFilePTR != NULL)
    {   
        //Runs if write file can't be opened.  
        if(writeFilePTR == NULL)
        {   
            currentErrno = errno;                                       //Stores errno value
            error_reporting(currentErrno);                              //Passes value to outside function
            printf("Value of errno: %d\n", currentErrno);               //Displays value of error.
            perror("ERROR");        
            printf("fopen failed b/c: %s\n", strerror(currentErrno));   //Prints reason for error.
        }
        //Loops until end of file.
        while(!feof(readFilePTR))
        {   
            //Stores a character into a variable.
            fileChar = fgetc(readFilePTR);
            //Prints character into write file.
            fputc(fileChar, writeFilePTR);
        }
        //Close both files after loop is complete.
        fclose(readFilePTR);
        fclose(writeFilePTR);

        printf("FILE WRITTEN!\n");
    }
    //Runs if read file could not be opened.
    else
    {
        currentErrno = errno;
        error_reporting(currentErrno);
        printf("Value of errno: %d\n", currentErrno);
        perror("ERROR");
        printf("fopen failed b/c: %s\n", strerror(currentErrno));
    }
        printf("\n");

        //Misuse a math function.
        printf("Now for math error...\n");

        printf("Enter an integer to divide by zero ex.(x/0): ");
        scanf("%i/%i", &firstNum, &secondNum);

        if(secondNum == 0)
        {   
            printf("Can't divide by zero!\n");
            //Exit program.
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("Good job not following directions...\n");
            answer = firstNum / secondNum;
            printf("Answer: %i\n", answer);
        }

    return 0;
}

//Just returns what was passed to it.
int error_reporting(int currErrno)
{ 
	if (currErrno)
	{
		return currErrno;
	}
}