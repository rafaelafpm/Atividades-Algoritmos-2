#include <stdio.h>

void ler(float *A, float *B){

printf("Digite 2 notas:");
scanf("%f %f",A,B);

}
int main (){
float a,b;
float M , P ;
ler(&a,&b);
M = (a+b)/2;
P = (a +b * 2)/3;
printf(" A  media ponderada eh %.2f eh a media ar. %.2f",P,M);
return 0;
}
