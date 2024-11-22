/*
 * dando 5% de erro
 * testei entradas que poderiam dar o resultado que ta acusando erro, mas todas dão certo
 * o problema, possivelmente, está entre a linha 77 e 105
 */

#include <stdio.h>

int conversaoCharParaInt(char num);
void leAteEnter(char *str);
void verificaValores(int *qtdDias, int *qtdHoras);

int main()
{
    char diaInicio[6];
    leAteEnter(diaInicio);
    char horarioI[12];
    leAteEnter(horarioI);
    char diaFim[6];
    leAteEnter(diaFim);
    char horarioF[12];
    leAteEnter(horarioF);

    int diaInicioInteiro;
    int tam = (int)(sizeof(diaInicio) / sizeof(diaInicio[0]));
    if (diaInicio[tam - 1] == '\0')
    {
        diaInicioInteiro = conversaoCharParaInt(diaInicio[tam - 2]);
    }
    else
    {
        int dezena = conversaoCharParaInt(diaInicio[tam - 2]) * 10;
        int unidade = conversaoCharParaInt(diaInicio[tam - 1]);
        diaInicioInteiro = dezena + unidade;
    }

    int diaFimInteiro;
    if (diaFim[tam - 1] == '\0')
    {
        diaFimInteiro = conversaoCharParaInt(diaFim[tam - 2]);
    }
    else
    {
        int dezena = conversaoCharParaInt(diaFim[tam - 2]) * 10;
        int unidade = conversaoCharParaInt(diaFim[tam - 1]);
        diaFimInteiro = dezena + unidade;
    }

    int horaI = (conversaoCharParaInt(horarioI[0]) * 10) + conversaoCharParaInt(horarioI[1]);
    int minI = (conversaoCharParaInt(horarioI[5]) * 10) + conversaoCharParaInt(horarioI[6]);
    int segI = (conversaoCharParaInt(horarioI[10]) * 10) + conversaoCharParaInt(horarioI[11]);

    int horaF = (conversaoCharParaInt(horarioF[0]) * 10) + conversaoCharParaInt(horarioF[1]);
    int minF = (conversaoCharParaInt(horarioF[5]) * 10) + conversaoCharParaInt(horarioF[6]);
    int segF = (conversaoCharParaInt(horarioF[10]) * 10) + conversaoCharParaInt(horarioF[11]);

    /*
        Dia 5 ---- i
        08 (h): 12 (m): 23 (s)
        Dia 9 ----- f
        06 (x): 13 (y) : 23 (z)

        f - i = DIAS
        h == x -> HORAS = 0 / DIAS
        h < x -> x - h = HORAS / DIAS
        h > x -> 24 - h + x = HORAS / DIAS - 1
        m < y -> y - m = MINUTOS / HORAS / DIAS
        m > y -> 60 - m + y = MINUTOS / HORAS-1 / DIAS
        s < z -> z - s = SEGUNDOS / MINUTOS / HORAS / DIAS
        s > z -> 60 - s + z = SEGUNDOS / MINUTOS-1 / HORAS / DIAS
    */

    int qtdDias = diaFimInteiro - diaInicioInteiro;
    int qtdHoras;
    int qtdMins;
    int qtdSegs;

    if (horaI <= horaF)
    {
        qtdHoras = horaF - horaI;
    }
    if (horaI > horaF)
    {
        qtdHoras = 24 - horaI + horaF;
        --qtdDias;
    }
    if (minI <= minF)
    {
        qtdMins = minF - minI;
    }
    if (minI > minF)
    {
        qtdMins = 60 - minI + minF;
        --qtdHoras;
    }
    if (segI <= segF)
    {
        qtdSegs = segF - segI;
    }
    if (segI > segF)
    {
        qtdSegs = 60 - minI + minF;
        --qtdMins;
    }

    /*
        verificaValores(&qtdDias, &qtdHoras);
        é uma gambiarra para trarar os 5% de erro que está dando no site, por eu não ter encontrado
        a possível entrada que esteja dando esse erro resolvi tratar ela em específico
    */
    verificaValores(&qtdDias, &qtdHoras);
    printf("%d dia(s)\n", qtdDias);
    printf("%d hora(s)\n", qtdHoras);
    printf("%d minuto(s)\n", qtdMins);
    printf("%d segundo(s)\n", qtdSegs);

    return 0;
}

void verificaValores(int *qtdDias, int *qtdHoras)
{
    if (*qtdHoras < 0)
    {
        *qtdDias -= 1;
        *qtdHoras = 24 + *qtdHoras;
    }
    return;
}

void leAteEnter(char *str)
{
    int i = 0;
    char caractere;
    // ler todos os caracteres até o enter
    do
    {
        caractere = getchar();
        str[i] = caractere;
        ++i;
    } while (caractere != '\n');
    str[i - 1] = '\0';
}

int conversaoCharParaInt(char num)
{
    // 48 é o valor de 0 na tabela ASCII
    // num sendo um char, quando fazemos (int)num [a conversão de um char para um int] ele retorna o valor desse char da tabela ASCII
    // como quero valores de 0-9, na tabela ASCII 48-47 faço o valor que passaram módulo de 48, pois o que sobra da divisão é o valor que eu busco
    return (int)num % 48;
}