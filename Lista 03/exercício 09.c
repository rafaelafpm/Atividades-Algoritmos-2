#include <stdio.h>

int main (){

float a[3][3];
int i,j;

printf("O endereço de cada posiçao da matriz eh:");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){

    printf("%d %d = %p\t\n",i,j,&a[i][j]);

}
}
return 0;
}
