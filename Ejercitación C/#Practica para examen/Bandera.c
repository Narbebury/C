#include <stdio.h>
#include <stdbool.h>

int main()
{
    int Num1, Num2;
    bool salir;

    printf("Ingrese el valor inicial\n");
    scanf("%d", &Num1);

    do
    {
        salir = true;

        for (int i = 1; i <= 3; i++)
        {
            printf("Ingrese el %d consecutivo al inicial\n",i);
            scanf("%d", &Num2);
            if (Num1 + i != Num2)
            {
                salir = false;
            }
        }
        if (!salir)
        {
            printf("La secuencia fue incorrecta, vuelva a intentarlo\n");
        }

    } while (!salir);
    
    printf("La secuencia fue correcta\n");


    return 0;
}