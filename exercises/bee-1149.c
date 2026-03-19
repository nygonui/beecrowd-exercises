#include<stdio.h>

int main(){
    int a = 0, n = 0;
    scanf("%d", &a);
    while(n <= 0){ scanf("%d", &n); }
    
    int soma = a;
    for(int i = 1; i < n; i++){
        soma += a + i;
    }
    printf("%d\n", soma);
    return 0;
}