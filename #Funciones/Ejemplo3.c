#include <stdio.h>
#include <stdlib.h>

int sumaDosEnteros(int entero1, int enetero2);

int main()
{
    printf("Bienvenidos al programa \n");
    sumaDosEnteros(3, 5);
    return 0;
}

int sumaDosEnteros(int entero1, int entero2)
{
    int resultado = 0;
    resultado = entero1 + entero2;
    printf("Si sumamos %d y %d obtenemos %d \n", entero1, entero2, resultado);
    return resultado;
}