#include <stdio.h>

int main()
{
    int Cantidad = 0;
    char Letra = "";
    char NuevaLetra = "";
    char cProxima = "";

    printf("Ingresa una letra: ");
    scanf("%c", &Letra);
    printf("\n");

    printf("Ingrese una cantidad: ");
    scanf("%i", &Cantidad);
    printf("\n");

    for (int i = 0; i < Cantidad; i++)
    {
        printf("Actial: %c", Letra + i);
        printf("\n");

        printf("Cual es la proxima letra? ");
        scanf("%c", &NuevaLetra);

        printf("\n");
        cProxima = Letra + i + 1;

        if (NuevaLetra != cProxima)
        {
            printf("La letra %c no es la proxima letra", NuevaLetra);
            printf("\n");
            printf("La proxima es: %c", Letra + i + 1);
            printf("\n");
        }
    }

    return 0;
}