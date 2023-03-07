#include <stdio.h>
#include <stdbool.h>

void main()
{
    int Vector_A[10] = {1, 5, 6, 8, 7, 9, 10, 2, 3, 4};
    int Vector_B[16] = {50, 1, 3, 4, 87, 21, 45, 787, 25, 31, 44, 1, 2, 33, 6, 47};
    int vectorfinal[16];
    int iBandera;
    int contador = 0;

   
    for (int i = 0; i < 16; i++) //Recorro Vector_A
    {
        iBandera = 0;

        for (int j = 0; j < 10; j++) //Recorro Vector_B
        {
            if (Vector_B[i] == Vector_A[j])
            {
                iBandera = 1;
            }
        }

        if (iBandera == 0)
        {
            printf("%d,", Vector_B[i]);
            vectorfinal[contador] = Vector_B[i];
            contador++;
        }
    }
    FILE * archivo=fopen("Vector.txt","wt");

    if (archivo == NULL)
    {
        printf("Error al intentar abrir el archivo");
    }
    
    for (int i = 0; i < 10; i++)
    {
        fprintf(archivo,"%d,",vectorfinal[i]);
    }
    fclose(archivo);

    
}








