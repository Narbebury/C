#include <stdio.h>

int main()
{
    int producto = 2;
    while (producto <= 1000)
    {
        producto = 2 * producto;
        printf("%i \n", producto);
    }
    return 0;
}