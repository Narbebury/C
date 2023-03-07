#include <stdio.h>

int main()
{
    int vector[10] = {10, 2, 3, 35, 4, 7, 9, 11, 44, 6};
    int aux;
    //2 3 4 6 7 9 10 11 35 44
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                aux = vector[j + 1];
                vector[j + 1] = vector[j];
                vector[j] = aux;
            }
        }
    }

    int pos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("vector[%i]=%i\n", pos + 1, vector[i]);
        pos++;
    }
    return 0;
}