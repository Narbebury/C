#include <stdio.h>
#include <time.h>
#include <string.h>

struct direccion
{
    char Calle[40];
    int Numero;
};
struct persona
{
    char Nombre[30];
    char Apellido[30];
    int Edad;
    int Documento;
    struct direccion dir;
};
struct persona Datos;
struct direccion dir;

void cargar()
{

    FILE *archivo = fopen("PERSONAS.txt", "a+");
    
    fflush(stdin);
    printf("Ingrese el nombre: ");
    scanf("%[^\n]", Datos.Nombre);
    fflush(stdin);
    printf("Ingrese el apellido: ");
    scanf("%[^\n]", Datos.Apellido);
    fflush(stdin);
    printf("Ingrese la edad: ");
    scanf("%i", &Datos.Edad);
    printf("Ingrese el documento: ");
    scanf("%i", &Datos.Documento);

    fprintf(archivo, "Nombre: %s \nApellido: %s\nEdad: %d\nDocumento: %d\n", Datos.Nombre, Datos.Apellido, Datos.Edad, Datos.Documento);
    fprintf(archivo,"Posicion: %i",ftell(archivo));
    fclose(archivo);
}

void cargar_direccion()
{
    FILE *archivo1 = fopen("PERSONAS.txt", "a+");

    printf("Ingrese la calle: ");
    scanf("%s", Datos.dir.Calle);
    printf("\nIngrese el numero: ");
    scanf("%i", &Datos.dir.Numero);
    fprintf(archivo1, "Calle: %s \nN%cmero: %i", 162, Datos.dir.Calle, Datos.dir.Numero);
    fclose(archivo1);
}

void listar()
{
    FILE *archivo = fopen("PERSONAS.txt", "rt");

    while (!feof(archivo))
    {
        fscanf(archivo, "Nombre: %s\nApellido: %s\nEdad: %i\nDocumento: %s\nCalle: %i\nNumero: %i\n", Datos.Nombre, Datos.Apellido, Datos.Edad, Datos.Documento, Datos.dir.Calle, Datos.dir.Numero);
        printf("Nombre: %s\nApellido: %s\nEdad: %i\nDocumento: %i\nCalle: %s\nNumero: %i\n", Datos.Nombre, Datos.Apellido, Datos.Edad, Datos.Documento, Datos.dir.Calle, Datos.dir.Numero);
        printf("Posicion: %i",ftell(archivo));
    }
    fclose(archivo);
}

int main()
{
    int op;
    int op2;
    printf("**BIENVENIDO**");
    printf("\nMENU");
    printf("\n1 - Cargar persona\n2 - Cargar direcci%cn\n3 - Listar personas\n4 - Salir\n", 162);
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        cargar();
        break;
    case 2:
        cargar_direccion();
        break;
    case 3:
        listar();
        break;
    case 4:

        printf("%cEsta seguro que quiere salir?\n1 - Si\n2 - No\n", 168);
        scanf("%i", &op2);
        if (op2 == 1)
        {
            printf("Hasta luego...");
            return 1;
        }
        else
        {
            return main();
        }

        break;

    default:
        break;
    }

    return 0;
}