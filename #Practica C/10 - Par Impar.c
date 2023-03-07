#include <stdio.h>

int main(){
    int num,par;
    

    printf("Introduzca un numero\n");
    scanf("%d",&num);

    par=num%2;
    
    if ( par==0 ) // OTRA FORMA DE HACERLO ES: if (num%2 ==0 )
        printf("Es par");
    else
        printf("Es impar");
    
    return 0;

}