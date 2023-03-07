#include <stdio.h>
void operacion(int *n)
{
    int y = *n;
    y = (y + 2) / 2 + 2 - (3 * y);
    *n = y;
    printf("%d\n", y);
}

void main()
{
    int x = 10;
    operacion(&x);
}