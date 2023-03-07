#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variables a utilizar
    int cuantos;
    int *Vector;
    FILE *fichero;
    int numero;
    int contador;

    // Crear array dinamico de memoria
    cuantos = 10;
    Vector = (int *)malloc(sizeof(int) * cuantos);
    // leer archivo de datos y asignar los valores al array dinamico

    fichero = fopen("archivo.dat", "rt");
    if (!fichero)
    {
        printf("\nError en la apertura del archivo archivo.dat. Compruebe que exista.");
        exit(1);
    }

    contador = 0;
    while (!feof(fichero) && contador < 10)
    {
        fscanf(fichero, "%d\n", &numero);
        Vector[contador] = numero;
        contador++;
    }
    // Cerrar archivo
    fclose(fichero);
    // pedir valor numerico
    printf("\nTeclee valor numerico ...: ");
    scanf(" %d", &numero);

    for (contador = 0; contador < 10; contador++)
    {
        Vector[contador] *= numero;
        printf("\n-> %d ", Vector[contador]);
    }
    // liberar memoria y salir del programa
    free(Vector);
    return 0;
}