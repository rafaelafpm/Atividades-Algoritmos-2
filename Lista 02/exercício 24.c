#include <stdio.h>

 void triangulo_central(int n) {
    for (int i = 1; i <= n; i++) {
        int espacos = n - i;
        int asteriscos = 2 * i - 1;


        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }

        for (int j = 0; j < asteriscos; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    triangulo_central(n);

    return 0;
}
