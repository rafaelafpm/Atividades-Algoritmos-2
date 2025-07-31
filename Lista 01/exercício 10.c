#include <stdio.h>

int main() {
    int M[5][5], sl[5] = {0}, sc[5] = {0};
    int i, j;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            sl[i] += M[i][j];  // soma da linha i
            sc[j] += M[i][j];  // soma da coluna j
        }
    }

    printf("\nMATRIZ:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2d\t", M[i][j]);
        }
        printf("\n");
    }

  
    printf("\nSoma das linhas:\n");
    for (i = 0; i < 5; i++) {
        printf("Linha %d: %d\n", i + 1, sl[i]);
    }

  
    printf("\nSoma das colunas:\n");
    for (j = 0; j < 5; j++) {
        printf("Coluna %d: %d\n", j + 1, sc[j]);
    }

    return 0;
}
