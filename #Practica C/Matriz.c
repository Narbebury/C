#include <stdio.h>
#include <string.h>

struct alumno
{
    char apellido[40];
    char nombre[40];
} matriz[2][1];

void main()
{
    FILE * archivo=fopen("prueba.txt","w");

    if (archivo == NULL)
    {
        printf("Error al intentar abrir el archivo");
        return 1;
    }
    
    struct alumno;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("Ingrese el apellido del alumno: \n");
            scanf("%s", &matriz[i][j].apellido);
            printf("\nIngrese el nombre del alumno: ");
            scanf("%s", &matriz[i][j + 1].nombre);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            fprintf(archivo,"%s,", matriz[i][j].apellido);
            fprintf(archivo,"%s\n", matriz[i][j + 1].nombre);
        }
    }
    fclose(archivo);
}