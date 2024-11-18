#include <stdio.h>

int main()
{
    float valores[6];
    scanf("%f %f %f %f %f %f", &valores[0], &valores[1], &valores[2], &valores[3], &valores[4], &valores[5]);
    int count = 0;
    int i;
    for (i = 0; i < 6; i++)
    {
        if (valores[i] > 0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n", count);

    return 0;
}