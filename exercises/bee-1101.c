#include<stdio.h>

void op(int menor, int maior){
    int soma = 0;
    for(int i = menor; i <= maior; i++){
        printf("%d ", i);
        soma += i;
    }
    printf("Sum=%d\n", soma);
}

int main(){
    while(1){
        int m = 0, n = 0;
        scanf("%d %d", &m, &n);

        if(m <= 0 || n <= 0) break;

        if(m < n) op(m, n);
        else if(m > n) op(n, m);
    }

    return 0;
}