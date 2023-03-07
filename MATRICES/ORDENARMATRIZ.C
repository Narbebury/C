#include <stdio.h>
#include <stdlib.h>

main()
{
    int iMatriz[20][15], minimo=0, temp;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            iMatriz[i][j] = (rand() % 899 + 100);
        }
    }

    printf("\nMatriz desordenada\n");


    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            printf("  %i",iMatriz[i][j]);
        }
    printf("\n");
    }
    
    //recorrer columnas
    for (int j = 0; j < 15; j++)
    {
        //ordenamiento
        for (int i = 0; i < 19; i++)
        {
            minimo = i;
            for (int elemento = i + 1; elemento < 20; elemento++)
            {
                if (iMatriz[minimo][j] > iMatriz[elemento][j])   //de menor a mayor
                {
                    minimo = elemento;
                }
            }
            temp = iMatriz[minimo][j];
            iMatriz[minimo][j] = iMatriz[i][j];
            iMatriz[i][j] = temp;
        }
    }
    
    printf("\nMatriz ordenada\n");


    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            printf("  %i",iMatriz[i][j]);
        }
    printf("\n");
    }
    
    printf("\n\n");

}
