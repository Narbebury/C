#include <stdio.h>

int main(){
    //Definición de variables
    int Nafta_Premium=60.35,Nafta_comun=53.28,GasOil_Premium=58.32,GasOil_comun=42.56;
	int surtidores_y_combustibles[7][4],combustibles,surtidor;
    int numero_de_playeros[5];
    combustibles= 0;
	surtidor = 0;
	

    //Inicializo variable principal
    for (combustibles =0; combustibles<4; combustibles++)
    {
		for(surtidor=0; surtidor<7; surtidor++)
		{
			surtidores_y_combustibles[surtidor][combustibles]=0;
		}
	}

//empieza el llenado por teclado de la matriz
surtidor=0;
 for(combustibles=0; combustibles<4; combustibles++)
 {
	printf("Ingrese los litros de Nafta del surtidor 1 \n",combustibles+1);
	scanf("%d",&surtidores_y_combustibles[surtidor][combustibles]);
    surtidor=0;
 }
 surtidor=1;
 for(combustibles=0; combustibles <4; combustibles++)
 {
	printf("Ingrese los litros de Nafta del surtidor 2 \n",combustibles+1);
	scanf("%d",&surtidores_y_combustibles[surtidor][combustibles]);	
 }

 surtidor=2;
 for(combustibles=0; combustibles <4; combustibles++)
 {
	printf("Ingrese los litros de Nafta del surtidor 3 \n",combustibles+1);
	scanf("%d",&surtidores_y_combustibles[surtidor][combustibles]);	
 }

 surtidor=3;
 for(combustibles=0; combustibles <4; combustibles++)
 {
	printf("Ingrese los litros de Nafta del surtidor 4 \n",combustibles+1);
	scanf("%d",&surtidores_y_combustibles[surtidor][combustibles]);	
 }
 surtidor=4;
 for(combustibles=0; combustibles <4; combustibles++)
 {
	printf("Ingrese los litros de Nafta del surtidor 5 \n",combustibles+1);
	scanf("%d",&surtidores_y_combustibles[surtidor][combustibles]);	
 }
 surtidor=5;
 for(combustibles=0; combustibles <4; combustibles++)
 {
	printf("Ingrese los litros de Nafta del surtidor 6 \n",combustibles+1);
	scanf("%d",&surtidores_y_combustibles[surtidor][combustibles]);	
 }
 surtidor=6;
 for(combustibles=0; combustibles <4; combustibles++)
 {
	printf("Ingrese los litros de Nafta del surtidor 7 \n",combustibles+1);
	scanf("%d",&surtidores_y_combustibles[surtidor][combustibles]);	
 }

 //MUESTRO LA TABLA EN PANTALLA                                 
    //NAFTA PREMIUM
	printf("\t\t NP  \t NC \t GP\t GC");
	printf("\n\n SURTIDOR 1      %d \t %d \t %d \t %d \n",surtidores_y_combustibles[0][0],surtidores_y_combustibles[0][1],surtidores_y_combustibles[0][2],surtidores_y_combustibles[0][3],surtidores_y_combustibles[0][4]);

	//NAFTA COMUN
	printf("\n\n SURTIDOR 2  \t %d \t %d \t %d \t %d \n",surtidores_y_combustibles[1][0],surtidores_y_combustibles[1][1],surtidores_y_combustibles[1][2],surtidores_y_combustibles[1][3],surtidores_y_combustibles[0][4]);

	
	// GAS OIL PREMIUM
	printf("\n\n SURTIDOR 3 \t %d \t %d \t %d \t %d \n",surtidores_y_combustibles[2][0],surtidores_y_combustibles[2][1],surtidores_y_combustibles[2][2],surtidores_y_combustibles[2][3],surtidores_y_combustibles[0][4]);

    //GAS OIL COMUN
	printf("\n\n SURTIDOR 4 \t %d \t %d \t %d \t %d \n",surtidores_y_combustibles[3][0],surtidores_y_combustibles[3][1],surtidores_y_combustibles[3][2],surtidores_y_combustibles[3][3],surtidores_y_combustibles[3][4]);
	
	printf("\n\n SURTIDOR 5 \t %d \t %d \t %d \t %d \n",surtidores_y_combustibles[4][0],surtidores_y_combustibles[4][1],surtidores_y_combustibles[4][2],surtidores_y_combustibles[4][3],surtidores_y_combustibles[4][4]);

	printf("\n\n SURTIDOR 6 \t %d \t %d \t %d \t %d \n",surtidores_y_combustibles[5][0],surtidores_y_combustibles[5][1],surtidores_y_combustibles[5][2],surtidores_y_combustibles[5][3],surtidores_y_combustibles[5][4]);
	
	printf("\n\n SURTIDOR 7 \t %d \t %d \t %d \t %d \n",surtidores_y_combustibles[6][0],surtidores_y_combustibles[6][1],surtidores_y_combustibles[6][2],surtidores_y_combustibles[6][3],surtidores_y_combustibles[6][4]);

 //Llenado del vector
 for (int iContador = 0; iContador<5; iContador++)
 {
    numero_de_playeros[iContador] = iContador++;
 }
 //Recorrido del vector
 for(int iContador=0; iContador<5; iContador++)
 {
    printf("El valor almacenado en la posicion %i es %i \n",iContador,numero_de_playeros[iContador]);

 }





return 0;
}