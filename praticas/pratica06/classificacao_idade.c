#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade inválida.\n");
    } else if (idade <= 12) {
        printf("Classificação: Criança\n");
    } else if (idade <= 17) {
        printf("Classificação: Adolescente\n");
    } else if (idade <= 64) {
        printf("Classificação: Adulto\n");
    } else {
        printf("Classificação: Idoso\n");
    }

    return 0;
}