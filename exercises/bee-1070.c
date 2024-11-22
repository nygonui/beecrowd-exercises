#include <stdio.h>

int main()
{
    int valor;
    scanf("%d", &valor);

    int i = 0;
    while (i < 6)
    {
        if (valor % 2 != 0)
        {
            printf("%d\n", valor);
            i++;
        }
        valor++;
    }

    return 0;
}