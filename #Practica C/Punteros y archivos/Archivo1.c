#include <stdio.h>
//r = read
//w = write
//a = append (agrega)

void main(){

   FILE *fpuntero;

   fpuntero = fopen("ArchivoP.txt","w");

    char str[] = "Archivo Creado,¡Hola mundo!";

    if (fpuntero == NULL)
    {
        perror("Error al intentar abrir el archivo");
        return 1;
    }
    
    fprintf(fpuntero,"Guardamos el string %s",str);
    fclose(fpuntero);
    return 0;
}