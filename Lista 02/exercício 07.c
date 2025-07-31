#include <stdio.h>

float converter( float celsius){
float F = (celsius * 1.8) + 32;
printf(" equivalem a %.2f fahrenheit\n ", F);

return F;
}
int main (){
float x;
printf("Digite graus em celsius %d ",x);
scanf("%f",&x);
converter(x);
return 0;
}
