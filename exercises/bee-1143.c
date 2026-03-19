#include<stdio.h>

int quadrado(int n){
    return n*n;
}

int cubo(int n){
    return n*n*n;
}

int main(){
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d %d %d\n", i, quadrado(i), cubo(i));
    }

    return 0;
}