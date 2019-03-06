/*
    Author: Jared Young
    Date: 08 FEB 2019;
    Project: Performance Lab 7.3A
    Description: Utilize for loops in a previously completed lab.
*/
#include <stdio.h>

int main()
{
 	/*int myIntArray[10] = {0};
	myIntArray[0] = 100;
 	myIntArray[1] = 100;
 	myIntArray[2] = 100;
 	myIntArray[3] = 100;
 	myIntArray[4] = 100;
 	myIntArray[5] = 100;
 	myIntArray[6] = 100;
 	myIntArray[7] = 100;
 	myIntArray[8] = 100;
 	myIntArray[9] = 100;
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

 	myFloatArray[0] = myFloatArray[0] * 1.1;
	myFloatArray[1] = myFloatArray[1] * 1.1;
	myFloatArray[2] = myFloatArray[2] * 1.1;		//There must be a better way!!
	myFloatArray[3] = myFloatArray[3] * 1.1;
	myFloatArray[4] = myFloatArray[4] * 1.1;

    myCharArray[0] = 'Y';
    myCharArray[1] = 'O';
    myCharArray[2] = 'U';
    myCharArray[3] = 'N';
    myCharArray[4] = 'G';

    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);*/

    int myIntArray[10] = {0};
    //Inputs 100 in every index of array
    for(int i = 0; i < 10; i++)
    {
        myIntArray[i] = 100;
    }
    float myFloatArray[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    char myCharArray[256] = {0};

    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);

    //Multiplies every value + 1 by 10 in the array.
    for(int j = 0; j < 10; j++)
    {
        myIntArray[j] = (j + 1) * 10;
    }

    //Multiplies every value by 1.1 in the array.
    for(int k = 0; k < 5; k++)
    {
        myFloatArray[k] = myFloatArray[k] * 1.1;
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