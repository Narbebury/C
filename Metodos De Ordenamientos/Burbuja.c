#include <stdio.h>

main()
{                              //DE MENOR A MAYOR (Ascendente)
                               // int i, j;                    //Variables contadoras del ciclo.
  int lista[4] = {6, 9, 3, 1}; //Declaracion e inicializacion de un arreglo de 4 elementos.
  int temp = 0;                //Variable temporal-auxiliar
  int ielementos = 4;

  for (int i = 1; i < ielementos; i++)
  {
    for (int j = 0; j < ielementos - i; j++) // for(j=0; j < Nelementos-i; j++) es menor y no menor igual
    {
      if (lista[j] > lista[j + 1]) //Condicion mayor-menor (El signo es opuesto al ordenamiento)
      {
        temp = lista[j];
        lista[j] = lista[j + 1];
        lista[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < ielementos; i++) //Para cambiar el modo de ordenamiento solo debemos cambiar la condicion < ó >
  {
    printf("%i,", lista[i]);
  }
}