#include<stdio.h> 

int main(){
    int idade = 0, soma = 0;
    int count = 0;
    float media = 0.0;
    
    while(idade >= 0){ 
        scanf("%d", &idade);
        if(idade < 0) break;
        count++;
        soma += idade;
    }
    media = (float) soma / count;

    printf("%.2f\n", media);
    return 0;
}