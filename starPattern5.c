#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i+j<=n)
                printf(" ");
            else
                printf("*");
        }
        for(j=2; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }
}