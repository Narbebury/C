/*Se desea guardar el sueldo de 5 operarios*/

#include <stdio.h>

void main()
{   
    float altura[5];
    float suma,promedio;
    int mayor,menor;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese la altura de la persona %i: ",i+1);
        scanf("%f",&altura[i]);
    }
    
    suma = 0;
    
    for (int i = 0; i < 5; i++)
    {
        suma = suma + altura[i];
        
    }
    promedio = suma / 5;
    
    printf("el promedio es: %0.2f",promedio);
    printf("\n");
    mayor = 0;
    menor = 0;

    for (int i = 0; i < 5; i++)
    {
        if (altura[i]>promedio)
        {
            mayor++;
        }
        else
        {
            menor++;
        }
        
    }
    printf("Cantidad de peronas con altura mayor al promedio: %i\n",mayor);
    
    printf("Cantidad de peronas con altura menor al promedio: %i",menor);







}