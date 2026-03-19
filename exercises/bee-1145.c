#include<stdio.h>

int main(){
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    int count = 0;
    for(int i = 1; i <= y; i++){
        count++;
        if(count == x){
            printf("%d\n", i);
            count = 0;
        }
        else {
            printf("%d ", i);
        }
    }

    return 0;
}