/*Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares*/

#include <stdio.h>

int main()
{
    int opcion;
    float agregar,retirar,saldo=1000;;

    printf("\t Bienvenido a su Cajero Virtual");
    printf("\n 1-Ingreso en cuenta");
    printf("\n 2-Retirar dinero de la cuenta");
    printf("\n 3-Salir");
    printf("\n Opcion: ");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Cuanto dinero desea ingresar en la cuenta");
        scanf("%f");
        saldo = saldo + agregar;
        printf("El saldo total es: %2.f",saldo);
        break;
    case 2:
        printf("Cuanto dinero desea retirar");
        scanf("%f",&retirar);
        if (retirar > saldo)
        {
            printf("La cantidad a retirar es mayor al saldo");
        }
        else
        {
            saldo = saldo - retirar;
            printf("El saldo disponible es de: %2.f",saldo);
        }
        break;
    case 3:
        break;
    default: printf("Se equivoco de opcion de menu");
        break;
    }

    return 0;
}