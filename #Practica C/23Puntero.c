#include <stdio.h>
/*Definir dos variables enteras y no inicializarlas.
Definir una variable punteroa  aentero, hacer que apunte sucesivamente a las dos variables enteras definidas previamente y cague
sus contenidos. Imprimir las 2 variables enteras*/
void main()
{
    int var1, var2;
    int *puntero;

    puntero = &var1;
    *puntero = 100; //en la variable 1 guardo el 100

    puntero = &var2;
    *puntero=200;
    printf("Valor de variable 1: %i\n",var1);
    printf("Valor de la variable 2: %i", var2);
}