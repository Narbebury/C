#include <stdio.h>
#include <time.h>

void main()
{
    int matriz[5][6];
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i==j-1)
            {
                matriz[i][j] = 200 + rand() % (300-200);
            }
            else
            {
                matriz[i][j] = 300 + rand() % (400-300);
            }
            
            
        }
    }
    
    printf("Matriz\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}