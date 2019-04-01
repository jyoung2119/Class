#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n);
void swap(int *xp, int *yp);

int main()
{
    int i, j;               //Loop variables
    int arr[10] = {0};      //Holds user input
    int numElements;        //Holds desired number of array elements

    printf("Enter the number of elements in the array: ");
    scanf("%d", &numElements);
    printf("Enter the elements: ");

    for(i = 0; i < numElements; i++)            //Loops for the length of array
    {
        scanf("%d", &arr[i]);                   //Stores user input into corresponding index
    }
    selectionSort(arr, numElements);    
    printf("Sorted Array: \n");

    for(i = 0; i < numElements; i++)            //Loops for length of array.
    {
        printf("%d\t", arr[i]);                 
    }

    printf("\n");
    return 0;
}

//Function that utilizes Selection Sorting to organize array in ascending order.
void selectionSort(int arr[], int numElements)
{
    int minIndex;           //stores current smallest value

    for(int k = 0; k < numElements; k++)        //Loops for length of passed array.
    {
        minIndex = k;                           //Sets 0 index as current smallest value.

        //Loops for length of array.
        //h = k+1 so it covers the next index spot.
        for(int h = k + 1; h < numElements; h++)
        {
            if(arr[h] < arr[minIndex])          //If the next spot is smaller than current smallest
            {
                minIndex = h;                   //Store it as the current smallest.
            }
        }
        swap(&arr[minIndex], &arr[k]);          //Pass the current smallest and current loop index in array
    }
}

//Swaps the values passed to it.
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}