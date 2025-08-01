#include <stdio.h>
int main(){
int s[5],i;

printf("Digite numeros para o array: ");

for(i=0;i<5;i++){

    scanf("%d",&s[i]);
}

 printf(" As posiçoes dos numeros pares e a os endereços:");

for(i=0;i<5;i++){

if(s[i]%2==0){

 printf(" %d\n\t %p\n\t", s[i],&s[i]);

}
}
return 0;
}

