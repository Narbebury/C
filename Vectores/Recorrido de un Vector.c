#include <stdio.h>

int main()
{
    int vector[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int ielementos = 8;

    for (int i = 0; i < ielementos; i++)
    {
        printf("%i", vector[i]);
    }
    printf("\n");

    for (int i = 0; i < ielementos; i++)
    {
        for (int j = 0; j < ielementos; j++)
        {
            vector[j] = 0;
        }

        vector[i] = 1;

        for (int k = 0; k < ielementos; k++)
        {
            printf("%i", vector[k]);
        }
        printf("\n");
    }

    return 0;
}