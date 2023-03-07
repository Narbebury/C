#include <stdio.h>

void main()
{
    int f;
    int *pe;
    pe = &f;

    for (*pe = 1; *pe <= 10; *pe = *pe + 1)
    {
        printf("%i\n", f);
    }

    printf("--------------------");

    float x1, x2;
    float *p;

    p = &x1;//p apunta al espacio de memoria de x1
    *p = 10.2;//en x1 guardo 10.2
    p = &x2;
    *p = 20.90;
    printf("\n%0.2f %0.2f", x1, x2);
}