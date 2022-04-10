#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int *p, small = a[0];
    p = a;
    for(i=0; i<n; i++){
        if(p[i] < p[i+1])
            if(p[i] <= small)
                small = p[i];
        else
            if(p[i+1] <= small)
                small = p[i+1];   
    }
    printf("Smallest value is %d", small);
}