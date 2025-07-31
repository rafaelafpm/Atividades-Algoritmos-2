#include <stdio.h>

void rafaela(int *x, int *y){
    int temp;

   if (*x < *y) {

        temp = *x;
        *x = *y;
        *y = temp;

    printf("x: %d\n", *x);
    printf("y: %d\n", *y);
    }
}
int main (){
int x;
int y;

printf("Digite dois valores para x e y:");
scanf("%d %d",&x,&y);

rafaela(&x,&y);
return 0;
}
