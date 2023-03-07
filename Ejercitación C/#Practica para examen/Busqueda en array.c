#include <stdio.h>

void main()
{
    int vector[] = {5, 9, 7, 14, 3};
    int bandera; //el valor no esta
    int busqueda;

    printf("Ingrese el valor que busca");
    scanf("%d", &busqueda);

    for (int i = 0; i < 5; i++)
    {
        if (vector[i] == busqueda)
        {
            bandera = 1;
            
        }
        
        
    }
    if (bandera==1)
        {
            printf("Valor encontrado\n");
        }
        else
        {
            printf("El Valor %d no fue encontrado",busqueda);
        }  
}