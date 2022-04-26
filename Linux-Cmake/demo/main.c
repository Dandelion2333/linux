#include <stdio.h>
#include "dandelion.h"

int main()
{
    int a = 5;
    int b = 6;

    int c = func_add(a, b);
    
    printf("c:%d\n", c);

    return 0;
}