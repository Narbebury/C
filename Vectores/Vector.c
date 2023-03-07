#include <stdio.h>

int main()
{
    int vector[10];
    printf("Ingrese 10 numeros para llenar el vector\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese numero vector[%i]",i+1);
        scanf("%i",&vector[i]);
    }

    printf("El vector es:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("vector[%i]=%i\n",i+1,vector);
        printf("\n");
    }

   return 0; 
} 