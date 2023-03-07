#include <stdio.h>

int main()
{
    int i;
    char vocal[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int numvoc;

    srand(time(NULL));

    for (i = 0; i < 11; i++)
    {
        numvoc = rand() % 10;
        printf("%c", vocal[numvoc]);
    }
    return 0;
}