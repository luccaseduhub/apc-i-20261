#include <stdio.h>

int main() {
    int dia;

    printf("Digite o dia da semana (1-7): ");
    scanf("%d", &dia);

    if (dia == 1 || dia == 7) {
        printf("Final de semana.\n");
    } else if (dia >= 2 && dia <= 6) {
        printf("Dia útil.\n");
    } else {
        printf("Número inválido! Digite um valor entre 1 e 7.\n");
    }

    return 0;
}