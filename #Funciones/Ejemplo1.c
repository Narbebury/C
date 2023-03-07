#include <stdio.h>

void mostrarmensajes(char nombre);//FUNCIÓN GLOBAL

void main()
{
    char n='H';
    mostrarmensajes(n);
}

void mostrarmensajes(char nombre)
{
    printf("%c",nombre);
}