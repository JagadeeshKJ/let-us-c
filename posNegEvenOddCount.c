#include<stdio.h>
static int pos, neg, even, odd;
#define posOrNeg(n) (n>=0 ? pos++ : neg++)
#define evenOdd(n) (n%2 == 0 ? even++ : odd++)
#define n 25
int main(){
    int a[n], i, num, count = 0;
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        posOrNeg(a[i]);
        evenOdd(a[i]);
    }
    printf("Positive = %d\nNegative = %d\nEven = %d\nOdd = %d", pos, neg, even, odd);
}