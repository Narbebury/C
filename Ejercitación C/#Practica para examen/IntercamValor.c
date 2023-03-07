#include <stdio.h>
//puntero

void main()
{
    int x, *y;

    x = 4;
    y = &x; //toma el valor de x

    printf("El valor de *y es: %i\n", *y); //*y señala el valor de x
}