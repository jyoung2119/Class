#include <stdio.h>
#include <string.h>     //strlen()
#include <ctype.h>      //tolower()

int main()
{
    FILE *filePtr;
    int numOfStudents = 0;
    
    printf("How many students do you want to add to the roster? ");

    scanf("%i", &numOfStudents);

    //Runs if user input is legit.
    if(numOfStudents > 0)
    {   
        //Runs if file is NOT opened properly.
        if((filePtr = fopen("/home/student/Downloads/Class(linux)/Class/performance_labs/ch12/UsernamesLab/class_roster.txt", "a")) == NULL)
        {
            puts("FILE COULD NOT BE OPENED\n");
        }
        else
        {
            printf("Input name for each student like so, First Middle Last: \n");
            
            //Loops for the number of added students;
            for(int i = 1; i <= numOfStudents; i++)
            {
                //Initializes arrays
                char firstName[20] = {0};
                char middleName[20] = {0};
                char lastName[20] = {0};
                char userName[20] = {0};

                scanf("%29s %29s %29s", &firstName, &middleName, &lastName);
                
                //Changes the first letter in each name to lowercase
                userName[0] = tolower(firstName[0]);
                userName[1] = tolower(middleName[0]);
                userName[2] = tolower(lastName[0]);
                for(int j = 0; j < strlen(lastName); j++)
                {
                    //Ignores the first 3 indexes in order to add the rest of the last name
                    userName[3 + j] = lastName[1 + j];
                } 
                //Prints output to file.
                fprintf(filePtr, "%s %s %s has a username of %s\n", firstName, middleName, lastName, userName);
            }
            //Closes file pointer.
            fclose(filePtr);
        }
    }

    return 0;
}