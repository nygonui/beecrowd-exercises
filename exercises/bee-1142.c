#include<stdio.h>

int main(){
    int n;
    int aux = 1;

    scanf("%d", &n);
    int inicio = 1, fim = 4;

    for(int i = 0; i < n; i++){
        for(int j = inicio; j <= fim; j++){
            if(j % 4 == 0){
                printf("PUM\n");
            }
            else {
                printf("%d ", j);
            }
            
        }
        
        inicio += 4;
        fim += 4;
    }

    return 0;
}