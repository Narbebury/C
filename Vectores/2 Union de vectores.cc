#include <stdio.h>
int main()
{
    int vector[10] = {1, 22, 33, 55, 66, 25, 6, 9, 8, 7};
    int vector2[10] = {88, 22, 12, 13, 14, 16, 79, 74, 72, 10};
    int U[19];

    /*UNION de conjuntos.*/
    printf("UNION DE 2 CONJUNTOS\n");
/*    printf("Conjunto 1: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i,", vector[i]);
    }

    printf("\nConjunto 2: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i,", vector2[i]);
    }


    printf("\n");
    for (int i = 0; i < 20; i++)
    {

        
        U[i] = vector2[i];
        U[i + 1] = vector[i];
    }
    
    for (int i = 0; i < 20; i++)
    {
        printf("%i,",U[i]);
    }
  */  
    int iBandera;
    int icont;
    printf("\n");

    //recorro
    printf("asdasd\n");
        for (int i = 0; i < 10; i++) //Recorro B
    {
        iBandera = 0;

        for (int j = 0; j < 10; j++) //Recorro A
        {
            if (vector[i] == vector2[j])
            {
                iBandera = 1;
            }
        }

        if (iBandera == 0)
        {
            U[i]=vector2[i];
            U[i+1]=vector[i];
    
            printf("%i,", U[i]);
        }
    }


    return 0;
}