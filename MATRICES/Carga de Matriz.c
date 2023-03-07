#include <stdio.h>

int main(){
	//DEFINO VARIABLE
    int alumnos[3][4],anios,carrera;
	
	anios= 0;
	carrera = 0;
	
	//Inicializo variable principal
	for (anios =0; anios<4; anios++)
	{
		for(carrera=0; carrera<3; carrera++)
		{
			alumnos[carrera][anios]=0;
		}
	}

//empieza el llenado por teclado de la matriz
carrera=0;
for(anios=0; anios<4; anios++)
{
	printf("Ingrese alumnos de la carrera de Higiene de '%d' a\2440 \n",anios+1);
	scanf("%d",&alumnos[carrera][anios]);
    carrera=0;
}
for(anios=0; anios <4; anios++)
{
	printf("Ingrese alumnos de la carrera de programacion de '%d' a\2440 \n",anios+1);
	scanf("%d",&alumnos[carrera][anios]);	
}
carrera=2;
for(anios=0; anios<4; anios++)
{
    printf("Ingrese alumnos de la carrera de matematicas de '%d' a\2440 \n",anios+1);
	scanf("%d",&alumnos[carrera][anios]);	
	
}

	return 0;
}