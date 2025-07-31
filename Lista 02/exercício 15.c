#include <stdio.h>

int triangulo( int x,int y,int z){
if ( x < y + z && y < x + z && z < x + y) {
printf("Forma um triangulo\n");
return 1;
}else{
printf(" Forma nada");
return 0;
}
}
void igual(int w,int d,int e){
if(w==d && d==e){
    printf (" Eh um triangulo equilatero\n");
}
if ( w==d || d==e || e==w){
    printf(" eh um triangulo isosceles\n");
}
if(w!=d && d!=e && e!=w){

printf ("eh um triangulo escaleno\n");
}

}
int main (){
int a,b,c;
printf("Digite 3 valores:");
scanf("%d %d %d",&a,&b,&c);
if(  a==0 || b==0 || c==0){
    printf(" Invalido!");
    return 1;
}
if(triangulo(a,b,c)){
igual(a,b,c);
}
return 0;
}
