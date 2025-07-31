#include <stdio.h>

int main (){
int x = 8;
int y = 9;

printf (" Os esderecos de x e y sao, respectivamente: %d e %d\n", &x,&y);
if (&x > &y){

   printf(" O conteudo da variavel com maior endereco ( x ) eh %d\n", x);

} else {

printf (" O conteudo da variavel com maior endereco ( y ) eh %d\n ", y);

}
return 0;
}
