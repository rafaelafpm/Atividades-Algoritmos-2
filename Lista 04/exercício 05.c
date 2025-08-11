#include <stdio.h>
#include <stdlib.h>

int main (){
    
int *p;
int x;
int f;
int i;

printf ("Digite um numero para o tamanho do vetor:");
scanf("%d",&x);

p = (int*)malloc(x*sizeof(int));

printf("Digite numeros para o array:");
for (i=0;i<x;i++){
scanf("%d",&p[i]);
}

printf("Digite um numero e falarei se es multiplo dos numeros do array:");
scanf("%d",&f);

for (i=0;i<x;i++){
if (p[i] % f == 0){
    printf ("%d\n",p[i]);


}
}
return 0;
}
