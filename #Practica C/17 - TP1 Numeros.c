/*
•	Ejercicio 1)
Ingresar 3 datos numéricos y mostrarlos separados por tab, considerar enteros y reales
	EJ: 	23  	[tab]  	2 	[tab]  	18

•	Ejercicio 2)
Ingresar 3 letras y mostrarlas en escalinata
	Ej:  	A
		[tab]	B
		[tab] 	[tab]	C
•	Ejercicio 3)
Ingresar 3 números enteros:
a)	mostrarlos ordenarlos de Mam 
b)	mostrarlos ordenados de maM
c)	Mostrar su promedio

•	Ejercicio 4) Calcular el área de un triángulo equilátero. 
Escriba el código para:
a.	Solicitar la base (real)
b.	Solicitar la altura (real)
c.	Calcular el área
d.	Mostrar el siguiente mensaje: El área del triángulo es: [área]
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese 3 numeros\n");
    scanf("%i %i %i", &num1, &num2, &num3);
    printf("%i \t %i \t %i", num1, num2, num3);

    printf("------------------------------------------------------------------------------\nEjercicio 2: ");

    char let1, let2, let3;

    printf("Ingrese 3 letras\n");
    scanf("%c %c %c", &let1, &let2, &let3);
    printf("%c \n\t %c \n\t\t %c",let1, let2, let3);
    
    return 0;
}