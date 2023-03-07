/*Escriba el código necesario para que ingresando una moneda de origen, una modena de destino y el valor de origen
nos convierta al valor de la nueva moneda considerando hasta 2 decimales.
Considerar para las conversiones las monedas:
Pesos,Dolares,Reales,Euros.
Y sus valores respecto al peso Argentino:
A: u$s 65.09
B: r$ 12.70
C: 70.7*/

#include <stdio.h>

int main()
{

    float Pesos, Dolares, Reales, Euros, TotalEuros, TotalDolares, TotalReales;
    int operacion;
    Dolares = 65.09;
    Reales = 12.70;
    Euros = 70.7;

    printf("Ingrese con numero la operacion que quiere realizar:\n");
    printf("1:Compra de Dolares\n");
    printf("2:Compra de Reales\n");
    printf("3:Compra de Euros\n");
    scanf("%d", &operacion);

    switch (operacion)
    {
    case 1: 
        printf("Ingrese la cantidad de pesos que tiene\n");
        scanf("%f", &Pesos);
        TotalDolares = (float) Pesos * Dolares;
        printf("La conversion de pesos a dolares es de: %.2f", TotalDolares);
        break;

    case 2:
        printf("Ingrese la cantidad de pesos que tiene\n");
        scanf("%f", &Pesos);
        TotalReales = (float) Pesos * Reales;
        printf("La conversion de pesos a dolares es de: %.2f", TotalReales);
        break;

    case 3:
        printf("Ingrese la cantidad de pesos que tiene\n");
        scanf("%f", &Pesos);
        TotalEuros = (float) Pesos * Euros;
        printf("La conversion de pesos a euros es de: %.2f", TotalEuros);
        break;

    default:
        break;
    }

    return 0;
}
