#include<stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int result = n;
    for(int i = n-1; i >= 1; --i) result *= i;
    printf("%d\n", result);
    return 0;
}