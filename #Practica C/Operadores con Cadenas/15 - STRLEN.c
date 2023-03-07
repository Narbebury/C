//Esta función devuelve el número de caracteres que tiene la caden
#include <stdio.h>
#include <string.h>

int main()
{
    char texto[] = "Gandalf";
    int longitud;
    longitud = strlen(texto);
    
    printf("La cadena \"%s\" tiene %i caracteres.\n", texto, longitud);
    printf( "Tamaño de la cadena: %i bytes\n", sizeof texto);

    /*STRCPY Copia el contenido de cadena2 en cadena1. cadena2 puede ser una variable o una cadena directa (por ejemplo,
    "hola"). Debemo tener cuidado de que la cadena destino (cadena1) tenga espacio suficiente para albergar a la cadena
    origen (cadena2)
    char *strcpy(char *cadena1, const char *cadena2);
    */
    printf("\n");   
	char texto1[] = "Éste es un curso de C.";
	char destino[50];

	strcpy( destino, texto1 );
	printf( "Valor final: %s\n", destino );



    return 0;
}