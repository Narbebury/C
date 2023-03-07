#include <stdio.h>

void main(){
    FILE *p;
    p =fopen("Arhivooo.txt","w");
    char string[]="archivo de texto creado";

    if (p ==NULL)
    {
        perror("Error al intentar abrir archivo");
    }
    
    fprintf(p,"Guardo string:\t %s",string);
    fclose(p);

}