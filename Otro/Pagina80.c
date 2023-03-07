/*formule un algoritmo para:
a)obtener 2 numeros desde el teclado, calculo la suma de los numeros y despliegue el resultado.
b)obtenga 2 numeros desde el teclado y determine y despliegue cual (si existe) es el mayor de los 2.
c) Obtenga una serie de numeros positivos desde el teclado y determine y despliogue la suma de los numeros.
Asuma que el usuario introduce un valor centimela -1 para indicar el fin de la entrada de datos*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, suma;
    unsigned num5;
    int suma_total = 0;
    /*
    printf("a) Ingrese 2 numeros que quiera sumar\n");
    scanf("%d %d", &num1, &num2);
    suma = num1 + num2;
    printf("la suma es:%d", suma);
    */
    printf("\n");
    printf("B) Ingrese 2 numeros para saber cual es mayor\n");
    scanf("%d %d", &num3, &num4);
    //num3 > num4 ? printf("El numero %d es mayor al numero %d", num3, num4) : printf("El numero %d es mayor al numero %d", num4, num3);
    if (num3 > num4)
    {
        printf("El numero %d es mayor que el numero %d", &num3, &num4);
    }
    else if (num3 = num4)
    {
        printf("Los numeros son iguales:%d = %d", num3, num4);
    }
    /*
    


    printf("\n");
    while (num5 != -1)
    {
        printf("Ingrese un numero para sumar\n");
        scanf("%d",&num5);
        suma_total = suma_total + num5;
        
    }
    printf("La suma de los numeros ingresado es:%d",suma_total);
    */
    return 0;
}