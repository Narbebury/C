/*Hacer un menu que considere las siguentes opciones
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: Salir */

#include <stdio.h>

int main()
{
    int numero,cubo ,opcion;
    
    printf("Ingrese 1 para saber el cubo de un numero\n");
    printf("Ingrese 2 para saber si un numero es par o impar\n");
    scanf("%i", opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese el número",163);
        scanf("%i",&numero);
        cubo = numero * numero * numero;
        printf("El cuadrado de %i es: %i",numero,cubo);
        break;

    case 2:
        printf("Ingrese el numero");
        scanf("%i",&numero);

        if (numero %2 == 0)
        {
            printf("El numero %d es par",numero);
        }
        else
        {
            printf("El numero %d es impar",numero);
        }
        
        break;
    default:
        break;
    }
}