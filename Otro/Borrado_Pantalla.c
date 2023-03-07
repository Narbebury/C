/*Programa de borrado de pantalla*/

#include <stdio.h>
#include <stdlib.h>//Libreria para limpiar pantalla

int main(){
    char tecla;

    printf("Programa de borrado de pantalla!!!!");
    printf("\n-----------------------------------\n");
    printf("\n-----------------------------------\n");
    printf("\nDigite el numero 1: ");
    scanf("%c",&tecla);

    if (tecla=='1')
    {
        system("cls");
        printf("Ha funcionado, el limpiado de pantalla");
    }
    else
    {
        fflush(stdin);//Limpio el buffer para que pueda seguir almacenando datos
        printf("\nNo ha funcionado el limpiado de pantalla");
        printf("Por favor, digite el numero 1: ");
        scanf("%c",&tecla);
        
        if (tecla=='1')
        {
            system("cls");
        }
        else
        {
            printf("No funciono");
        }
    }

    return 0;
}