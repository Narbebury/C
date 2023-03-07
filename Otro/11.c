#include <stdio.h>

int main(){
    int numero;

    printf("Ingrese un numero menor a 5\n");
    scanf("%d",&numero);

    numero <= 5 ? printf("%d,Es menor o igual que 5",numero) : printf("%d,Es mayor que 5",numero);


    return 0;
}