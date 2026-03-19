#include<stdio.h>

int main(){
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    
    // define x como menor valor
    if(x > y){
        int aux = x;
        x = y;
        y = aux;
    }

    for(int i = x+1; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }

    return 0;
}