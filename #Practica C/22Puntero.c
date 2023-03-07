#include <stdio.h>

void main()
{
    int num1 = 10, num2 = 20;
    int *pe;
    pe = &num1;

    printf("Lo apuntado por pe es: %i\n", *pe);
    printf("La direccion que almacena pe es: %p\n", pe);
    pe = &num2;
    printf("Lo apuntado en pe es: %i\n", *pe);
    printf("La direccion que almacena pe es: %p", pe);
}