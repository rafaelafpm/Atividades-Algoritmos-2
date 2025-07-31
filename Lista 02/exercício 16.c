#include <stdio.h>

int desenhalinha(int b){
int i;
for(i=0; i<b; i++){
printf("=");
}
printf ("\n");
return 1;
}
int main()
{
    int x;
    printf("Quantos sinais de igual vc quer?");
    scanf("%d",&x);
    desenhalinha(x);
    return 0;
}
