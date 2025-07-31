#include <stdio.h>

int num(int a, int b){
int i;
for (i=a;i<=b;i++){
printf ("%d\t",i);
}
return 1;
}
int main()
{
int x,y;
    printf("Digite 2 nuneros para imprimir os números entre eles:");
    scanf ("%d %d", &x,&y);
    num(x,y);
    return 0;
}
