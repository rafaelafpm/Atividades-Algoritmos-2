#include <stdio.h>
#include <stdlib.h>

int main (){
int x;
int *p;
int i;

     printf(" Digite o tamanho do array:");
     scanf("%d",&x);

 p = (int*)malloc(x*sizeof(int));

     printf (" Digite os numeros que quer alocar no array:");
     for(i=0;i<x;i++){
     scanf ("%d",&p[i]);
     }
     
     printf(" Numeros pares:");
     
     for(i=0;i<x;i++){
     if (p[i] % 2 == 0){
     printf ("%d\n",p[i]);
     }
     }
     printf(" Numeros impares:");
     
     for(i=0;i<x;i++){
     if ( p[i] % 2 != 0){
     printf ("%d\n",p[i]);
     }
     }
     return 0;
     }

