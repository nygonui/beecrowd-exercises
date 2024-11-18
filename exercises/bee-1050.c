#include <stdio.h>

int main()
{
    int arrDDD[] = {61, 71, 11, 21, 32, 19, 27, 31};
    char arrDestin[8][20] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};

    int ddd;
    scanf("%d", &ddd);

    // sizeof(x) retorna em inteiro a quantidade de bytes de x
    int tam = sizeof(arrDDD) / sizeof(arrDDD[1]);
    int i = 0;
    int verificador = 0;
    for (; i < tam; i++)
    {
        if (arrDDD[i] == ddd)
        {
            printf("%s\n", arrDestin[i]);
            verificador++;
        }
    }
    if (verificador == 0)
        printf("DDD nao cadastrado\n");

    return 0;
}