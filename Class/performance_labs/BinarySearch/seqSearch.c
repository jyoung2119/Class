/*	This program will generate an array of integers
	filled with numbers between 1 and 200, search that 
	array 100 times using a sequential search for random 
	numbers in the same range, and print statistics 
	about those searches.
	   Written by:
	   Date:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_ARRAY 100
#define NUMBER_LIMIT 200
#define SEARCHES 100

//	Prototype Declarations
void fillAryRand (int  array[]);
bool seqSearch   (int  array[], int  last, int target,
                  int* locn,    int* tests);

int main (void)
{
//	Local Definitions
	int numsFound     =  0;
	int tests         =  0;
	int srchComplete  =  0;
	int locn;
	int array [MAX_ARRAY];

//	Statements 
	srand (time (NULL));
	fillAryRand (array);
	for (int i = 1;  i <= SEARCHES;  i++)
	   {
	    if (seqSearch (array, MAX_ARRAY - 1,
	        rand() % NUMBER_LIMIT + 1,
	        &locn, &tests)
	       )
	        numsFound++;
	    srchComplete++;
	   } // for 
	printf("Searches completed:  %3d\n", srchComplete);
	printf("Successful searches: %3d\n", numsFound);
	printf("Percent successful:  %6.2f\n", 
	        (((float)numsFound / srchComplete) * 100));
	printf("Average per search:  %5.2f\n", 
	        ((float)tests / srchComplete));
	return 0;
}	// main 

/*	=================== fillAryRand =================== 
	This function will fill an array of integers with 
	random numbers <= NUMBER_LIMIT.
	   Pre   array is pointer to empty array of integers
	   Post  array filled with random numbers <= limit
*/
void fillAryRand (int array [ ])
{
//	Statements 
	for (int i = 0;  i < MAX_ARRAY;  i++)
	     array [i] = rand() % NUMBER_LIMIT + 1;
	return; 
} // fillAryRand 

/*	=================== seqSearch ==================
	This function uses a sequential search to locate an 
	integer in  an array of integers.
	   Pre   list is array that contains at least 1 item
	         last is index to last element in the list
	         target is the object of the search
	         locn is alias to found target
	         tests is alias to number of search tests 
	   Post  FOUND matching index in locn--return true
	         !FOUND last in locn--return false
*/
bool seqSearch (int  array [], int  last, int  target,
                int* locn,     int* tests)
{
//	Local Definitions 
	int looker  =  0;

//	Statements
	while (((*tests)++, looker < last)  
	    && ((*tests)++, target != array[looker]))
	     looker++;
	*locn  =  looker;
	return ((*tests)++, target  ==  array[looker]);
}	// seqSearch


/*	Results
Searches completed:  100
Successful searches:  47
Percent successful:   47.00
Average per search:  156.91
 */