#include <stdio.h>

void main()
{
    int vector[8];
    int suma = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Ingrese valores numericos: ");
        scanf("%i", &vector[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        suma = suma + vector[i];
    }
    printf("La suyma de los 8 elemntos es: %i\n", suma);
    int mayor36 = 0;
    int mayor50 = 0;

    for (int i = 0; i < 8; i++)
    {
        if (vector[i] > 36)
        {
            mayor36 = mayor36 + vector[i];
        }
        if (vector[i] > 50)
        {
            mayor50 = mayor50 + vector[i];
        }
    }
    printf("El valor acumulado de los elementos mayores a 36 es: %i\n",mayor36);
    printf("El valor acumulado de los elementos mayores a 50 es: %i\n",mayor50);

}
