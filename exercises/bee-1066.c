#include <stdio.h>

int main()
{
    int countPar = 0, countImpar = 0, countPosi = 0, countNeg = 0;
    for (int i = 0; i < 5; i++)
    {
        int valor;
        scanf("%d", &valor);
        if (valor % 2 == 0)
            countPar++;
        else
            countImpar++;

        if (valor > 0)
            countPosi++;
        if (valor < 0)
            countNeg++;
    }

    printf("%d valor(es) par(es)\n", countPar);
    printf("%d valor(es) impar(es)\n", countImpar);
    printf("%d valor(es) positivo(s)\n", countPosi);
    printf("%d valor(es) negativo(s)\n", countNeg);

    return 0;
}