/*
    - Não foi aceito ainda
*/

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 1;
    while (i <= 2)
    {
        for (int x = 1; x <= 3; x++)
        {
            j = (j * x) + i;
            printf("I=%d J=%d\n", i, j);
        }
        j = 1;
        i += 0.2;
    }

    return 0;
}