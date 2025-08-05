#include <stdio.h>
#include <stdlib.h>
int main(){
int *p;
int x;
int i;


           printf ("Digite aqui o tamanho do array:");
           scanf ("%d",&x);

     p = (int*)malloc(x*sizeof(int));

           printf ("O que quer armazenar neste array de inteiros?\n");

     for (i=0;i<x;i++){

           scanf ("%d",&p[i]);
     }

     for (i=0;i<x;i++){
          printf("%d/n",p[i]);
     }

         free(p);

    return 0;
    }
