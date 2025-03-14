#include<stdio.h>

void dividindo_x_por_y(int x, int y){
    if(y == 0) printf("divisao impossivel\n");
    else{
        float result = (float) x / (float) y;
        printf("%.1f\n", result);

    }
}

int main(){
    int n = 0;
    int x = 0, y = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        dividindo_x_por_y(x, y);
    }

    return 0;
}