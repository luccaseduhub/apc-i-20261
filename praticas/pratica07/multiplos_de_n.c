#include <stdio.h>

int main() {
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um número maior que zero.\n");
    } else {
        printf("Múltiplos de %d no intervalo de 1 a 100:\n", n);
        for (int i = 1; i <= 100; i++) {
            if (i % n == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}