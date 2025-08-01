#include <stdio.h>

void ponteiroehmuitodificil( int *a, int b){

 *a=*a+b;

}
int main(){
int a;
int b;

printf("Digite dois numeros para A e B, respectivamente:");
scanf("%d %d",&a,&b);

ponteiroehmuitodificil(&a,b);

printf("A soma e o valor da variavel a eh: %d , enquanto b eh %d", a, b);
return 0;
}
