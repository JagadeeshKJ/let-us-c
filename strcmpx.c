#include<stdio.h>
int strcmpx(char[], char[]);
int main(){
    char a[20], b[20];
    gets(a);
    gets(b);
    printf("%d", strcmpx(a,b));
}

int strcmpx(char p[], char q[]){
    int i;
    for(i=0; p[i]!='\0', q[i]!='\0'; i++){
        if(p[i] != q[i])
            return p[i] - q[i];
    }
    if(p[i] == '\0' && q[i] == '\0'){
        return 0;
    }
}