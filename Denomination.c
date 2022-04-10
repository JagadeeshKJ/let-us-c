#include<stdio.h>
int main(){
    static int n, c100, c50, c10, c5, c2, c1;
    scanf("%d", &n);
    int temp = n;
    if(n>=100){
        c100 = n/100;
        n = n-100*c100;
    }
    if(n>=50){
        c50 = n/50;
        n = n-50*c50;
    }
    if(n>=10){
        c10 = n/10;
        n = n-10*c10;
    }
    if(n>=5){
        c5 = n/5;
        n = n-5*c5;
    }
    if(n>=2){
        c2 = n/2;
        n = n-2*c2;
    }
    if(n>=1){
        c1 = n/1;
        n = n-1*c1;
    }
    printf("%d in Denomination:\n100 x %d\n50 x %d\n10 x %d\n5 x %d\n2 x %d\n1 x %d", temp, c100, c50, c10, c5, c2, c1);
}