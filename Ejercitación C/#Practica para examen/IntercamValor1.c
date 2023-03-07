#include <stdio.h>
//intercambia valores de dos variables con una funcion.
void cambio(int *a,int *b);//prototipo de la función

void main()
{
    int x, y;

    x = 5;
    y = 10;
    printf("El valor de x es: %i\nEl valor de y es: %i\n",x,y);

    cambio(&x, &y); //paso las direcciones

    printf("El valor actual de x es: %i\nEl valor actual de y es: %i", x, y);
}

void cambio(int *a, int *b)//a = x. La variable a comparte el valor que existe en la memoria de x
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}