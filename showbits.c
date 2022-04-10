#include<stdio.h>
#define BV(n) 1<<n;
void showbits(int n){
    int i;
    unsigned char j, k, addMask;
    for(i=7; i>=0; i--){
        j = i;
        addMask = 1<<j;
        k = n & addMask;
        (k == 0 ? printf("0") : printf("1"));
    }
}
int main(){
    // char a;
    // a = BV(2);
    // printf("%#x with bits : ", a);
    // showbits(~a);
    char x = 5;
    printf("\n%#02x with bits : ", x);
    showbits(x);
    // 3rd Bit in 5 is ON
    char y = x | ~BV(2);
    y == 0 ? printf("\n3rd Bit is OFF") : printf("\n3rd bit is ON");
    
}