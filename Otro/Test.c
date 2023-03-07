//Programa para cuadrados y cubos del 0 al 10 y use tabuladores para 
//despejar la siguente tabla de valores

#include <stdio.h>

int main()
{
    int numero, cuadrado, cubo, contador;
    numero = 0;
    contador = 0;
   

    while (contador <= 10)
    {
        printf("Numero %i \n",numero);
        printf("\t");
        printf("Cuadrado %i \n",cuadrado);
        printf("\t");
        printf("Cubo %i \n",cubo);
        numero++;
        cuadrado = numero * numero;
        cubo = numero * numero * numero;
        contador++;    
    
    }
     
    return 0;
}