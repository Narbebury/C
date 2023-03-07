#include <stdio.h>

void main()
{
    int Matriz[3][3];
    int fila, columna;

    for (fila = 0; fila <= 2; fila++)
    {
        for (columna = 0; columna <= 2; columna++)
        {
            printf("Digite el valor el valor en la posicion [%d] [%d]: ", fila, columna);
            scanf("%d", &Matriz[fila][columna]);
        }
    }
    printf("\n");

    //IMPRIMO MATRIZ.
    for (fila = 0; fila <= 2; fila++)
    {
        for (columna = 0; columna <= 2; columna++)
        {
            printf("[%d]", Matriz[fila][columna]);
        }
        printf("\n");
    }

    //IMPRIMO PARA SABER EL VALOR DE LA DIAGONAL.
    for (fila = 0; fila <= 2; fila++)
    {
        for (columna = 0; columna <= 2; columna++)
        {
            if (fila == columna)
                printf("La diagonal es: [%d] [%d]: [%d]", fila, columna, Matriz[fila][columna]);
        }
        printf("\n");
    }
}