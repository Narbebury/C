//BUSCAR NUMERO
#include <stdio.h>

main()
{
    //Defino variables
    int vector[100], numero;
    int iPos = 0;
    int cont = 200;

    //CARGO
    while (cont > 0)
    {
        vector[iPos] = cont;
        iPos++;
        cont = cont - 2;
    }

    //MUESTRO
    cont = 0;
    while (cont < 100)
    {
        printf("%i \n", vector[cont]);
        cont++;
    }

    printf("\n");
    printf("ingrese numero");
    scanf("%i", &numero);

    printf("\n");

    //BUSCO
    cont = 0;
    int besta = 0;
    while (cont < 100)
    {
        if (vector[cont] == numero)
        {
            printf("esta en %i", cont + 1);
            besta = 1;
            break;
        }
        cont++;
    }
    if (besta == 0)
    {
        printf("no esta \n");
    }
}