/*Programa para obtener el promedio de calificaciones de un grupo mediante una repeticion controlada por contador          */

#include <stdio.h>

int main()
{

    int contador, calificacion, total, promedio;
    total = 0;
    contador = 1;

    while (contador <= 10)
    {
        printf("Introduzca la calificacion: \n");
        scanf("%d", &calificacion);   //Lee la calificacion del usuario
        total = total + calificacion; //Suma la calificacion al total
        contador = contador + 1;      //Incrementa el contador
    }

    //Fase de terminacion
    promedio = total / 10;

    printf("El promedio del grupo es de %d\n", promedio);

    return 0;
}