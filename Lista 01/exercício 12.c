#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i, j, repetiu = 0;

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    int tamanho = strlen(texto);

    for (i = 0; i < tamanho; i++) {
        char atual = texto[i];
        if ((atual >= 'A' && atual <= 'Z') || (atual >= 'a' && atual <= 'z')) {
            int cont = 0;
            for (j = 0; j < tamanho; j++) {
                if (texto[j] == atual)
                    cont++;
            }
            if (cont > 1) {
                int ja_mostrou = 0;
                for (j = 0; j < i; j++) {
                    if (texto[j] == atual) {
                        ja_mostrou = 1;
                        break;
                    }
                }
                if (!ja_mostrou) {
                    printf("%c ", atual);
                    repetiu = 1;
                }
            }
        }
    }

    if (!repetiu) {
        printf("Nenhuma letra repetida");
    }

    printf("\n");

    return 0;
}
