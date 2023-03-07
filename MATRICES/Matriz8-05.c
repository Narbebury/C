#include <stdio.h>

int main(){
		int Matriz[6][7];
        int Mayor,ac,i,j;
    /*Fila 0 - 1*/
    Matriz[0][0] = 6, Matriz[0][1] = 3, Matriz[0][2] = 2, Matriz[0][3] = 5, Matriz[0][4] = 4, Matriz[0][5] = 1, Matriz[0][6] = 0;

    /*Fila 2 - 1*/
    Matriz[1][0] = 5, Matriz[1][1] = 3, Matriz[1][2] = 1, Matriz[1][3] = 2, Matriz[1][4] = 4, Matriz[1][5] = 6, Matriz[1][6] = 0;

    /*Fila 3 - 2*/
    Matriz[2][0] = 5, Matriz[2][1] = 6, Matriz[2][2] = 1, Matriz[2][3] = 2, Matriz[2][4] = 3, Matriz[2][5] = 4, Matriz[2][6] = 0;

    /*Fila 4 - 3*/
    Matriz[3][0] = 1, Matriz[3][1] = 2, Matriz[3][2] = 6, Matriz[3][3] = 5, Matriz[3][4] = 4, Matriz[3][5] = 3, Matriz[3][6] = 0;

    /*Fila 5 - 4*/
    Matriz[4][0] = 5, Matriz[4][1] = 4, Matriz[4][2] = 2, Matriz[4][3] = 3, Matriz[4][4] = 1, Matriz[4][5] = 6, Matriz[4][6] = 0;

    /*Fila 6 -5*/
    Matriz[5][0] = 6, Matriz[5][1] = 4, Matriz[5][2] = 5, Matriz[5][3] = 1, Matriz[5][4] = 2, Matriz[5][5] = 3, Matriz[5][6] = 0;

	
	/*MUESTRO LA MATRIZ ORIGINAL*/
	/*Fila 0- 1*/
	printf("%d \t %d \t %d \t %d \t %d \t %d \t %d\n",Matriz[0][0] = 6, Matriz[0][1] = 3, Matriz[0][2] = 2, Matriz[0][3] = 5, Matriz[0][4] = 4, Matriz[0][5] = 1, Matriz[0][6] = 0);
    /*Fila 2 - 1*/
	printf("%d \t %d \t %d \t %d \t %d \t %d \t %d\n",Matriz[1][0] = 5, Matriz[1][1] = 3, Matriz[1][2] = 1, Matriz[1][3] = 2, Matriz[1][4] = 4, Matriz[1][5] = 6, Matriz[1][6] = 0);
	/*Fila 3 - 2*/
	printf("%d \t %d \t %d \t %d \t %d \t %d \t %d\n",Matriz[2][0] = 5, Matriz[2][1] = 6, Matriz[2][2] = 1, Matriz[2][3] = 2, Matriz[2][4] = 3, Matriz[2][5] = 4, Matriz[2][6] = 0);
    /*Fila 4 - 3*/
    printf("%d \t %d \t %d \t %d \t %d \t %d \t %d\n",Matriz[3][0] = 1, Matriz[3][1] = 2, Matriz[3][2] = 6, Matriz[3][3] = 5, Matriz[3][4] = 4, Matriz[3][5] = 3, Matriz[3][6] = 0);
    /*Fila 5 - 4*/
    printf("%d \t %d \t %d \t %d \t %d \t %d \t %d\n",Matriz[4][0] = 5, Matriz[4][1] = 4, Matriz[4][2] = 2, Matriz[4][3] = 3, Matriz[4][4] = 1, Matriz[4][5] = 6, Matriz[4][6] = 0);
    /*Fila 6 -5*/
    printf("%d \t %d \t %d \t %d \t %d \t %d \t %d\n",Matriz[5][0] = 6, Matriz[5][1] = 4, Matriz[5][2] = 5, Matriz[5][3] = 1, Matriz[5][4] = 2, Matriz[5][5] = 3, Matriz[5][6] = 0);
	
	
	
		for(i = 0; i <2; i++)
	{
		for(j = 0; j <2; j++)
		{
			if(i%2==0 || j%2==0)
			{
				ac=Matriz[i][j]+ac;
				Mayor =Matriz[i][j];
			}
	        if(Matriz[i][j]>Mayor)
            	Mayor=Matriz[i][j];
		}
	}
	
	for (i = 0; i < Matriz; i++)
	{
		printf("%d \t", Matriz[i][j]);
	}
	
	
	
	return 0;
}