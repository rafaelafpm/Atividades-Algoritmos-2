#include <stdio.h>

int naosei(int a, int b){
    int h=1,i,v;
for(i=0;i<b;i++){
h *=a;
}
printf("%d",h);
return h;


}
int main(){
int x,y;
printf("Digite 2 valores, x e z, respectivamente:");
scanf("%d %d",&x,&y);
naosei(x,y);
return 0;
}
