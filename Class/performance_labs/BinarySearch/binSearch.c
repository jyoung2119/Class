/*	This program will generate an array of integers
	filled with ordered numbers between 1 & 150,
	search that array 100 times using an ordered list
	sequential search for random numbers in the same
	range, and print statistics about those searches.
	   Written by:
	   Date:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_ARRAY 100
#define NUMBER_LIMIT 150
#define SEARCHES 100

//	Prototype Declarations
void fillAryOrerd  (int array[]);
bool ordListSearch (int  array[], int  last,
                    int  target, 
                    int* locn,    int* tests);
bool binarySearch (int array[],int numOfElements,int target,int* index,int *tests);

int main (void)
{
//	Local Definitions
	int locn;
	int array [MAX_ARRAY];
    int numSearches = 0;
    int numSuccess = 0;
    float perSuccess = 0.0;
    float averageNumTests = 0;
    int tests;

//	Statements
	srand (time (NULL));
	fillAryOrerd (array);
    //printf("\nNumber To Find: %d\n",numToFind);
    for (size_t i = 0; i < SEARCHES; i++)
    {
        if(binarySearch(array,MAX_ARRAY,rand() % NUMBER_LIMIT + 1,&locn,&tests)){
            numSuccess++;
        }
    }
    printf("Number Of Searches: %d\n",SEARCHES);
    printf("Number Of Successes: %d\n",numSuccess);
    printf("Percentage of Success: %f\n", ((float)numSuccess/(float)SEARCHES) *100);
    printf("Average Number of Tests: %f\n",(float)tests/(float)SEARCHES);

	return 0;
}	// main

/*	=================== fillAryOrerd ============
	This function will fill an array of integers with
	numbers by first adding 2, then adding 1, then
	adding 2 again, and so on.
	   Pre  :  array is an empty array of integers
	   Post :  array filled with number series
*/
void fillAryOrerd (int array [ ])
{
//	Local Definitions 
	int i    =  0;
	int num  =  1;

//	Statements
	while (i < MAX_ARRAY)
	   {
	    array[i]  =  num;
	    i++;
	    num      +=  2;
	    array[i]  =  num;
	    i++;
	    num++;
	   } // while 
	return;
}	// fillAryOrerd

bool binarySearch (int array[],int numOfElements,int target,int* index,int* tests){
    int L = 0;
    int R = numOfElements - 1;
    int m;
    while(L <= R){
        m = (L + R) / 2;
        (*tests)++;
        if(array[m] > target){
            R = m - 1;
        }
        else if(array[m] < target){
            L = m + 1;
        }
        else{
            *index = m;
            return true;
        }
    }
    return false;
}

/*	Results
Searches completed:  100
Successful searches:  70
Percent successful:   70.00
Average per search:  48.69
 */