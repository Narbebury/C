#include <stdio.h>

void main()
{
    //Cotinue se usa en bubles para pedirle a c que interrumpa la ejecucion de algunos bucles
    int valores[] = {5, 14, 9, 6, 11, 19, 17, 6, 9, 8};

    for (int i = 0; i < 10; i++)
    {
       printf("Valores[%d] = %d\n",i,valores[i]); 
    }
}