#include <stdio.h>
#include <math.h>
//programa para sumar los resultados de examenes. Se nos da una lista de diez estudiantes
//junto a cada nombre se escribe un 1 si es estudiante paso y un 2 si lo reprobo


int main()
{
    int aprobados = 0;
    int reprobados = 0;
    int estudiante = 1;
    int resultado;

    
    while (estudiante <= 10)
    {
        printf("Introduzca el resultado: 1 para aprobado y 2 para reprobado\n");    
        scanf("%d", resultado);

        if (resultado == 1)
        {
           aprobados++;
        }
        else
        {
            reprobados++;
        }
        estudiante++;
    }
    printf("Estudiantes aprobados: %d \n", aprobados);
    printf("Estudiantes reprobados: %d \n", reprobados);

    if (aprobados >= 8)
    {
        printf("Objetivo alcanzado");
    }

    return 0;
}