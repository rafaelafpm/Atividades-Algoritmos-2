#include <stdio.h>
#include <stdlib.h>

int main(){

int x[2], i, j[2], num = 0, cont = 0;

 printf("\nDigite 2 numeros positivos diferentes de 0:\n");

 printf("\nDigite a quantidade de numeros multiplos:\n");
 scanf("%d", &num);

 printf("\nO valor de x: ");
 scanf("%d %d", &x[0], &x[1]);

 printf("\nO valor de j: ");
 scanf("%d %d", &j[0], &j[1]);

 if (x[0] <= 0 || x[1] <= 0 || j[0] <= 0 || j[1] <= 0) {
 printf(" numeros positivos, ou voce nao leu?\n");
 return 1;
 }

 i = 1;
 while (cont < num) {
 if (i % x[0] == 0 || i % j[0] == 0) {
 printf("%d ", i);
 cont++;
 }
 i++;
 }

 printf("\n");
  return 0;
}
