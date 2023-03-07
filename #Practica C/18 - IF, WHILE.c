#include <stdio.h>

int main()
{
    int iNota;

    printf("Ingrese la nota del alumno: \n");
    scanf("%d", &iNota);

    //Apto >5 = 10
    //No apto 0 - 5
    //Error <0 > 10

    if (iNota > 5 && iNota <= 10)
    {
        printf("Es apto \n");
        if (iNota >= 0 && iNota <= 5)
        {
            printf("No apto");
        }
        if (iNota < 0 || iNota > 10)
        {
            printf("Error");
        }
    }

    return 0;
}