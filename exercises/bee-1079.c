#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    float n1, n2, n3;
    float media;

    for (int i = 0; i < n; i++)
    {
        scanf("%f %f %f", &n1, &n2, &n3);
        media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);
        printf("%.1f\n", media);
    }
}