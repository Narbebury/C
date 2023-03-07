/*Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno*/
#include <stdio.h>

void main()
{
    float SueldoturnoMan[4];
    float SueldoturnoTar[4];
    float man = 0, tar = 0;

    printf("Sueldo de los empleados turno ma%cana\n",164);
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ", i + 1);
        scanf("%f", &SueldoturnoMan[i]);
    }

    printf("Sueldo de los empleados turno tarde\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ", i + 1);
        scanf("%f", &SueldoturnoTar[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        man = man + SueldoturnoMan[i];
        tar = tar + SueldoturnoTar[i];
    }
    printf("El sueldo de los empleados turno ma%cana es: %0.2f\n",164, man);
    printf("El sueldo de los empleados turno tarde es: %0.2f", tar);
}