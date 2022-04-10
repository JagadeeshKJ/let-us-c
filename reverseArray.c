#include<stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    int a[n], rev[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=n-1, j=0; i>=0; i--, j++){
        rev[j] = a[i];
    }
    printf("Elements in reverse order: \n");
    for(i=0; i<n; i++){
        printf("%d ", rev[i]);
    }
}