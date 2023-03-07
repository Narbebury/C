#include <stdio.h>
#include <string.h>
#include <time.h>
/*Escriba el código que pregunte al usuario su nombre y según el momento del día realice el saludo correspondiente como:
“Buenos días”, “Buenas tardes” o “Buenas noches” o bien responda “Aun estoy durmiendo” más el nombre del usuario.
Condiciones para el saludo:
	0 a 8 	 durmiendo
	9 a 12 	 buenos días
	13 a 19  buenas tardes
    20 a 23  buenas noches
*/

int main(){
    time t tiempo = time(0);
    struct tm *hora = localtime(&tiempo);




    return 0;
}