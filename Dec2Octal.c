#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x, sum = 0;
    while(n){
        x = n % 8;
        sum = sum * 10 + x;
        n = n / 8;
    }
    printf("Octal value: %d", sum);
}