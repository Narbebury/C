/*•	Ejercicio 4) Calcular el área de un triángulo equilátero. 
Escriba el código para:
a.	Solicitar la base (real)
b.	Solicitar la altura (real)
c.	Calcular el área
d.	Mostrar el siguiente mensaje: El área del triángulo es: [área]
*/
#include <stdio.h>

int main()
{
    float base, altura, area;

    printf("Ingrese la base:\n");
    scanf("%f", &base);
    
    printf("Ingrese la altura\n");
    scanf("%f", &altura);
    
    area = (base * altura)/2.00;
    printf("El area del triangulo es: %2.f", area);

    return 0;
}