#include <stdio.h>

int primo(int v){
int i;
for(i=v;i>0;i--){
if( v % 1 ==1 && v % v==1  ){
        if( v % 2 != 1){ ta errado
 printf(" %d",i);
        }
}
    }

return 1;
}


int main (){
int x;
printf("Digite um numero para imprimir os numeros primos abaixo dele : ");
scanf ("%d",&x);
primo(x);
return 0;
}
