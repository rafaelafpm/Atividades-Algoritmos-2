#include <stdio.h>
#include <stdlib.h>

int main() {
    int *memoria;
    int tamanho_bytes;
    int qtd_int;
    int opcao;
    int posicao, valor;

    printf("Digite o tamanho da memoria (em bytes): ");
    scanf("%d", &tamanho_bytes);

    
    if (tamanho_bytes % sizeof(int) != 0) {
        printf("Erro: tamanho deve ser multiplo de %lu bytes (tamanho de int).\n", sizeof(int));
        return 1;
    }

    
    qtd_int = tamanho_bytes / sizeof(int);

    
    memoria = (int *)malloc(tamanho_bytes);
    if (memoria == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    
    for (int i = 0; i < qtd_int; i++) {
        memoria[i] = 0;
    }

    
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Inserir valor\n");
        printf("2 - Consultar valor\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a posicao (0 a %d): ", qtd_int - 1);
                scanf("%d", &posicao);
                if (posicao < 0 || posicao >= qtd_int) {
                    printf("Posicao invalida!\n");
                    break;
                }
                printf("Digite o valor: ");
                scanf("%d", &valor);
                memoria[posicao] = valor;
                break;

            case 2:
                printf("Digite a posicao (0 a %d): ", qtd_int - 1);
                scanf("%d", &posicao);
                if (posicao < 0 || posicao >= qtd_int) {
                    printf("Posicao invalida!\n");
                    break;
                }
                printf("Valor na posicao %d: %d\n", posicao, memoria[posicao]);
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    
    free(memoria);

    return 0;
}
