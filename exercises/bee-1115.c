#include<stdio.h>

int main(){
    int x = 0, y = 0;

    while(1){
        scanf("%d %d", &x, &y);
        if(x == 0 || y == 0) break;

        if(x > 0 && y > 0) printf("primeiro\n");
        else if(x < 0 && y > 0) printf("segundo\n");
        else if(x < 0 && y < 0) printf("terceiro\n");
        else printf("quarto\n");
    
    }

    return 0;
}