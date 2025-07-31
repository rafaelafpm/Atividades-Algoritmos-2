#include<stdio.h>

int fatorial(int b){
int i;
for (i=b; i>0; i--){
printf("%d.",i);
}
printf("\n");
return 1;
}
int main()
{

int x;
    printf("Digite um numero para seu fatorial:");
    scanf ("%d",&x);
    fatorial(x);
    return 0;
}
