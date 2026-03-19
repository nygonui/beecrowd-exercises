#include<stdio.h>

void mostraResultado(int c_a, int c_g, int c_d){
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", c_a);
    printf("Gasolina: %d\n", c_g);
    printf("Diesel: %d\n", c_d);
}

int main(){
    int count_alcool = 0, count_gasolina = 0, count_diesel = 0;
    int opcao = 0;
    while(opcao != 4){
        scanf("%d", &opcao);
        if(opcao == 1) count_alcool++;
        else if(opcao == 2) count_gasolina++;
        else if(opcao == 3) count_diesel++;
    }
    mostraResultado(count_alcool, count_gasolina, count_diesel);

    return 0;
}