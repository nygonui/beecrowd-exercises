#include<stdio.h>

int main(){
    float nota = 0, aux = 0;
    int i = 0;
    while(i < 2){
        scanf("%f", &aux);
        if(aux >= 0 && aux <= 10){
            nota += aux;
            if(i == 1){
                printf("media = %.2f\n", (nota / 2));
            }
            i++;
        }
        else {
            printf("nota invalida\n");
        }
    }

    return 0;
}