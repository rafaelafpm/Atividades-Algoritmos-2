#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    if (A == 0) {
        return 0;
    }

    float delta = B * B - 4 * A * C;

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        *X2 = *X1;
        return 1;
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main() {
    float A, B, C, x1, x2;
    int resultado;

    scanf("%f %f %f", &A, &B, &C);

    resultado = raizes(A, B, C, &x1, &x2);

    if (resultado == 0) {
        printf("Sem raiz real.\n");
    } else if (resultado == 1) {
        printf("Raiz: %.2f\n", x1);
    } else {
        printf("Raízes: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
