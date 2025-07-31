int dobro(int numero) {
    return numero * 2;
}

int main() {
    int valor, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    resultado = dobro(valor);

    printf("O dobro de %d é %d\n", valor, resultado);

    return 0;
}
