#include <stdio.h>

void main()
{

    int lista[5][6];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            lista[i][j] = (rand() % 10);
        }
    }

    /*
 1 2 3 4 5 6
1 # # # # # #
2 # # # # # #
3 # # # # # #
4 # # # # # #
5 # # # # # #
*/

    int minimo = 0;
    int temp;
    int iElementos = 5;

    for (int k = 0; k < 6; k++) //POR CADA FILA DE LA MATRIZ
    {

        //ordenamiento SELECCION    ORDENAR TODAS LAS COLUMNAS DE LA FILA
        for (int i = 0; i < iElementos - 1; i++)
        {
            minimo = i;
            for (int j = i + 1; j < iElementos; j++)
            {

                if (k % 2 == 0)
                {
                    if (lista[minimo][k] > lista[j][k])
                    {
                        minimo = j;
                    }
                }
                else
                {
                    if (lista[minimo][k] < lista[j][k])
                    {
                        minimo = j;
                    }
                }
            }
            temp = lista[minimo][k];
            lista[minimo][k] = lista[i][k];
            lista[i][k] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i \t", lista[i][j]);
        }
        printf("\n");
    }
}
