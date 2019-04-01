#include <stdio.h>

int main()
{
    //Declare and initialize array and variables
    int userInput[256] = {0};
    int numElements = 0;
    int temp = 0;

    //Ask for desired amount of elements
    printf("Enter number of elements in the array: ");
    //Scan user input
    scanf("%d", &numElements);

    //Ask for array values
    printf("Enter array values: ");
    //Scan user input
    for(int i = 0; i < numElements; i++)
    {
        scanf("%d", &userInput[i]);
    }

    //Store first value into temp variable to compare
    temp = userInput[0];

    //Loop through user input
    for(int j = 0; j < numElements; j++)
    {
        //If temp > next value, replace temp
        if(temp > userInput[j])
        {
            temp = userInput[j];
        }     
    }
    //Print temp(should be smallest number)
    printf("Smallest number is: %d\n", temp);
}