/*Programa para obtener el promedio de calificaciones de un grupo mediante una repeticion controlada por centinela*/

#include <stdio.h>

int main()
{
    int contador, calificacion, total;
    float promedio;

    /*Face de inicialización*/
    total = 0;
    contador = 0;

    /*Fase de procesamiento*/
    /*Obtiene la primera calificación del usuario*/
    printf("Introduzca la calificacion del usuario, ingrese -1 para finalizar: \n");
    scanf("%d", &calificacion);

    /*Repite el ciclo mientras no se introduzca el valor centinela*/
    while (calificacion != -1)
    {
        total = total + calificacion; //Suma calificacion a total
        contador++;                   //incrementa el contador

        /*obtiene la siguente calificacion del usuario*/
        printf("Introduzca la calificaicon, ingrese -1 para finalizar: \n");
        scanf("%d", &calificacion);
    }

    /*Fase de terminación*/
    /*Si el usuario introdujo al menos una calificación*/
    if (contador != 0)
    {
        /*Calcula el promedio de todas las calificaciones introducidas*/
        promedio = (float)total / contador;
        printf("El promedio del grupo es: %.2f\n", promedio);
    }
    else
    { /*Si no se introdujo calificaicon alguna, despliega el mensaje*/
        printf("No se introdujeron calificaciones \n");
    }

    return 0;
}