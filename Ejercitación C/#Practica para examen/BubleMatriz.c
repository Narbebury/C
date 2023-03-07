#include <stdio.h>

void main()
{
    int matriz[5][6];

    //cargo matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Ingrese valor en la posicion (%d,%d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Imprimo matriz\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    int minimo = 0;
    int temp;
    printf("asd\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            minimo = i;
            for (int elemento = i + 1; elemento < 6; elemento++)
            {
                if (matriz[minimo][j] > matriz[elemento][j])
                {
                    minimo = elemento;
                }
            }
            temp = matriz[minimo][j];
            matriz[minimo][j] = matriz[i][j];
            matriz[i][j] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}