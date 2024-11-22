#include <stdio.h>

int main()
{
    int contadorNumerosPares = 0;

    for (int i = 0; i < 5; i++)
    {
        float v;
        scanf("%f", &v);

        if ((int)v % 2 == 0)
        {
            contadorNumerosPares++;
        }
    }

    printf("%d valores pares\n", contadorNumerosPares);

    return 0;
}