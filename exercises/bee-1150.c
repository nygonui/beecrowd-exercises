#include<stdio.h>

int main(){
    int x = 0, z = 0;
    scanf("%d", &x);

    while(z <= x){scanf("%d", &z);}

    int soma = x;
    int count = 1;
    while (soma <= z){
        soma += x + count;
        count++;
    }
    printf("%d\n", count);

    return 0;
}