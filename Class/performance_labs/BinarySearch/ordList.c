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
	fillAryOrerd (array);
	for (int i = 1;  i <= SEARCHES;  i++)
	   {
	    if (ordListSearch (array, MAX_ARRAY - 1,
	           rand() % NUMBER_LIMIT + 1,
	           &locn, &tests)
	       )
	        numsFound ++;
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

/*	=================== ordListSearch ============
	This function uses a ordered list sequential search
	to locate an integer in an array of integers.
	   Pre  : list is array of integers that contains at
	          least 1 item
	          last is index to last element in list
	          target is object of search
	          locn is alias to index of found target
	          tests is alias to number of search tests 
	   Post : FOUND:  matching index in locn -- return  1
	         !FOUND:  index of 1st element > target
	                  stored in locn -- return 0 
 */
bool ordListSearch (int  array [], int  last,
                    int  target,
                    int* locn,     int* tests)
                   
{
//	Local Definitions
	int looker;

//	Statements
	if ((*tests)++, target < array[last])
	   {
	    looker  =  0;
	    while ((*tests)++, target > array[looker])
	        looker++;
	   } // if
	else
	   looker  =  last;
	*locn  =  looker;	
	return ((*tests)++, target  ==  array[looker]);
}	// ordListSearch


/*	Results
Searches completed:  100
Successful searches:  70
Percent successful:   70.00
Average per search:  48.69
 */