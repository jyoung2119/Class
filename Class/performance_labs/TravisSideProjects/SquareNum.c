#include <stdio.h>
#include <stdlib.h>
int main()
{
    double input = 1;
    double holder = 0;

    while(input != 0)
    {
        printf("Enter a number (Enter 0 to exit):\n");

        if(!fscanf(stdin, "%lf", &input))
        {
            printf("Why do you suck?\n");
            break;
        }

        if(input == 0)
        {
            break;
        }

        system("clear");
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input, input+1, input+2, input+3, input+4, input+5, input+6, input+7, input+8);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+31, input+32, input+33, input+34, input+35, input+36, input+37, input+38, input+9);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+30, input+55, input+56, input+57, input+58, input+59, input+60, input+39, input+10);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+29, input+54, input+71, input+72, input+73, input+74, input+61, input+40, input+11);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+28, input+53, input+70, input+79, input+80, input+75, input+62, input+41, input+12);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+27, input+52, input+69, input+78, input+77, input+76, input+63, input+42, input+13);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+26, input+51, input+68, input+67, input+66, input+65, input+64, input+43, input+14);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+25, input+50, input+49, input+48, input+47, input+46, input+45, input+44, input+15);
        printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", input+24, input+23, input+22, input+21, input+20, input+19, input+18, input+17, input+16);
        
        printf("\n");

    }
    return 0;
}