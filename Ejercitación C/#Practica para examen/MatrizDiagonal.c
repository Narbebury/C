#include <stdio.h>
#include <stdlib.h>

//Una matriz es un array de 2 o mas dimenciones

void main()
{                     //m  n
    int matriz[3][3]; //m cantidad de filas y n cantidad de columnas
    //int num1 = 0;
    //int num2 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese el valor de la posicion (%i,%i):", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //fflush(stdin);

    printf("\n");

    //Recorro la matriz
    printf("Matriz\n");
    for (int i = 0; i < 3; i++) //filas
    {
        for (int j = 0; j < 3; j++) //columnas
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Principal\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d \t", matriz[i][j]);
            }
        }
    }

    printf("\nDiagonal secundaria\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i + j) == (3 - 1))
            {
                printf("%d \t", matriz[i][j]);
            }
        }
    }
}