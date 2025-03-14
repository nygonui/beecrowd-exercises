#include<stdio.h>



int main(){
    int n = 0;
    scanf("%d", &n);

    while(n != 0){
        n--;
        int x = 0, y = 0;
        scanf("%d %d", &x, &y);
        int soma = 0;


        // define o maior
        if(x < y){
            // vai do menor até o maior
            for(int i = x + 1; i < y; i++){
                // verifica se o número é impar e agrega em soma se for
                if(i % 2 != 0){
                    soma += i;
                }
            }
        }
        else if (x > y) {
            for(int i = y + 1; i < x; i++){
                if(i % 2 != 0){
                    soma += i;
                }
            }
        }
        printf("%d\n", soma);

    }


    return 0;
}