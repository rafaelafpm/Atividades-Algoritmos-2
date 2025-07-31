#include <stdio.h>
int main (){
int x[5],i, menor,soma = 0, maior;

for(i=0;i<5;i++)
{
printf ("Digite 5 valores %d:", i+1);
scanf ("%d",&x[i]);

}
maior=menor=x[0];
printf ("\nOs numeros sao:\n");
for(i=0;i<5;i++){
printf (" \n%d ", x[i]);
soma+=x[i];

}
for(i=0;i<5;i++){
if ( x[i]>maior){
 maior=x[i];
}
if ( x[i]<menor){
 menor=x[i];
}
}
printf ("\nA soma eh %d\n", soma);
printf ("\nA media eh: %.2f\n", soma/5.0);
printf ("\no menor eh o maior sao: \n",x);
printf(" %d \n", menor);
printf(" %d \n ", maior);


return 0;
}
