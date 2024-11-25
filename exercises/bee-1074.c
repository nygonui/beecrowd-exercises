#include <stdio.h>

int main()
{
    int qtdDeValoresLidos;
    scanf("%d", &qtdDeValoresLidos);

    int valor;

    for (int i = 0; i < qtdDeValoresLidos; i++)
    {
        scanf("%d", &valor);
        if (valor == 0)
        {
            printf("NULL\n");
        }
        else if (valor % 2 == 0)
        {
            printf("EVEN ");
            if (valor > 0)
            {
                printf("POSITIVE\n");
            }
            else
            {
                printf("NEGATIVE\n");
            }
        }
        else
        {
            printf("ODD ");
            if (valor > 0)
            {
                printf("POSITIVE\n");
            }
            else
            {
                printf("NEGATIVE\n");
            };
        }
    }

    return 0;
}