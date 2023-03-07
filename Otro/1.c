/*

5.  media = (precio1 + precio2 + precio3) / 3

6.  Mostrar “El precio medio del producto es”, media, “Euros” 

7.  Fin [aprenderaprogramar.com]
*/
#include <stdio.h>


int main()
{
    int Precio1,Precio2,Precio3;
    float Precio_Medio;

    printf("Introduzca el precio del producto en el establecimiento número 1, en euros \n");
    scanf("%i",&Precio1);
    printf("Introduzca el precio del producto en el establecimiento número 2, en euros \n");
    scanf("%i",&Precio2);

    printf("Introduzca el precio del producto en el establecimiento número 3, en euros \n");
    scanf("%i",&Precio3);

    Precio_Medio = (Precio1 + Precio2 + Precio3) / 3;

    printf("El precio medio del producto es %f \n",Precio_Medio);

    return 0;
}