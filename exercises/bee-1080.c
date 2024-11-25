#include <stdio.h>
#define QTD_DE_VALORES_LIDOS 100

int main()
{
    int valor = 0;

    int maior = 0;
    int index = 0;

    for (int i = 1; i <= QTD_DE_VALORES_LIDOS; i++)
    {
        scanf("%d", &valor);
        if (valor > maior)
        {
            maior = valor;
            index = i;
        }
    }

    printf("%d\n%d\n", maior, index);

    return 0;
}
