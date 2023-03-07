#include <stdio.h>

/*Confeccionar un programa que permita cargar un vector de 5 enteros y obtenga el mayor y menor*/

void main()
{

    int Vector[5];
    int aux;

    printf("Cargo Vector:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Cargue el valor para el vector[%i] ", i + 1);
        scanf("%i", &Vector[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (Vector[j] > Vector[j + 1]) //si el numero que esta en la posicion 0 del vector es mayor lo cambia sino no
            {
                aux = Vector[j + 1]; //Si vector en la poscicion 1 es mayor toma el y lo reemplaza valor mayor
                Vector[j + 1] = Vector[j];
                Vector[j] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("valor para el vector[%i]=%i ", i + 1,Vector[i]);
        printf("\n");
    }
    


}