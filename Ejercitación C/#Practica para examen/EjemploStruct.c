#include <stdio.h>

struct alumno //Estructura de alumno
{
    char apellido[20];
    char nombre[20];
    int edad;
};

struct alumno alumnos[5]; //Declaro array de 20 alumnos

void main()
{
    for (int i = 1; i < 5; i++)
    {
        printf("Ingres el apellido del alumno %d\n",i);
        scanf("%s",&alumnos[i].apellido);

        printf("Ingrese el nombre del alumno %d\n",i);
        scanf("%s",&alumnos[i].nombre);

        printf("Ingrese la edad del alumno %d\n",i);
        scanf("%d",&alumnos[i].edad);
    }

    for (int i = 1; i < 5; i++)
    {   
        printf("Alumno Nro %d\n",i);
        printf("Apellido: %s \nNombre: %s \nEdad: %d\n", alumnos[i].apellido,alumnos[i].nombre,alumnos[i].edad);
        printf("\n");
    }

    FILE *archivo = fopen("alumnos.txt", "wt");

    if (archivo == NULL)
    {
        printf("Error al intentar abrir el archivo");
    }
    
    for (int i = 1; i < 5; i++)
    {
        fprintf(archivo, "%s %s %i \n", alumnos[i].apellido, alumnos[i].nombre,alumnos[i].edad);
    }
    fclose(archivo);


    /*leemos
    archivo = fopen("alumnos.txt","rt");

    for (int i = 0; i < 5; i++)
    {
        fscanf(archivo,"%s %s %s", alumnos[i].apellido, alumnos[i].nombre,alumnos[i].edad);
    }
    */

}