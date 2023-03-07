#include <stdio.h>

/*Elaborar una funcion que se le pase la direccion de una varible entera e incremente en 1 lo apuintado por dicha variable*/

void incrementa(int *p)
{
  *p = *p + 1;
}

void main()
{
  int x1 = 100;

  printf("Valor de x1: %i", x1);

  incrementa(&x1);

  printf("\nx1 incrementado: %i", x1);

  incrementa(&x1);

  printf("\nx1 incrementado: %i", x1);

  int z=0;
  printf("Valor de z: %i",z);

  incrementa(&z);

  printf("\nz incrementado: %i",z);
}