#include <stdio.h>

double volume(int raio, int altura){
double R=raio*raio;
double V=3.141592*R*altura;
printf("O volume do cilindro eh igual a %.2f",V);
return V;

}
int main()
{
    int x,y;
    printf("digite o raio e altura,respectivamente:");
    scanf("%d %d", &x,&y);
    volume(x,y);
    return 0;
}
