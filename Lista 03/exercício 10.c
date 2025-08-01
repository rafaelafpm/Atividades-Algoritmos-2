#include <stdio.h>

int main(){
int a[5],i;
int *r = a;

printf("Digite os numeros para o array:");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}

for(i=0;i<5;i++){
printf("%d ", 2 * (*r + i));

}
return 0;
}

