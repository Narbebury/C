#include <stdio.h>
//Programa para agregar elemento al final del array

//valor = valor a agregar
int agregar(int a[], int *posicion, int valor) //recibe el array
{
    a[*posicion] = valor;
    *posicion = *posicion + 1; //*posicion +=1
}

void main()
{
    int numeros[50];
    int longitud = 0; //manejo la longitud del array

    /*Agrego un elemento nuevo*/
    //numeros[longitud] = 35;
    agregar(numeros, &longitud, 35); //numeros es recibida por a,longitud por posicion y 45 por valor
    agregar(numeros, &longitud, 45);
    agregar(numeros, &longitud, 65);
    agregar(numeros, &longitud, 85);

    for (int i = 0; i < longitud; i++)
    {
        printf("posicion %d = %d\n", i, numeros[i]);
    }
}