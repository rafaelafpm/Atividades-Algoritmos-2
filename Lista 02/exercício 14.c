void consumo(float km, float litros) {
float rendimento = km / litros;
printf("Consumo: %.2f Km/l\n", rendimento);
if (rendimento < 8) {
printf("Venda o carro!\n");
} else if (rendimento >= 8 && rendimento <= 14) {
printf("Econômico\n");
} else {
printf("Super econômico\n");
    }
}

int main() {
float distancia, litros;
printf("Digite a distância percorrida (km): ");
scanf("%f", &distancia);
printf("Digite a quantidade de litros de gasolina consumidos: ");
scanf("%f", &litros);
consumo(distancia, litros);
return 0;
}

