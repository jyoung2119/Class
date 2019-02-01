#include <stdio.h>

int main()
{
    int myIntArray[10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    float myFloatArray[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    char myCharArray[256] = {0};

    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);

    // myIntArray[y] = (y + 1) * 10;
	myIntArray[0] = (0 + 1) * 10;
	myIntArray[1] = (1 + 1) * 10;
	myIntArray[2] = (2 + 1) * 10;
	myIntArray[3] = (3 + 1) * 10;
	myIntArray[4] = (4 + 1) * 10;		//Isn't this kind of a P.I.T.A....?
	myIntArray[5] = (5 + 1) * 10;
	myIntArray[6] = (6 + 1) * 10;
	myIntArray[7] = (7 + 1) * 10;
	myIntArray[8] = (8 + 1) * 10;
	myIntArray[9] = (9 + 1) * 10;

    for(int j = 0; j < 5; j++)
    {
        myFloatArray[j] = myFloatArray[j] * 1.1;
    }

    myCharArray[0] = 'Y';
    myCharArray[1] = 'O';
    myCharArray[2] = 'U';
    myCharArray[3] = 'N';
    myCharArray[4] = 'G';

    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);

    return 0;
}