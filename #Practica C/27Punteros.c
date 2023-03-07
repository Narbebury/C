#include <stdio.h>

/*Implementar una funcion que intercambie el contenido de dos variables enteras, utilizar parametros para solucionarlo*/

void intercambio(int *p, int *p2)
{
    int aux=*p;//almacena el valor entero al que esta apuntando p
    *p=*p2;
    *p2=aux;
}

void main()
{
    int x1 = 10, x2 = 20;

    printf("Valor de x1: %i\n", x1);
    printf("Valor de x2: %i\n", x2);

    intercambio(&x1, &x2);

    printf("Valor de x1 cambiado: %i\n", x1);
    printf("Valor de x1 cambiado: %i", x2);
}