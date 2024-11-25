#include <stdio.h>
int main()
{
    int i = 1;
    int j = 7;
    int aux = j;

    while (i <= 9)
    {
        while (j >= aux - 2)
        {
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        i += 2;
        j += 5;
        aux = j;
    }

    return 0;
}