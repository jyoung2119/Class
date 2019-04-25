#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float eyeOne, eyeTwo, eyeThree, noseOne, noseTwo, noseThree;

    char Image1[8] = {"Image 1"};
    char Image2[8] = {"Image 2"};
    char Image3[8] = {"Image 3"};

    printf("Enter Eye Distance and Nose-Chin Distance for Image 1(x,y): ");
    scanf("%f,%f", &eyeOne, &noseOne);
    printf("Enter Eye Distance and Nose-Chin Distance for Image 2(x,y): ");
    scanf("%f,%f", &eyeTwo, &noseTwo);
    printf("Enter Eye Distance and Nose-Chin Distance for Image 3(x,y): ");
    scanf("%f,%f", &eyeThree, &noseThree);

    float ratioOne = eyeOne / noseOne;
    float ratioTwo = eyeTwo / noseTwo;
    float ratioThree = eyeThree / noseThree;

    float diffOneTwo = fabs(ratioOne - ratioTwo);
    float diffOneThree = fabs(ratioOne - ratioThree);
    float diffTwoThree = fabs(ratioTwo - ratioThree);

    float smallest = diffOneTwo;
    if(smallest > diffOneThree)
    {
        smallest = diffOneThree;
    }

    if(smallest > diffTwoThree)
    {
        smallest = diffTwoThree;
    }

    if(smallest == diffOneTwo)
    {
        printf("%s and %s are most similar.\n", Image1, Image2);
    }
    else if(smallest == diffOneThree)
    {
        printf("%s and %s are most similar.\n", Image1, Image3);
    }
    else if(smallest == diffTwoThree)
    {
        printf("%s and %s are most similar.\n", Image2, Image3);
    }
}