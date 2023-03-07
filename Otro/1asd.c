/*En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre.
Si las computadoras son menos de cinco se les dará un 3% de descuento sobre el total de la compra; si el número de computadoras es
mayor o igual a cinco pero menos de diez se le otorga un 5% de descuento; y si son 10 o más se les da un 10% de descuento.
El precio de cada computadora es de $41,000*/

#include <stdio.h>
int main()
{
    int compra;
    float precio_total, descuento1;

    printf("Ingrese la cantidad de computadoras que quiere comprar \n");
    scanf("%i", &compra);

    if (compra < 5)
    {
        precio_total = (41.000 * compra) * 3 / 100;
        printf("el precio es: %.2f", precio_total);
    }
    else
    {
        if (compra >= 5 && < 10)
        {
            precio_total = (41.000 * compra) * 5 / 100;
            printf("el precio es: %.2f", precio_total);
        }
    }
    if (compra > 10)
    {
        precio_total= (41.000* compra) *10 /100;
        printf("el precio es: %.2f",precio_total);
    }
    
    
    printf("Ingrese la calificacion del alumno:\n");
    scanf("%i",&calificacion);
    
    if ( compra < 5)
        precio_total= compra*41.000;
        descuento1= (precio_total *3) /100 ;
        printf("El precio es: %.2f \n el precio con descuento es: %.2f",precio_total,descuento1);
    else
        if (compra >= 80)
            printf("B\n");
        else
            if (calificacion >= 70)
                printf("C\n");
            else
                if (calificacion >= 60)
                    printf("D\n");
                else
                    printf("F\n"); 



    return 0;
}