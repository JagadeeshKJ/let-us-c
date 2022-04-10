#include<stdio.h>
int main(){
    int n, x, sum, i = 1;
    while(i++ <= 500){
        n = i;
        int temp = n;
        sum = 0;
        while(n){
            x = n%10;
            sum += x * x * x;
            n /= 10;
        }
        if(temp == sum){
            printf("%d is an Armstrong Number\n", temp);
        }
    }
}