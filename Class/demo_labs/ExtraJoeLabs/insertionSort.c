#include <stdio.h>

#define SIZE 5

void insertionSort(int arr[], int n);

int main()
{
    int arr[SIZE] = {0};
    int i;
    int numElements;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &numElements);
    printf("Enter the elements: ");

    for(i = 0; i < numElements; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, numElements);

    printf("\nThe sorted array is: \n");
    for(i = 0; i < numElements; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    return 0;
}

//Organizes array using Insertion Sort.
void insertionSort(int arr[], int numElements)
{
    int i, j, temp;                                 //Loop counters and temp holder.

    for(i = 1; i < numElements; i++)                //Loops for number of elements in array.
    {
        temp = arr[i];                              //Store current spot in temp
        j = i - 1;                                  //So that way it compares previous index.
        while((temp < arr[j]) && (j >= 0))          //Runs while current spot is less than previous spot
        {
            arr[j + 1] = arr[j];                    //Store previous spot into current spot.
            j--;                                    //Decrement
        }
        arr[j + 1] = temp;                          //Store previous spot into current spot.
    }
}