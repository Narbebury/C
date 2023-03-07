#include <stdio.h>

void fun (int a[]);
void imprimir (int x[]);

int main(){
    int v[2];

    fun (v);
    imprimir (v);

    return 0;
}

void fun (int a[]){

    for (int i = 0; i < 2; i++)
    {
        printf("Introduce un valor para el vector: \n");
        scanf("%i",&a[i]);
    }
    
}

void imprimir (int x[]){

    for (int i = 0; i < 2; i++)
    {
        printf("%i,",x[i]);
    }
    printf("\n\n");
}