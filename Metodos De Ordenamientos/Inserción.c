#include <stdio.h>

int main()
{
    int vLista[4] = {4, 1, 7, 2};
    int j,Aux;

    printf("Numeros sin ordenar: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%i,",vLista[i]);
    }
    
    for (int i = 1; i < 4; i++)//4 elementos
    { 
        //Para ver como cambia printf("I: %i \n",i);
        j = i;
        Aux = vLista[i];

        while (j > 0 && Aux < vLista[j - 1])
        { 
            //DEjar espacio printf("J: %i \n",j);
            vLista[j] = vLista[j - 1];
            j--;
        }
        vLista[j] = Aux;
    }

    printf("\nNumeros ordenados: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d,", vLista[i]);
    }

    return 0;
}