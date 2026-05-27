#include <stdio.h>

int main() {
    float nota;

    printf("Digite uma nota (0 a 10): ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf("Nota inválida! Digite novamente: ");
        scanf("%f", &nota);
    }

    printf("Nota válida registrada: %.2f\n", nota);

    return 0;
}