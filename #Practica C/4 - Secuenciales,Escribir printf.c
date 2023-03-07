#include <stdio.h>

int main(){
    printf("\n");
    printf("Characters: %c %c \n", 'a', 65);

    printf("Num Decimal (Enteros): %d %ld \n", 2020, 650000L);
    printf("Num Float (Decimales): %4.2f %+0e %E \n", 3.1416, 3.1416, 3.1416);
    printf("\n");
    printf("Completar con espacios a la izquierda:. %10d \n",2020);
    printf("Completar con ceros a la izqueirda: %010d \n",2020);
    printf("\n");
    printf("\n");
    printf("100 en Sistema Decimal: %d  \n", 100);
    printf("100 en Sistema Hexadecimal:  %x  \n",100);
    printf("100 en Sistema Hexa (Precedido por cero) %#x \n",100);
    printf("100 en Sistema Octal:  %o  \n",100);
    printf("100 en Sistema Octal: (Precedido por cero) %#o \n",100);
    printf("\n");
    printf("\n");
    printf("Espacios a la izquierda:. %*d \n",3,10);
    printf("Espacios a la izquierda:. %*d \n",8,10);
    printf("Espacios a la izquierda:. %*d \n",10,10);
    printf("\n");
    printf("Formato para cadenas: %s \n","Hola String");

    return 0;
}