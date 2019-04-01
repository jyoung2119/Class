#include <stdio.h>

#define SIZE 100

void merge(int arr[], int beg, int mid, int end);
void mergeSort(int arr[], int beg, int end);

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
    mergeSort(arr, 0, (numElements - 1));
    printf("The sorted array: ");

    for(i = 0; i < numElements; i++)
    {
        printf("%i\t", arr[i]);
    }
    printf("\n");
    return 0;
}

void mergeSort(int arr[], int beg, int end)
{
    int mid;
    if(beg < end)
    {
        mid = (beg+end)/2;
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}

void merge(int arr[], int beg, int mid, int end)
{
    int i = beg, j = mid + 1, index = beg, temp[SIZE], k;
    while((i <= mid) && (j <= end))
    {
        if(arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i > mid)
    {
        while(j <= end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i <= mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }

    for(k = beg; k < index; k++)
    {
        arr[k] = temp[k];
    }
}