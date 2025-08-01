#include <stdio.h>

int main(){

float rafa[10] = {10.07, 20, 30, 40, 50, 60.5, 70.4, 80, 90, 100};
int i;

printf(" As posiçoes sao:");

for(i=0;i<10;i++){

    printf("%d = %p\n",i, &rafa[i]);

}

return 0;

}
