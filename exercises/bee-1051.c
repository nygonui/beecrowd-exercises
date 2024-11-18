/*
    - refatorar o código
        - deixar a lógica mais elegante
*/

#include <stdio.h>

int main()
{
    float renda;
    scanf("%f", &renda);
    float imposto = 0;
    if (renda <= 2000)
    {
        printf("Isento\n");
        return 0;
    }
    else if (renda <= 3000)
    {
        imposto = (renda - 2000) * 0.08;
    }
    else if (renda <= 4500)
    {
        imposto = (1000 * 0.08) + (renda - 3000) * 0.18;
    }
    else
    {
        imposto = (1000 * 0.08) + (1500 * 0.18) + (renda - 4500) * 0.28;
    }

    printf("R$ %.2f\n", imposto);
    // printf("--- %.2f\n%.2f\n%.2f\n", resto1, resto2, resto3);

    return 0;
}