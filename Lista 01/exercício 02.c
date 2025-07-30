#include <stdio.h>

int compara(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

int main() {
    char palavra1[20], palavra2[20], palavra3[20];

  
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

  
    if (compara(palavra1, "vertebrado")) {
        if (compara(palavra2, "ave")) {
            if (compara(palavra3, "carnivoro")
