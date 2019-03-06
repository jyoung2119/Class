#include <stdio.h>

int main()
{
    int answer = 0;
    int numOfNumbers = 0;
    int holder = 0;

    printf("Insert numbers: ");
    scanf("%i", &numOfNumbers);

    for(int i = 0; i < numOfNumbers; i++)
    {
        scanf("%i", &holder);
        answer += holder;
    }

    printf("%i\n", answer);

    return 0;
}