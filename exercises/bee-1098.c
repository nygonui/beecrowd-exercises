/*
    # Explicação do código nos comentários depois do código
*/

#include <stdio.h>

float precisaoDuasCasas(float);

int main()
{
    float i = 0;
    float j = 1;

    while (i < 2.2)
    {
        for (int aux = 1; aux <= 3; aux++)
        {
            j = aux;
            j += i;

            int varTesteI = (int)i;
            varTesteI *= 10;

            float varTesteFloatI = i * 10;
            varTesteFloatI = precisaoDuasCasas(varTesteFloatI);

            if (varTesteI == varTesteFloatI)
            {
                printf("I=%0.f J=%0.f\n", i, j);
            }
            else if (varTesteI != varTesteFloatI)
            {
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
        i += 0.2;
    }

    return 0;
}

float precisaoDuasCasas(float valor)
{
    // caso: 20.00002
    valor = valor * 100;

    // caso: 2000.002

    int valorInt = (int)valor;
    // caso: 2000

    return valorInt / 100; // caso: 20.00
}

/**
 * Primeiro não estava dando certo porque eu estava usando variáveis do tipo inteiro, e os valores do exercícios são floats em sua boa parte
 * o i aumenta de 0.2 em 0.2
 *
 * Sobre a multiplicação e divisão por 10:
 * A saída experada quer que quando o valor for um inteiro, sem valores significantes após a virgula, quer que seja impresso sem nenhuma casa decimal
 *      - Primeiro: o que eu fiz foi usar uma variavel inteira pra armazenar o float, assim pegando o valor só após a virgula e multiplicar por 10, assim 0->0, 1->10 ...
 *      - Segundo: peguei a variavel float e multipliquei por 10, logo, 0.2 -> 2, 2.2 -> 22...
 *      - Terceiro: verifico se estão iguais (2 = 2.0), e no caso de 2 e 2.2 (20 != 22), e se forem iguais (no primeiro caso dessa linha) eu vou imprimir a versão inteira dela
 *      - Quarto: estava dando certo para quase todos os casos, mas no final, quando estava chegando perto do I = 2, deu ruim, e mesmo aparecendo no printf I=2.0 e J=5.0, que
 *      segundo a minha lógica não deveria aparecer
 *      - Quinto: depois de um tempo batendo a cabeça rodei o printf sem a formatação de string para float, mostrando mais casas decimais, e o 2.0 na verdade era 2.000002
 *      - Sexto: cria a função precisaoDuasCasas, considerando que já estou mandando o valor multiplicado por 10, multiplico ele por 100,
 *      atribuio a uma variavel inteira e depois divido por 100 novamente para ter as duas casas decimais de precisão que eu quero
 */