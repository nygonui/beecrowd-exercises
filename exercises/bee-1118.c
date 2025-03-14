#include<stdio.h>

float variasNotasComValidacao(){
    float nota = 0, aux = 0;
    float media = 0;
    int i = 0;

    while(i < 2){
        scanf("%f", &aux);
        if(aux >= 0 && aux <= 10){
            nota += aux;
            if(i == 1){
                media = nota / 2;
            }
            i++;
        }
        else {
            printf("nota invalida\n");
        }
    }

    return media;
}

int main(){
    int decisao = 1;
    float media;
    int controlador = 1;

    while(controlador){
        if(decisao == 1){
            media = variasNotasComValidacao();
            printf("media = %.2f\n", media);
            decisao = -1;
        }
        else if (decisao == 2){
            controlador = 0;
        }
        else {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &decisao);
        }
    }
    
    return 0;
}