#include <stdio.h>

int main(){
    int Lista[6] = {1,2,3,5,7,9};
    int iElementos = 6;
    int inter = (iElementos / 2);
    int i = 0, j = 0, k = 0;
    int aux;

    while (inter > 0)
    {
        for (i = inter; i < iElementos; i++)
        {
            j = i - inter;
            while (j >= 0)
            {
                k = j + inter;
                if (Lista[j] <= Lista[k])
                {
                    j--;
                }
                else
                {
                    aux = Lista[j];
                    Lista[j] = Lista[k];
                    Lista[k] = aux;
                    j = j - inter;
                }
                
            }
            
        }
        inter = inter / 2 ;
    }
    printf("%i",Lista[i]);
    return 0;
}