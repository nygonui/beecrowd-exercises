#include<stdio.h>

int main(){
    while(1){
        int x = 0, y = 0;
        scanf("%d %d", &x, &y);

        if(x == y) break;
        else if(x < y) printf("Crescente\n");
        else printf("Decrescente\n");
    }
    return 0;
}