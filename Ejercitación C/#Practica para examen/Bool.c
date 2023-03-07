#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int iValorInicial;
	int iPosterior;
	int bSalir;
	
	printf("Ingrese el valr inicial: \n");
	scanf("%d",&iValorInicial);
	
	do
	{
		bSalir=true;
		
		for(int i = 1; i <= 3; i++)
		{
			
			printf("Ingrese el %d consecutivo posterior al inicial: \n", i);
			scanf("%d",&iPosterior);
			
			if(iValorInicial + i != iPosterior)
			{
				bSalir = false;
			}
		}
	    if(bSalir)
		 printf("La secuencia fue incorrecta, vuelva a intentarlo \n");
		 	
		
	}while(bSalir);
	
	printf("La secuencia fue correcta, fin del proceso \n");
    return 0;
}