#include <stdio.h>

void funcao(int *A, int *B){

int F = *A;
    *A = *B;
    *B = F;

    printf (" A = %d e B = %d  ",*A,*B);

}

int main (){

int A;
int B;

printf(" Digite valores para A e B, respectivamente:");
scanf("%d %d",&A,&B);

funcao(&A,&B);

}
