#include<stdio.h>

int main(){
    int senhaValida = 2002;
    int senha = 0;

    while(1){
        scanf("%d", &senha);
        
        if (senha == senhaValida){
            printf("Acesso Permitido\n");
            break;
        }
        printf("Senha Invalida\n");
    }
    return 0;
}