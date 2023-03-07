#include <stdio.h>
#include <string.h>

void main()
{
    char palabra[200], invertida[200];
    ;
    int tam, comp;

    printf("Ingrese una palabra y se mostrara invertida\n");
    scanf("%s", palabra);

    strcpy(invertida, palabra); //Hago una copia de la palabra

    tam = strlen(palabra); //inviero las letras de la cadena "invertida"
    for (int i = 0; i < tam; i++)
    {
        invertida[i] = palabra[tam - 1 - i];
    }

    //Muestro ambas cadenas y su manaio
    printf("Cadena original: %s\n", palabra);
    printf("Cadena invertida: %s\n", invertida);
    printf("Tamanio de ambas: %d\n", tam);

    //Comparo ambas cadenas alfabeticamente
    comp = strcmp(palabra, invertida);
    if (comp < 0)
    {
        printf("La palabra original va ANTES en el diccionario\n");
    }
    else if (comp > 0)
    {
        printf("La palabra original va Despues en el diccionario\n");
    }
    else
    {
        printf("FELICIDADES!!! es un palindromo o capicua\n");
    }
}