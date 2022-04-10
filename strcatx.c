#include<stdio.h>
#include<string.h>
void strcatx(char *, char *);
int main(){
    char a[100], b[50];
    printf("Enter two strings to be concatenated: \n");
    scanf("%s%s", a,b);
    strcatx(a,b);
    puts(a);
}

void strcatx(char *p, char *q){
    while(*p!='\0')
        p++;
    *p++ = ' ';
    while(*q!='\0')
        *p++ = *q++;
    *p = '\0';
}
