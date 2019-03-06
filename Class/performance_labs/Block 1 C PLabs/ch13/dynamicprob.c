/*
(Dynamic Array Allocation) Write a program that dynamically allocates an array of integers.
The size of the array should be input from the keyboard. The elements of the array should be
assigned values input from the keyboard. Print the values of the array. Next, reallocate the memory
for the array to 1/2 of the current number of elements. Print the values remaining in the array to
confirm that they match the first half of the values in the original array.

*/
#include <stdio.h>
#include <stdlib.h>

int main( void )
{ 
   unsigned int numOfElements;   // number of elements in array
   unsigned int counter = 0; // loop counter
   int *arrayPtr = NULL; // pointer to the array
   
   // prompt user and read integer size of array
   printf( "This program dynamically allocates an array of integers.\nEnter the number of elements in the array: " );
   scanf("%u", &numOfElements); // missing info in scanf
   
   // dynamically allocate memory
	arrayPtr = calloc(numOfElements, sizeof(int));
   
   // initialize elements of array with user-entered data
   for(counter; counter < numOfElements; counter++ ) 
   { 
      printf("Enter an interger: ");
      scanf("%d", (arrayPtr + counter));
   } // end for

   puts( "\nThe elements of the array are:" );
   
   // display the original array
   for (counter = 0; counter < numOfElements; counter++) 
   {
      printf("%i ", *(arrayPtr + counter));
   } // end for

   // reallocate to half the original size
   arrayPtr = realloc(arrayPtr, (numOfElements/2));

   puts( "\n\nThe elements of the array after reallocation are:" );
   
   // display array after cut in half
   for (counter = 0; counter < (numOfElements / 2); counter++)
   {
      printf("%i ", *(arrayPtr + counter));
   } // end for

   puts(" ");
} // end main

/* OUTPUT
This program dynamically allocates an array of integers.
Enter the number of elements in the array: 10
Enter an integer: 1
Enter an integer: 2
Enter an integer: 3
Enter an integer: 4
Enter an integer: 5
Enter an integer: 6
Enter an integer: 7
Enter an integer: 8
Enter an integer: 9
Enter an integer: 10

The elements of the array are:
1 2 3 4 5 6 7 8 9 10

The elements of the array after reallocation are:
1 2 3 4 5


*/