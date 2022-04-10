#include<stdio.h>
int strlenx(char *);
int main(){
    char a[100];
    gets(a);
    printf("Length of the string is %d", strlenx(a));
}
int strlenx(char *p){
    int count = 0;
    while(*p++ != '\0')
        count++;
    return count;
}