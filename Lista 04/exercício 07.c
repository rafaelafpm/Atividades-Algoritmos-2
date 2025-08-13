#include<stdio.h>
#include<stdlib.h>
#include <time.h>

 int main(){
 int i;
 int numero[6];
 int x[6],*p;
 int iguais[6],j;
 int count = 0;

 printf ("Digite os numeros que estao no seu bilhete:");
 for (i=0;i<6;i++){
 scanf("%d",&x[i]);
 }
srand(time(NULL));
 for (i=0;i<6;i++){
    numero[i] = (rand() % 100) + 1;

 }

 for (i=0;i<6;i++){
        for (j=0;j<6;j++)
        if (x[i] == numero[j]){
                iguais[count] = x[i];
                count++;

        }
        }
  p = (int*)malloc(count*sizeof(int));

  for (i=0;i<count;i++){
  p[i] = iguais[i];
  }
  if ( p == NULL){
    printf ("Erro de alocaçao\n");
    return 1;
  }

  printf ("Os numeros sorteados sao:");
  for(i=0;i<6;i++){
  printf("%d\n", numero[i]);
  }
  printf ("Voce acertou (O azar ta no sangue ;) ):");
  for (i=0;i<count;i++){
  printf("%d\n", p[i]);
  }
  printf ("\n");
  free(p);
  return 0;
 }
