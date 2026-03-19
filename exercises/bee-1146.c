#include<stdio.h>
#define TRUE 1

int main(){
    while(TRUE){
        int x = 0;
        scanf("%d", &x);

        if(x == 0) break;

        for(int i = 1; i <= x; i++){
            if(i == x) printf("%d\n", i);
            else printf("%d ", i);
        }
    }
    return 0;
}