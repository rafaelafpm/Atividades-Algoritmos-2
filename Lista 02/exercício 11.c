#include <stdio.h>

int aritmetica(int a, int b, int c){
float soma = (a+ b+ c)/3;
printf(" Media aritmetica: %.2f\n ",soma);
return soma;
}

int mediaponderada( int e, int i, int o){
float conta = e*5 + i*3 + o*2;
float resultado = conta/10;
printf (" Media ponderada %.2f\n", resultado);
return resultado;
}
int main(){
int num1,num2,num3;
char x;
printf("Digite 3 notas de um aluno:");
scanf("%d %d %d", &num1, &num2, &num3);
printf(" Agora digite 'A' para media aritmetica das notas ou 'P' para calcular a media ponderada rsrs\n ");
scanf(" %c",&x);
if (x== 'a'|| x=='A'){
    aritmetica(num1,num2,num3);

}else{
 mediaponderada(num1,num2,num3);
 }
return 0;
}
