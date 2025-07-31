#include <stdio.h>

int main() {
    int A[5], i;

  
    for(i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &A[i]);
    }

    
    printf("Valores do vetor:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    
    for(i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    printf("Os 3 menores valores do vetor são:\n");
    for(i = 0; i < 3; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}
