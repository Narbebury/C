/*
•	Ejercicio 3)
Ingresar 3 números enteros:
a)	mostrarlos ordenarlos de Mam 
b)	mostrarlos ordenados de maM
c)	Mostrar su promedio*/
#include <stdio.h>
int main()
{
    int Num1, Num2, Num3;
    printf("Ingrese 3 numeros:\n");
    scanf("%i %i %i", &Num1, &Num2, &Num3);

    //Mayor a menor
    if (Num1 > Num2 && Num1 > Num3)
    {
        if (Num2 > Num3)
            printf("Mayor a menor %d %d %d \n", Num1, Num2, Num3);
        else
            printf("Mayor a menor %d %d %d \n", Num1, Num3, Num2);
    }

    if (Num2 > Num1 && Num2 > Num3)
    {
        if (Num1 > Num3)
            printf("Mayor a menor %d %d %d \n", Num2, Num1, Num3);
        else
            printf("Mayor a menor %d %d %d \n", Num2, Num3, Num1);
    }

    if (Num3 > Num1 && Num3 > Num2)
    {
        if (Num1 > Num2)
            printf("Mayor a menor %d %d %d \n", Num3, Num1, Num2);
        else
            printf("Mayor a menor %d %d %d \n", Num3, Num2, Num1);
    }

    //De Menor a Mayor

    if (Num1 < Num2 && Num1 < Num3)
    {
        if (Num2 < Num3)
            printf("Menor a mayor %d %d %d\n", Num1, Num2, Num3);
        else
            printf("Menor a mayor %d %d %d\n", Num1, Num3, Num2);
    }

    if (Num2 < Num1 && Num2 < Num3)
    {
        if (Num1 < Num3)
            printf("Menor a mayor %d %d %d\n", Num2, Num1, Num3);
        else
            printf("Menor a mayor %d %d %d\n", Num2, Num3, Num1);
    }

    if (Num3 < Num1 && Num3 < Num2)
    {
        if (Num1 < Num2)
            printf("Menor a mayor %d %d %d\n", Num3, Num1, Num2);
        else
            printf("Menor a mayor %d %d %d\n", Num3, Num2, Num1);
    }

    printf("El promedio es: %f", (Num1 + Num2 + Num3)/ 3.00);

    return 0;
}