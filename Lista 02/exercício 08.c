#include <math.h>
#include <stdio.h>

double funcao(int a, int b){
double h=(a*a)+(b*b);
double raiz= sqrt (h);
printf(" A hipotenusa eh %.2f\n",raiz);
return raiz;
}
int main (){
int a,b;
printf(" Digite valores para calcular a hipotenusa:");
scanf("%d %d",&a,&b);
funcao(a,b);
return 0;
}
