#include<stdio.h>
int fact(int);
int main(){
    int n;
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, fact(n));
}

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    int i, fact=1;
    for(i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}