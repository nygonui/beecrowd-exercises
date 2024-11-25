#include <stdio.h>

int main()
{
    int qtdDeValoresLidos;
    scanf("%d", &qtdDeValoresLidos);

    int qtdDeCobaias;
    char tipoDeCobaias;

    int somaCobaiasRato = 0;
    int somaCobaiasSapo = 0;
    int somaCobaiasCoelho = 0;

    for (int i = 0; i < qtdDeValoresLidos; i++)
    {
        scanf("%d %c", &qtdDeCobaias, &tipoDeCobaias);
        if (tipoDeCobaias == 'R')
        {
            somaCobaiasRato += qtdDeCobaias;
        }
        else if (tipoDeCobaias == 'S')
        {
            somaCobaiasSapo += qtdDeCobaias;
        }
        else
        {
            somaCobaiasCoelho += qtdDeCobaias;
        }
    }

    int somaTotalDeCobaias = somaCobaiasRato + somaCobaiasSapo + somaCobaiasCoelho;
    float percentualRatos = ((float)somaCobaiasRato / (float)somaTotalDeCobaias) * 100.0;
    float percentualSapos = ((float)somaCobaiasSapo / (float)somaTotalDeCobaias) * 100.0;
    float percentualCoelhos = ((float)somaCobaiasCoelho / (float)somaTotalDeCobaias) * 100.0;

    printf("Total: %d cobaias\n", somaTotalDeCobaias);
    printf("Total de coelhos: %d\n", somaCobaiasCoelho);
    printf("Total de ratos: %d\n", somaCobaiasRato);
    printf("Total de sapos: %d\n", somaCobaiasSapo);
    printf("Percentual de coelhos: %.2f %%\n", percentualCoelhos);
    printf("Percentual de ratos: %.2f %%\n", percentualRatos);
    printf("Percentual de sapos: %.2f %%\n", percentualSapos);

    return 0;
}