#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare file pointer and arrays
    FILE *pFile;
    int id[5] = {0};
    int mph[5] = {0};

    //Open file
    pFile = fopen("./storms1.txt", "r");

    //If file fails to open
    if(!pFile)
    {
        printf("ERROR OPENING FILE\n");
    }
    else
    {
        //Scan each line of file and store
        int i = 0;
        while(!feof(pFile))
        {
            fscanf(pFile, "%i %i", &id[i], &mph[i]);
            i++;
        }

    }
    system("clear");
    printf("Storms That Qualify as Hurricanes\n");
    printf("Identification\tPeak Wind(mph)\tCategory\n");
    int maxSpeed = 135;
    //Store number of elements in array
    int npts = sizeof(id) / sizeof(id[0]);
    int k = 0;
    //Loop for length of elements
    while(k <= npts - 1)
    {
        //If storm qualifies as a hurricane
        if(mph[k] > 74)
        {
            //Determine storm category
            int cat = 1;
            if(mph[k] >= 155)
            {
                cat = 5;
            }
            else if(mph[k] >= 131)
            {
                cat = 4;
            }
            else if(mph[k] >= 111)
            {
                cat = 3;
            }
            else if(mph[k] >= 96)
            {
                cat = 2;
            }
            
            //Print biggest hurricane in file
            if(mph[k] == maxSpeed)
            {
                printf("%i*\t\t%i\t\t%i\n", id[k], mph[k], cat);
            }
            //Print other qualifying hurricanes
            else
            {
                printf("%i\t\t%i\t\t%i\n", id[k], mph[k], cat);
            }    
        }
        //Increment loop counter
        k++;
    }
    //Close file
    fclose(pFile);
}