#include<stdio.h>
int i,j;
int main(){
    int z[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    // scanf("%d", z[i][j]) keep it in nested loops for dynamic matrices
    int a[4][4];
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            a[i][j] = z[j][i];
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}