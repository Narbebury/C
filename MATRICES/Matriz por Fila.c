/*POR FILA                       
  1 2 3 4 5 6
1 # # # # # #
2 # # # # # #
3 # # # # # #
4 # # # # # #
5 # # # # # #
*/
#include <stdio.h>

void main()
{

    int Matriz[5][6];                            

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            Matriz[i][j] = (rand() % 10);
        }
    }

    int minimo = 0;
    int temp;
    int iElementos = 6;

    for (int k = 0; k < 5; k++) //POR CADA FILA DE LA MATRIZ
    {

        //ordenamiento SELECCION    ORDENAR TODAS LAS COLUMNAS DE LA FILA
        for (int i = 0; i < iElementos - 1; i++)
        {
            minimo = i;
            for (int j = i + 1; j < iElementos; j++)
            {

                if (k % 2 == 0)
                {
                    if (Matriz[k][minimo] > Matriz[k][j])
                    {
                        minimo = j;
                    }
                }
                else
                {
                    if (Matriz[k][minimo] < Matriz[k][j])
                    {
                        minimo = j;
                    }
                }
            }
            temp = Matriz[k][minimo];
            Matriz[k][minimo] = Matriz[k][i];
            Matriz[k][i] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i \t", Matriz[i][j]);
        }
        printf("\n");
    }
}