#include <stdio.h>
#include <stdlib.h>

int main (){
int x,i=1,contador=0;
printf("Digite um numero e sera gerado a quantidade dele em numeros impares:");
scanf("%d",&x);
while (contador<x){
 i=i+2;
 printf ("%d\n",i);
 contador++;
}
return 0;
}
