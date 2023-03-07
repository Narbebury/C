#include <stdio.h>
#include <string.h>

struct alumno
{
    char apellido[40];
    char nombre[40];
} matriz[2][1];

void main()
{
    FILE *archivo = fopen("prueba.txt", "rt");

    if (archivo == NULL)
    {
        printf("Error al intentar abrir el archivo");
        return 1;
    }

    while (feof(archivo) == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                fscanf(archivo, "%s", &matriz[i][j]);
                //fscanf(archivo,"%s", &matriz[i][j + 1].nombre);
                //printf("%s %s", matriz[i][j]);
            }
            printf("\n");
        }
    }

    fclose(archivo);
}