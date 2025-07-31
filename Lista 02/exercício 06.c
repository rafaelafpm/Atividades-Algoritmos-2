#include <stdio.h>

int converter (int horas, int minutos, int segundos){
    int rafaela = horas* 3600 + minutos *60 + segundos;
printf(" equivalem a %d segundos",rafaela);
return rafaela;
}
int main()
{
    int h,m,s;
    printf("digite as horas,minutos e segundos respectivamente:\n");
    scanf("%d %d  %d", &h , &m , &s);
    converter(h , m , s);
    return 0;
}
