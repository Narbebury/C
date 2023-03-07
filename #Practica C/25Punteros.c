#include <stdio.h>

/*Funcion que reciba como parámetros las direcciones de dos variables enteras y le cargue a lo apuntado por dichas variables dos
enteros*/

void cargar(int *p, int *p2)
{
    *p = 100;
    *p2 = 200;
}

void main()
{
    int x1, x2;
    cargar(&x1, &x2); //llamo a cargar y le paso la direccion de x1 y x2

    printf("x1:%i \nx2:%i", x1, x2);
}