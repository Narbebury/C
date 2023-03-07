#include <stdio.h>

int main()
{
    int vector[10] = {1, 11, 33, 55, 66, 25, 6, 9, 8, 7};
    int vector2[10] = {88, 22, 12, 13, 14, 16, 79, 74, 72, 10};
    printf("Conjunto 1: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i,", vector[i]);
    }
    
    printf("\nConjunto 2: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i,", vector2[i]);
    }
  
    printf("\nConjunto 1 Ordenado: ");
    int aux = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vector[j] > vector[j + 1])
            {

                aux = vector[j + 1];
                vector[j + 1] = vector[j];
                vector[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%i,", vector[i]);
    }
    printf("\n");
    
    printf("Conjunto 2 Ordenado: ");
    int aux2 = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vector2[j] > vector2[j + 1])
            {
                aux2 = vector2[j + 1];
                vector2[j + 1] = vector2[j];
                vector2[j] = aux2;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i,",vector2[i]);
    }
    
    return 0;
}