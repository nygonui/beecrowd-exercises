/**
 * Não cheguei a submeter, mas nos meus próprios testes não esta funcionando como eu quero
 * ERRO: Quando eu já adicionei as duas notas válidas e aparece para eu escolher entre fazer outro calculo
 * só a opção 1 está funcionando certo, a opção 2 e quando digita algum valor que não é nem 1 nem 2 não estão funcionando
 */

#include<stdio.h>

int define_escolha_opcao(){
    printf("nova calculo (1-sim 2-nao)\n");
    int opcao = 0;
    scanf("%d\n", &opcao);
    
    if(opcao == 1){
        return 1;
    }
    else if (opcao == 2){
        return 0;
    }
    else {
        return define_escolha_opcao();
    }

}

int main(){
    float nota = 0, aux = 0;
    int i = 0;
    while(i < 2){
        scanf("%f", &aux);
        if(aux >= 0 && aux <= 10) {
            nota += aux;
            if(i == 1){
                float media = nota / 2;
                printf("media = %.2f\n", media);
                
                int decisao = define_escolha_opcao();
                if(decisao){
                    i = -1;
                    nota = 0;
                    aux = 0;
                }
                else{
                    i = 4;
                    break;
                }
            }
            i++;
        }
        else{
            printf("nota invalida\n");
        }
    }
    return 0;
}