#include<stdio.h>

int main(){
    int x = -1;
    int soma = 0;

    while(1){
        scanf("%d", &x);
        if(x == 0) break;
        int count = 0;
        int x_t = x;
        while(count < 5){
            if(x_t%2 == 0){
                soma += x_t;
                count++;
            }
            x_t++;
        }
        printf("%d\n", soma);
        soma = 0;
    }
    return 0;
}