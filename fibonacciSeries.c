#include<stdio.h>
int fibo(int);
int main(){
    int n;
    scanf("%d", &n);
    printf("\nSum of first %d in fibo series is %d", n, fibo(n));
}

int fibo(int n){
    if(n==0) return 0;
    static int a=0, b=1;
    int temp = a;
    a = b;
    b += temp;
    printf("%d ", a);
    static int sum;
    sum += a;
    fibo(n-1);
    return sum;
}

// Without Recursion
/*
#include<stdio.h>    
int main()    
{    
 int a=0,b=1,sum,i,n;    
 printf("Enter the n of elements:");    
 scanf("%d",&n);    
 (n==0 ? printf("0 ") : (n==1) ? printf("1 ") : printf("%d %d", a,b));
 for(i=2;i<n;++i)  
 {    
  sum = a + b;
  printf(" %d", sum);
  a = b;
  b = sum;   
 }  
  return 0;  
} */