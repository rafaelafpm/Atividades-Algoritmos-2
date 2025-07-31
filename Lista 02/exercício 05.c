#include <stdio.h>

int volume(int y){
double p=3.1415;
double v=(4*p*(y*y*y))/3;
printf("O volume da esfera eh %.2f\n ",v );
return v;
}
int main(){
int x;
printf("Digite o raio para calcular o volume de uma esfera:");
scanf("%d",&x);
volume(x);
return 0;


}
