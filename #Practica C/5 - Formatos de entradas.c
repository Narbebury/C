#include <stdio.h>

int main()
{
    int valorUsuario;

    printf("Ingrese su Peso \n");
    scanf("%s", &valorUsuario);
    printf("%s \n", &valorUsuario);

    //Ingresar una letra
    char cLetra;
    printf("Ingrese una letra: \n");
    scanf("%c \n", cLetra);
    printf("%c \n", cLetra);
    
    char cCadena[80];
    int iEdad;

    printf("Ingrese su nombre: \n");
    scanf("%s", cCadena);

    printf("Ingrese su edad: \n");
    scanf("%d", &iEdad);

    printf("Sr. %s, tiene %d años. \n", cCadena, iEdad);

    //Numero Hexadecimal
    int iHexa;

    printf("Ingrese un numero Hexadecimal: \n");
    scanf("%x", &iHexa);
    printf("Ud ingreso el Hexa %#x - que en decimal es: (%d).\n", iHexa, iHexa);

    return 0;
}