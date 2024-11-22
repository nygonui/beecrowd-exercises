#include <stdio.h>
int main()
{
    int qtdValoresLidos = 0;
    scanf("%d", &qtdValoresLidos);

    int valoresDentroDoIntervalo = 0;
    int valoresForaDoIntervalo = 0;

    int v;
    for (int i = 0; i < qtdValoresLidos; i++)
    {
        scanf("%d", &v);
        if (v >= 10 && v <= 20)
            valoresDentroDoIntervalo++;
        else
            valoresForaDoIntervalo++;
    }

    printf("%d in\n%d out\n", valoresDentroDoIntervalo, valoresForaDoIntervalo);
    return 0;
}