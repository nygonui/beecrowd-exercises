#include <stdio.h>

int main()
{
    float valores[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &valores[i]);
    }

    int qtdPositivos = 0;
    float mediaDosPositivos = 0;
    for (int i = 0; i < 6; i++)
    {
        if (valores[i] > 0)
        {
            qtdPositivos++;
            mediaDosPositivos += valores[i];
        }
    }
    mediaDosPositivos /= qtdPositivos;
    printf("%d valores positivos\n", qtdPositivos);
    printf("%.1f\n", mediaDosPositivos);

    return 0;
}
