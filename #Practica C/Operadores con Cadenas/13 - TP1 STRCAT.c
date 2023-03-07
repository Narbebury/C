#include <stdio.h>
#include <string.h>

/*Ejercicio 1) Concatenas nombres.
Escriba el código necesario utilizando STRCAT para:
a) Solicitar el Nombre;
b) Solicitar el Apellido;
c) Mostrar el siguente mensaje: Su nombre es: [Apellido],[Nombre]*/

int main()
{
    /*CONCATENACION DE 2 CADENAS CON STRCAT*/
    char Apellido[10];
    char Nombre[10];

    printf("Ingrese su nombre\n");
    scanf("%s", &Nombre);
    printf("Ingrese su apellido\n");
    scanf("%s", &Apellido);

    printf("Su nombre es: %s\n",strcat(strcat(Apellido,","),Nombre));




    printf("\n\n");
    char nombre[] = { 'G', 'a', 'n', 'd', 'a', 'l', 'f', '\0' };

	printf( "Texto: %s\n", nombre );
	printf( "Tama%co de la cadena: %i bytes\n",164, sizeof nombre );
 
    return 0;
}