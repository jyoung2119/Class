/*
	Author: Jared Young
	Date: 15 FEB 2019
	Project: Performance Lab 8C
	Description: Calculate a shadow sequence number using recursion.
*/
#define MAXIMUM_SEQ_NUM (2300)
#define ERROR_VALUE (105)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
 * This pre-processing directive determines whether the program will
 *     run unit tests and/or prompt the user for input depending on
 *     what #define statements are uncommented.
#define MANUAL_TEST // Allows the programmer to manually provide input to test the response of the program as a whole
#define AUTO_TEST // Runs unit tests on unsigned long shadow_sequence_number(int placeNumber)
 * Uncomment out multiple #defines to multiple tests in a single run
 */
#define MANUAL_TEST
//#define AUTO_TEST

//function prototypes
void clean_stdin(void);
unsigned long shadow_sequence_number(int placeNumber);

int main(void)
{
	//Temporarily stores a number in the shadow sequence.
	unsigned long tempValue = 0;
	//unsigned long myTempValue = 0;

//Given manual test from shell code.
#ifdef MANUAL_TEST
	//Holds user input.
	int howManyToCalculate = 0;
	tempValue = 0;

	printf("How many numbers would you like to calculate?\n");

	scanf("%d", &howManyToCalculate);
	clean_stdin();
	putchar(10);

	//Loops for the desired number of shadow numbers
	for (int i = 1; i <= howManyToCalculate; i++)
	{
		//Passes loop counter to shadow number function.
		tempValue = shadow_sequence_number(i);
		printf("%d:\t%lu \n", i, tempValue);
	}
#endif

//Given auto tester from shell code.
#ifdef AUTO_TEST

#define BUFF_SIZE 24
	tempValue = 0;
	int numberOfTestsRun = 0;
	int numberOfTestsPassed = 0;
	int placeNumbers[BUFF_SIZE] = { -31337, ((MAXIMUM_SEQ_NUM + 1) * -1), (MAXIMUM_SEQ_NUM * -1), -1337, -100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 100, 1337, MAXIMUM_SEQ_NUM, (MAXIMUM_SEQ_NUM + 1), 31337 };
	unsigned long returnValues[BUFF_SIZE] = { ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, 9, 0, 9, 25, 50, 86, 135, 199, 280, 380, 501, 645, 814, 338345, 797553920, 4058312045, ERROR_VALUE, ERROR_VALUE };

	for (int i = 0; i < BUFF_SIZE; i++)
	{
		tempValue = shadow_sequence_number(placeNumbers[i]);
		numberOfTestsRun++;
		if (tempValue == returnValues[i])
		{
			numberOfTestsPassed++;
		}
	}

	printf("\n\nNumber of tests run:\t%d\n", numberOfTestsRun);
	printf("Number of tests passed:\t%d\n", numberOfTestsPassed);
#endif

	return 0;
}

/*
 * FUNCTION:   unsigned long shadow_sequence_number(int placeNumber)
 *
 * ARGUMENTS:  placeNumber represents the individual "Shadow Sequence" position number to calculate
 *
 * RETURNS:	   The value of of the "Shadow Sequence" number at position "placeNumber" [see: S(placeNumber)].
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  (see NOTES: for details)  
 *             ERROR_VALUE (105) if placeNumber is unrealistic or dangerous
 *
 * NOTES:      This function should only be returning a single sequence number from the "Shadow Sequence".
 *             This function should *not* be calculating multiple sequence numbers during a single function call.
 *             Nor should this function be printing any sequence numbers.
 *             However, this function will need to call itself recursively to calculate all of the previous sequence
 *                 numbers in order to calculate the sequence number at position "placeNumber".
 *             Any requirements to calcualte or print multiple numbers in the "Shadow Sequence" should be
 *                 accomplished by the calling function [e.g., main()]
 *             The data type of long was chosen as the return value to increase the available output.
 *             The keyword unsigned was chosen to further maximize the available output since this algorithm
 *                 should not be producing any negative numbers.
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  For example, here are some sample calculations of S(n)
 *                     S(1) = 9.
 *                     S(2) = 0.
 *                     S(3) = S(2) + (3 * 3) ---> S(3) = (0)  + (9) ---> S(3) = 9.
 *                     S(4) = S(3) + (4 * 4) ---> S(4) = (9)  + (16) --> S(4) = 25.
 *                     S(5) = S(4) + (5 * 5) ---> S(5) = (25) + (25) --> S(5) = 50.
 *
 *             The first few "Shadow Sequence" numbers are as follows:
 *                 S(1)		S(2)	S(3)	S(4)	S(5)	S(6)	S(7)	S(8)	S(9)	S(10)
 *                 9		0		9		25		50		86		135		199		280		380
 */

//Cleans stdin after user input is stored.
void clean_stdin(void)
{
    while(getchar() != '\n');
}

//Calculates the shadow sequence number.
unsigned long shadow_sequence_number(int placeNumber)
{
	//Error handling
	if(placeNumber > 2300 || placeNumber <= 0)
    {
        return 105;
    }
	//Sequence starts with 9.
    else if(placeNumber == 1)
    {
        return 9;
    }
	//2nd number in sequence is a 0.
    else if(placeNumber == 2)
    {
        return 0;
    }
	//Actual calculation
    else
    {
        return shadow_sequence_number(placeNumber - 1) + (placeNumber * placeNumber);
    }

}