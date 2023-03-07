#include <stdio.h>

int main(){
    //Los vectores comienzan en posicion 0
   /* int v[] = {3,5,8,7,9};
    
    printf("El valor de la posicion 0 es: %i",v[0]);

    for (int i = 0; i < 5; i++)//Muestrolos numeros del vector
    {
        printf("%i",v[i]);
    }
    */
    //Darle valor a un vector de 10 enteros y leerlos despues
    int v2[10];//Guardo 10 espacios para asignar  

    for (int i2 = 0; i2 < 10; i2++)//Doy valores a v
    {
        printf("Darle valor al vector en la posicion %i:\n",i2);
        scanf("%i",&v2[i2]);
    }
    
    //Leo valores de v
    for (int i2 = 0; i2 < 10 ; i2++)
    {
        printf("%i,",v2[i2]);
    }
    
    return 0;
}