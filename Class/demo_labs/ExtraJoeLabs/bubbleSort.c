#include <stdio.h>

int main()
{
    int i, j;
    int n;
    int temp;
    int arr[10] = {0};

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i -1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nThe array in ascending order is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);

    }
    printf("\n");
    return 0;
}