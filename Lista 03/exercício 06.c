#include <stdio.h>

void heri(int *A, int *B){

*A= *A+*A;
*B= *B+*B;
int C= *A + *B;

printf(" A eh igual a %d e B %d\n",*A,*B);
printf(" A soma eh %d\n", C);

}
int main (){

int A;
int B;

printf(" Digite dois valore (A e B):\n");
scanf("%d %d", &A,&B);

heri(&A,&B);

return 0;

}

