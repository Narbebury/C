#include <stdio.h>

int main()
{
    int iMes;

    printf("Ingrese el mes a saber los dias:\n");
    scanf("%d", &iMes);

    switch (iMes)
    {
    case 1:
        printf("Enero tiene 31");
        break;

    case 2:
        printf("Febrero tiene 28 o 29 si es bisiesto");
        break;

    case 3:
        printf("Marzo tiene 31");
        break;

    case 4:
        printf("Abril tiene 30");
        break;

    case 5:
        printf("Mayo tiene 31");
        break;

    case 6:
        printf("Junio tiene 30");
        break;

    case 7:
        printf("Julio tiene 31");
        break;

    case 8:
        printf("Agosto tiene 31");
        break;

    case 9:
        printf("Septiembre tiene 30");
        break;

    case 10:
        printf("Octubre tiene 31");
        break;

    case 11:
        printf("Novienbre tiene 30");
        break;

    case 12:
        printf("Diciembre tiene 31");
        break;

    default:
        printf("No ingreso un mes valido \n");
        break;
    }

    return 0;
}