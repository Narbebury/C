//Ordenamiento por metodo de burbuja usando un aux

//Intercambiar los valores de los numeros enteros

#include <stdio.h>

int main()
{
    int x, y, aux;
    
    printf("El valor de x es: \n");
    scanf("%i", &x);

    printf("El valor de y es: \n");
    scanf("%i", &y);

    aux = x; //Al valor que salvamos en auxiliar le ponemos el valor de la otra variable
    x = y;
    y = aux;

    printf("El nuevo valor de x es: %i",x);
    printf("\n");
    printf("El nuevo valor de y es: %i",y);

    return 0;
}