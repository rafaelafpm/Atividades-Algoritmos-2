void imprimir_data_extenso(int dia, int mes, int ano) {
    char *nomes_meses[] = {
        "", "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    if (mes < 1 || mes > 12) {
        printf("Mês inválido\n");
        return;
    }

    printf("%d de %s de %d\n", dia, nomes_meses[mes], ano);
}

int main() {
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    imprimir_data_extenso(dia, mes, ano);

    return 0;
}
