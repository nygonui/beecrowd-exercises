#include<stdio.h>

int main(){
    int n = 0;
    int x = 0, y = 0;
    int soma = 0;
    scanf("%d", &n);

    int count = 0;
    while(count < n){
        count++;
        scanf("%d %d", &x, &y);
        int count_1 = 0;
        while(count_1 < y){
            if(x%2 != 0){
                soma += x;
                count_1++;
            }
            x++;
        }
        printf("%d\n", soma);
        soma = 0;

    }

    return 0;
}