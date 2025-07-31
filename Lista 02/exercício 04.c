#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool eh_quadrado_perfeito(int n) {
    if (n < 0) {
        return false;
    }
    int raiz = (int)sqrt(n);
    return raiz * raiz == n;
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (eh_quadrado_perfeito(numero)) {
        printf("%d é um quadrado perfeito.\n", numero);
    } else {
        printf("%d não é um quadrado perfeito.\n", numero);
    }

    return 0;
}
