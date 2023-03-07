#include <stdio.h>

int main(){
    int filas = 6, stars = 1, i = 0;

    while (i < filas)
    {
        for (int s = 0; s < filas; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n"), i++, stars+=2;
    }
    



}