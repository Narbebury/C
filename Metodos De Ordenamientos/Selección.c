#include <stdio.h>

int main(){
    int Lista[4] = {1, 4, 8, 6};
    int iElementos = 4;
    int j = 0, i = 0;
    int temp = 0;
    int minimo = 0;
    
    for (i = 0; i < iElementos; i++)
    {
        minimo = i;
        for (j =  i + 1 ; i < iElementos; j++)
        {
            if (Lista[minimo] > Lista[j])
            {
               minimo = j;           
            } 
        }
        temp = Lista[minimo];
        Lista[minimo] = Lista[i];
        Lista[i] = temp;
    }
    
    return 0;
}