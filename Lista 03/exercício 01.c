#include <stdio.h>

int main () {
    int a , *A= NULL;
    char b, *B = NULL;
    float c, *C = NULL;

    a=3;
    b='n';
    c=7.4;

    printf("Valores das variaveis a,b,c antes: %d %c %.2f\n",a,b,c);

    A=&a;
    B=&b;
    C=&c;

    *A=40;
    *B='t';
    *C=234.762;

    printf("Valores das variaveis a,b,c depois: %d %c %.2f\n",a,b,c);


    return 0;
}

