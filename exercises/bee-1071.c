#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d\n%d", &x, &y);

    int soma = 0;
    int maiorValor = x > y ? x : y; // define o maior valor
    int menorValor = x > y ? y : x; // define o menor valor

    for (int i = menorValor + 1; i < maiorValor; i++)
    {
        if (i % 2 != 0)
            soma += i;
    }

    printf("%d\n", soma);

    return 0;
}