#include <stdio.h>

void calculaReajusteEPrintaInfos(float salarioAtual, int porcentagemReajuste);

int main()
{
    float salarioAtual;

    scanf("%f", &salarioAtual);

    if (salarioAtual <= 400)
    {
        calculaReajusteEPrintaInfos(salarioAtual, 15);
    }
    else if (salarioAtual <= 800)
    {
        calculaReajusteEPrintaInfos(salarioAtual, 12);
    }
    else if (salarioAtual <= 1200)
    {
        calculaReajusteEPrintaInfos(salarioAtual, 10);
    }
    else if (salarioAtual <= 2000)
    {
        calculaReajusteEPrintaInfos(salarioAtual, 7);
    }
    else
    {
        calculaReajusteEPrintaInfos(salarioAtual, 4);
    }

    return 0;
}

void calculaReajusteEPrintaInfos(float salarioAtual, int porcentagemReajuste)
{
    float reajusteDeGanho = salarioAtual * ((float)porcentagemReajuste / 100);
    // (float) foi necessário, pos o valor `porcentagemReajuste` é um inteiro, quando dividido
    // por 100 daria 0.alguma coisa, por ser inteiro ele transforma em 0, teria o mesmo efeito
    // se no lugar de (float) colocássemos 1.0 *, multiplicando um falor float

    float salarioAposReajuste = salarioAtual + reajusteDeGanho;

    printf("Novo salario: %.2f\n", salarioAposReajuste);
    printf("Reajuste ganho: %.2f\n", reajusteDeGanho);
    // printf("Em percentual: %d %%", porcentagemEmInteiro);
    printf("Em percentual: %d %c\n", porcentagemReajuste, 37); //-- 37 na tabela ASCII é %
}