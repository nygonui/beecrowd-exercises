#include <stdio.h>

int main()
{
    int horaInicial = 0;
    int horaFinal = 0;
    int duracao = 0;

    scanf("%d %d", &horaInicial, &horaFinal);

    if (horaInicial == horaFinal)
        duracao = 24;
    else if (horaInicial > horaFinal)
    {
        duracao = (-1 * (horaInicial - 24)) + horaFinal;
    }
    else
    {
        duracao = horaFinal - horaInicial;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
