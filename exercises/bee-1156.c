#include<stdio.h>

int main(){
    float soma = 0.0;
    int divisor = 2;
    for(int i = 1; i <= 39; i+=2){
        soma += (float) i / (divisor / 2);
        divisor *= 2;
    }
    printf("%.2f\n", soma);
    return 0;
}