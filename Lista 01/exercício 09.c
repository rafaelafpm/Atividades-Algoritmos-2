#include <stdio.h>
int main(){
int x[4][5], i,j,menor,linhamenor,colunamenor, maior;
 printf("Digite uma matriz 4x5:");

for(i=0;i<2;i++){
for (j=0;j<2;j++){
scanf("%2d",&x[i][j]);
}
}
menor=x[0][0];
for(i=0;i<2;i++){
for (j=0;j<2;j++){
if(x[i][j]<menor)
{
menor=x[i][j];
linhamenor=i;
colunamenor=j;
}
}
}

 printf (" \nmenor: %d\n",menor);
 printf (" \ncoordenadas [%d] [%d]\n",linhamenor,colunamenor);
 printf("Matriz:\n");

for(i=0;i<2;i++){
for (j=0;j<2;j++){

 printf (" %d\t", x[i][j]);
 printf ("\t");
}
 printf("\n");
}
return 0;
}
