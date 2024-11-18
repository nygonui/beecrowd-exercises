/*
    to-do:
        * refatorar código:
            * possibilidade de uso de ponteiros
            * criar funções para reutilizar trexos de código
*/

#include <stdio.h>

int isTrianguloEquilatero(float a, float b, float c);
int isTrianguloIsoceles(float a, float b, float c);

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float aux = 0.0;
    if (b > a && b > c)
    {
        // coloca o valor de b na posição a, e o valor de a em b
        aux = a;
        a = b;
        b = aux;
        // se c for maior que o atual b, c vai para b e b para c
        if (b < c)
        {
            aux = c;
            c = b;
            b = aux;
        }
    }
    else if (c > a && c > b)
    {
        aux = a;
        a = c;
        c = aux;
        if (b < c)
        {
            aux = c;
            c = b;
            b = aux;
        }
    }
    else if (b < c)
    {
        aux = c;
        c = b;
        b = aux;
    }

    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((a * a) == ((b * b) + (c * c)))
    {
        printf("TRIANGULO RETANGULO\n");
        if (isTrianguloIsoceles(a, b, c))
            printf("TRIANGULO ISOSCELES\n");
    }
    else if ((a * a) > ((b * b) + (c * c)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if (isTrianguloIsoceles(a, b, c))
            printf("TRIANGULO ISOSCELES\n");
    }
    else if ((a * a) < ((b * b) + (c * c)))
    {
        printf("TRIANGULO ACUTANGULO\n");
        if (isTrianguloIsoceles(a, b, c))
            printf("TRIANGULO ISOSCELES\n");
        else if (isTrianguloEquilatero(a, b, c))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
    }

    return 0;
}

int isTrianguloEquilatero(float a, float b, float c)
{
    if (a == b && a == c)
        return 1;
    else
        return 0;
}

int isTrianguloIsoceles(float a, float b, float c)
{
    if ((a == b || b == c) && !isTrianguloEquilatero(a, b, c))
        return 1;
    else
        return 0;
}
