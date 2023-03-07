#include <stdio.h>

int main()
{

    int num1, num2, suma, resta, multiplicacion, division;

    printf("Ingrese un numero \n");
    scanf("%i", &num1);

    printf("Ingrese otro numero \n");
    scanf("%i", &num2);

    printf("\n");

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    printf("La suma es : %i \n", suma);
    printf("La resta es: %i \n", resta);
    printf("La multiplicaciones: %i \n", multiplicacion);
    printf("La division es: %i", division);

    return 0;
}