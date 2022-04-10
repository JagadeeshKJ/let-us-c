#include<stdio.h>
int main(){
    int i,j,sp,n;
    scanf("%d", &n);
    for(i=n; i>0; i--){
        for(sp=0; sp<n-i; sp++){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}