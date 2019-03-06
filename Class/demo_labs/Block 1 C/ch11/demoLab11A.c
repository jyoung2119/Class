#include <stdio.h>

int main()
{
    int var1, var2;

    int *var_ptr;

    var1 = 5;

    var_ptr = &var1;

    var2 = *var_ptr;

    printf("%i, %p & %i, %p\n", var1, &var1, var2, &var2);
}