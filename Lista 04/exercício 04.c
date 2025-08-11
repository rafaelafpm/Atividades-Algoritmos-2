#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x, i;
    char *p;

    printf("Digite o tamanho da string: ");
    scanf("%d", &x);

    p = (char *)malloc((x + 1) * sizeof(char));
    if (p == NULL) {
        printf("Erro de memória\n");
        return 1;
    }

    printf("Digite a string: ");
    scanf("%s", p);

    printf("String sem vogais: ");
    for (i = 0; i < strlen(p); i++) {
        if (p[i] != 'a' && p[i] != 'e' && p[i] != 'i' && p[i] != 'o' && p[i] != 'u') {
            printf("%c", p[i]);
        }
    }
    printf("\n");

    free(p);
    return 0;
}
