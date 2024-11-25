#include <stdio.h>
int main()
{
    int i = 1;
    int j = 7;

    while (i <= 9)
    {
        while (j >= 5)
        {
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        j = 7;
        i += 2;
    }

    return 0;
}