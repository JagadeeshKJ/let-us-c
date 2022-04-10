#include<stdio.h>
int power(int, int);
int main(){
    int n,p;
    scanf("%d%d", &n, &p);
    printf("Value of %d raised to %d = %d", n, p, power(n,p));
}

int power(int n, int p){
    int x = 1;
    if(p<=0){
        return 1;
    }
    while(p){
        x = x * n;
        p -= 1;
    }
    return x;
}