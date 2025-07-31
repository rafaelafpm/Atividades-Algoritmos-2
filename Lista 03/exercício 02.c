#include <stdio.h>

int main(){
int variavel1 = 5;
int variavel2 = 8;

printf (" Endereço de variavel 1: %d\n", &variavel1);

printf (" Endereço de variavel 2: %d\n", &variavel2);

if (&variavel1 > &variavel2){

    printf(" O maior eh a variavel 1\n");

} else {

    printf(" O maior eh a variavel 2\n");


}
return 0;
}

