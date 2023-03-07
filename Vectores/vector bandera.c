#include <stdio.h>
main()
{
    int A[5] = {3, 6, 8, 22, 56};
    int B[7] = {8, 14, 33, 22, 43, 56, 72};

    for (int i = 0; i < 7; i++)
    {
        int iBandera = 0;
        for (int j = 0; j < 5; j++)
        {
            if (B[i] == A[j])
            {
                iBandera = 1;
            }
        }
        if (iBandera == 0)
        {

            printf("%i,", B[i]);
        }
    }


    //CONCATENO VECTORES
    int C[7];
    for (int i = 0; i < 7; i++)
    {
        C[i] = -1; //me aseguro que no esta
    }
    printf("\n\n");
    int iposC = 0;
    for (int i = 0; i < 7; i++)
    {
        int iBandera = 0;
        for (int j = 0; j < 5; j++)
        {
            if (B[i] == A[j])
            {
                iBandera = 1;
            }
        }
        if (iBandera == 0)
        {

            printf("%i,", B[i]);
            C[iposC] = B[i]; //carga en c el valor de b
            iposC++;
        }
    }

    for (int i = 0; i < 7; i++) //recorro c
    {
        if (C[i] != -1)
        {
            printf("%i,", C[i]);
        }
    }
}