#include <stdio.h>
#include <stdlib.h>
#define nRows 8
#define nCols 7

//Prototype
double col_ave(int power[nRows][nCols], int col);

int main()
{
    //Declare and define variables
    FILE *pFile;
    int powerData[nRows][nCols] = {0};
    int sum = 0;
    int numData = nRows * nCols;
    double average = 0;
    int numDays = 0;
    int smallest = 0;
    int weekNum = 0;
    int column = 0;

    //Open file
    pFile = fopen("./power1.dat", "r");

    //If file doesn't open
    if(!pFile)
    {
        printf("ERROR OPENING FILE\n");
    }
    //File opens
    else
    {
        //Loop to store input
        for(int i = 0; i < nRows; i++)
        {
            fscanf(pFile, "%i %i %i %i %i %i %i", &powerData[i][0], &powerData[i][1], &powerData[i][2], &powerData[i][3], &powerData[i][4], &powerData[i][5], &powerData[i][6]);
        }
        //Temporarily store smallest
        smallest = powerData[0][0];
        //Loop to add all values and find actual smallest
        for(int j = 0; j < nRows; j++)
        {
            for(int k = 0; k < nCols; k++)
            {
                sum += powerData[j][k];
                if(smallest > powerData[j][k])
                {
                    smallest = powerData[j][k];
                }
            }
        }
        //Calculate average
        average = sum / numData;
        //Loop to find number of days greater than average
        for(int j = 0; j < nRows; j++)
        {
            for(int k = 0; k < nCols; k++)
            {
                if(powerData[j][k] > average)
                {
                    numDays++;
                }
            }
        }
        system("clear");
        printf("Average Power Output Over 8 Weeks: %.2lf\n", average);
        printf("# of Days w/ > Avg Power Output: %i\n", numDays);
        printf("Minimum Power Output: %i\n", smallest);
        //Loop to find position of smallest value
        for(int j = 0; j < nRows; j++)
        {
            for(int k = 0; k < nCols; k++)
            {
                if(smallest == powerData[j][k])
                {
                    switch(j)
                    {
                        case 0:
                            printf("Minimum Output Occured on Week %i Sunday (%i)\n", j+1, smallest);
                            break;
                        case 1:
                            printf("Minimum Output Occured on Week %i Monday (%i)\n", j+1, smallest);
                            break;
                        case 2: 
                            printf("Minimum Output Occured on Week %i Tuesday (%i)\n", j+1, smallest);
                            break;
                        case 3:
                            printf("Minimum Output Occured on Week %i Wednesday (%i)\n", j+1, smallest);
                            break;
                        case 4:
                            printf("Minimum Output Occured on Week %i Thursday (%i)\n", j+1, smallest);
                            break;
                        case 5:
                            printf("Minimum Output Occured on Week %i Friday (%i)\n", j+1, smallest);
                            break;
                        case 6:
                            printf("Minimum Output Occured on Week %i Saturday (%i)\n", j+1, smallest);
                            break;
                        default:
                            break;
                    }
                }
            }
        }               
    }
    //Close file
    fclose(pFile);

    //Prompt for and send user input to outside function
    //Display result
    printf("Enter a Column Number: ");
    if(!(scanf("%i", &column)) || column < 1 || column > 8)
    {
        printf("Why do suck?\n");
    }
    else
    {
        double chooseAvg = col_ave(powerData, column);
        printf("Column #%i Average = %.2lf\n", column, chooseAvg);
    } 
}

//Receive 2D array and column choice
//Return column average
double col_ave(int power[nRows][nCols], int col)
{
    //Declare variables
    double colAvg, colSum;

    //Loop for number of rows
    for(int i = 0; i < nRows; i++)
    {
        //Calculate sum
        //col-1 to ensure correct index in array
        colSum += power[i][col-1];
    }
    //Calculate average
    colAvg = colSum / nRows;
    return colAvg;
}