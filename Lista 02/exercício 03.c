#include <stdio.h>
int verifique(int naosei){
 if(naosei > 0){
printf (" -1\n");

return -1;
 }
else if(naosei < 0){
    printf("1\n");

return 1;
}
else{
    printf("0\n");
    return 0;
}

}
int main()
{
    int x,r;
    printf ("Digite um valor:");
    scanf("%d",&x);
    r=verifique(x);
   printf(" resultado: %d", r);

return 0;
}
