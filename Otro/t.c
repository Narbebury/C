/*Una tienda ofrese un descuento de 15% al totald e la compra y un cliente desea saber cuanto debera pagar finalmente*/

#include <stdio.h>

int main()
{
    float Total_compra, descuento,precio;

    printf("Ingrese el gasto del cliente\n");
    scanf("%f", &Total_compra);

    descuento = Total_compra * 0.15;
    precio = Total_compra - descuento;

    printf("El precio final es de: %.2f", precio);

    return 0;
}