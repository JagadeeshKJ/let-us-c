#include<stdio.h>
#define n 25
int main(){
    int a[n], i, num, count = 0;
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    fflush(stdin);
    printf("Enter the number to be searched: \n");
    scanf("%d", &num);
    for(i=0; i<n; i++){
        if(num == a[i])
            count++;
    }
    if(count)
        printf("%d is found %d times\n", num, count);
    else
        printf("%d is not found", num);
}