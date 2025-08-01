#include <stdio.h>

void rh(float R, float *area, float *volume){
float A,V;
 A = 4 * 3.14 * (R*R);
 V = (4.0f/ 3.0f) * 3.14f * (R*R*R);
 *area = A;
 *volume = V;

}
int main (){
float r, area = 0,volume = 0;

printf(" Digite o raio :");
scanf ("%f",&r);
rh(r,&area,&volume);
printf(" A area eh %.2f e o volume eh %.2f",area,volume );
return 0;
}
