
#include <stdio.h>

typedef struct {
 float x;
 float y;
} Ponto;

typedef struct {
 Ponto IE;
 Ponto SD;
} Retangulo;

int main() {
 Retangulo r;

 printf("Digite as coordenadas do ponto inferior esquerdo:\n");
 scanf("%f %f", &r.IE.x, &r.IE.y);

 printf("Digite as coordenadas do ponto superior direito:\n");
 scanf("%f %f", &r.SD.x, &r.SD.y);

 float base = r.SD.x - r.IE.x;
 float altura = r.SD.y - r.IE.y;
 float area = base * altura;
 printf("Área do retângulo = %.2f\n", area);

 return 0;
