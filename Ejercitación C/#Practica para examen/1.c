/*Desarrollo un programa que cargue una matriz de 8 x 8 utilizando la función RAND() de tal manera que las filas pares se 
carguen con valores entre el 100 y 200 (inclusive) y las filas impares con valores entre el 200 y 300 (inclusive). 
Luego de cargar la matriz, mostrar por pantalla la sumatoria de las filas 4 + 5 y los valores máximos de las columnas 2 y 6.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
    srand(time(NULL));
    char matriz[8][8];

    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if (matriz[i % 2 == 0])
            {   //fila par valor entre 100 y 200
                //fila impar entre 300 y 400
                printf("%c \t", matriz[i][j] = "par");
            }
            else
            {
                printf("%c \t", matriz[i][j] = "impar");
            }
        }
        printf("\n");
    }
}