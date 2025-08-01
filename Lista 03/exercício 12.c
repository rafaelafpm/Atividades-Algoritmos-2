#include <stdio.h>

void rafaelalinda(float num, int *pinteira, float *pfracao){
*pinteira = num;
*pfracao = (num - *pinteira);

}
int main(){
float num;
int pinteira;
float pfracao;
printf("Digite um numero decimal:");
scanf("%f",&num);

rafaelalinda(num,&pinteira,&pfracao);

printf("O inteiro eh %d e o decimal %.2f",pinteira,pfracao);
return 0;
}
