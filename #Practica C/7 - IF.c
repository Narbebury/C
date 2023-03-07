/*Uso de instrucciones IF, Operadores de instrucción y de igualdad*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Introduzca dos enteros para saber su relacion \n");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
        printf("%d es igual %d \n", num1, num2);
    }

    if (num1 != num2)
    {
        printf("%d es distinto de %d \n", num1, num2);
    }

    if (num1 < num2)
    {
        printf("%d es menor a %d \n", num1, num2);
    }

    if (num1 <= num2)
    {
        printf("%d es menor o igual a %d \n", num1, num2);
    }

    if (num1 > num2)
    {
        printf("%d es mayor a %d \n", num1, num2);
    }

    if (num1 >= num2)
    {
        printf("%d es mayor o igual a %d \n", num1, num2);
    }

    return 0;
}