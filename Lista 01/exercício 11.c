#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

  
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("String invertida: ");
    for(i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    printf("\n");

    return 0;
}
