#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);
    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    printf("\n--- Resultados ---");
    printf("\nAdição: %.2f", num1 + num2);
    printf("\nSubtração: %.2f", num1 - num2);
    printf("\nMultiplicação: %.2f", num1 * num2);

    if (num2 != 0) {
        printf("\nDivisão: %.2f\n", num1 / num2);
    } else {
        printf("\nDivisão: Erro (divisão por zero não permitida).\n");
    }

    return 0;
}