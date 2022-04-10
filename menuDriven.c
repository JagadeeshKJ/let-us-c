#include<stdio.h>
#include<stdlib.h>
int fact(int n){
    int i, fact = 1;
    if(n==0 || n==1){
        return 1;
    }
    for(i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int prime(int n){
    int i;
    for(i=2; i<=n-1; i++){
        if(n%i==0){
            return 0;
        }
    }
    if(n==i){
        return 1;
    }
}

int oddEven(int n){
    if(n%2==0){
        return 1;
    }
    else
        return 0;
}

int main(){
    int ch, n;
    printf("Welcome to menu driven, choose the following options: ");
    while(1){
        printf("\n1 - Factorial of a number\n2 - Prime or not\n3 - Odd or even\n4 - Exit\n");
        scanf("%d", &ch);
        if(ch!=4){
            printf("Enter a number: \n");
            scanf("%d", &n);
        }
        switch(ch){
            case 1:
                printf("Factorial of %d is %d\n", n, fact(n));
                break;
            case 2:
                if(prime(n))
                    printf("%d is a prime number\n", n);
                else
                    printf("%d is not a prime number\n", n);
                break;
            case 3:
                if(oddEven(n))
                    printf("%d is a even Number\n", n);
                else
                    printf("%d is a odd Number\n", n);
                break;
            case 4:
                printf("See you!");
                exit(0);
                break;
            default:
                printf("I wish you could see the options");
                exit(1);
        }
    }
}