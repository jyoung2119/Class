//Simple program utilizes conditional compilation
#include <stdio.h>

//Uncomment which version you wish to run.
//#define VER1 1
#define VER2 2
//#define VER3 3

int main()
{
    #ifdef VER1
    printf("Version 1 is activated.\n");
    #endif
    #ifdef VER2
    printf("Version 2 is activated.\n");
    #endif
    #ifdef VER3
    printf("Version 3 is activated.\n");
    #endif

    return 0;
}