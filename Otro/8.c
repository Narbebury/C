/*Dadas las horas trabajadas de una persona y el valor por hora
calcular su salario e imprimirlo*/

#include <stdio.h>

int main(){
    int horas_trabajadas,valor_hora;
    float salario;
    printf("Ingrese las horas trabajadas\n");
    scanf("%d",&horas_trabajadas);

    printf("Ingrese el valor de la hora de trabajo\n");
    scanf("%d",&valor_hora);

    salario = (horas_trabajadas * valor_hora);

    printf("Su salario es: %.2f",salario);
    return 0;
}