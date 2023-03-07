#include <stdio.h>

int main(){
    int calificacion;

    printf("Ingrese la calificacion del alumno:\n");
    scanf("%i",&calificacion);
    calificacion >= 60 ? printf("Aprobado\n") : printf("Reprobado\n");

    /* TAMBIEN PUEDE ESCRIBIRSE ASÍ: printf("&s\n", calificacion >= 60 ? "Aprobado" : "Reprobado");*/
    

    return 0;
}