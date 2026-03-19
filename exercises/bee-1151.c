#include<stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    if (n > 0 && n < 46){
        int a = 0;
        int b = 1;
        printf("%d %d", a, b);
        for(int i = 2; i < n; i++){
            int c = a + b;
            if(i == n-1) printf(" %d\n", c);
            else {printf(" %d", c);}  
            a = b;
            b = c;
        }
    }

    return 0;
}