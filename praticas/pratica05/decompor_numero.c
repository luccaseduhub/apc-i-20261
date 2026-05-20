#include <stdio.h>

int main() {
    int numero, m, c, d, u;

    printf("Digite um número inteiro de 4 dígitos: ");
    scanf("%d", &numero);

    // Exemplo: 1234
    m = numero / 1000;          // 1
    c = (numero % 1000) / 100;  // 234 / 100 = 2
    d = (numero % 100) / 10;    // 34 / 10 = 3
    u = numero % 10;            // 4

    printf("\nDecomposição de %d:", numero);
    printf("\nMilhares: %d", m);
    printf("\nCentenas: %d", c);
    printf("\nDezenas:  %d", d);
    printf("\nUnidades: %d\n", u);

    return 0;
}