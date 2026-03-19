#include<stdio.h>

int main(){
    int gol_inter = 0, gol_gremio = 0;
    int count = 1, count_empates = 0, count_inter = 0, count_gremio = 0;
    int decisao = 1, controlador = 1;
    
    while(controlador){
        if(decisao == 1){
            scanf("%d %d", &gol_inter, &gol_gremio);
            
            if(gol_inter > gol_gremio) count_inter++;
            else if(gol_gremio > gol_inter) count_gremio++;
            else count_empates++;
            count++;

            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &decisao);
        }
        else if(decisao == 2){

           printf("%d grenais\n", --count);
           printf("Inter:%d\n", count_inter);
           printf("Gremio:%d\n", count_gremio);
           printf("Empates:%d\n", count_empates);
           if(count_inter > count_gremio) printf("Inter venceu mais\n");
           else if(count_gremio > count_inter) printf("Gremio venceu mais\n");
           else printf("Nao houve vencedor");

           controlador = 0;
        }
    }

    return 0;
}