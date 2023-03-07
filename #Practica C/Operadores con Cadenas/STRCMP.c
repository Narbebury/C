/*Compara cadena1 y cadena2. Si son iguales, devuelve 0. Un número negativo si cadena1 "va" antes que cadena2, y un 
número positivo si es al contrario:

< 0    si    cadena1 < cadena2
==0    si    cadena1 == cadena2
> 0    si    cadena1 > cadena2*/
#include <stdio.h>
#include <string.h>

int main()
{
    char sCadenaA[20] = "Hola mundo c";
    char sCadenaB[20] = "Hola mundo c";
    char sCadenaC[20] = "Hola mundo C";

    if (strcmp(sCadenaA, sCadenaB) == 0)
    {
        printf("Las cadenas A: %s y B: %s son IGUALES \n", sCadenaA, sCadenaB);
    }

    if (strcmp(sCadenaA, sCadenaC) == 1)
    {
        printf("Las cadenas A: %s y C: %s son DISTINTAS \n", sCadenaA, sCadenaC);
    }

    return 0;
}