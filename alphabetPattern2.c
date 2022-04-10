#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    for(i=n; i>0; i--){
        for(j=1; j<=i; j++){
            printf("%c ", j+64);
        }
        printf("\n");
    }
}