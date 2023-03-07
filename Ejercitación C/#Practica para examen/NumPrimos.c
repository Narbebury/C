#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Variables a utilizar en el programa
    int numero = 0;
    int divisores = 0;
    int primo = 0; // primo = 0 no primo = 1

    // Solicitar numero entero hasta valor -1
    do
    {
        printf("\nIngrese un numero para saber si es primo: ");
        scanf(" %d", &numero);
        if (numero != -1 && numero > 0)
        {
            // el numero es valido comprobar si es primo
            primo = 0;
            divisores = 2;
            while (divisores < numero && primo != 1)
            {
                if (numero % divisores == 0)
                    primo = 1;
                divisores++;
            }
            // Si primo vale 0 es que el numero es primo
            if (primo == 0)
            {
                printf("\nEl numero %d es primo", numero);
            }
            else
            {
                printf("\nEl numero %d no es primo", numero);
            }
        }
    } while (numero != -1);
    return 0;
}