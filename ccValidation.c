#include<stdio.h>
#include<stdlib.h>
int main(){
    int cc[20], a[20], i, j = 0, n, sum = 0, sum2 = 0;
    scanf("%d", &n);

    if(n!=16){
        printf("Credit card usually consists of 16 digits");
        exit(0);
    }

    for(i=0; i<n; i++)
        scanf("%d", &cc[i]);
    
    for(i=0; i<n; i += 2)
        a[j++] = cc[i] * 2;
    
    for(j=0; j < n/2; j++){
        if(a[j] >= 10)
            a[j] = a[j] - 9;
    }

    for(j=0; j<n/2; j++){
        sum += a[j];
    }
    for(i=1; i<n; i += 2){
        sum2 += cc[i];
    }
    if((sum + sum2) % 10 == 0)
        printf("Valid Credit Card");
    else
        printf("Invalid Credit Card");


}