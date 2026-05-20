#include <stdio.h>

int main() {
    int x, aux;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("\nValor original: %d", x);

    // Pós-fixada: usa o valor e depois incrementa
    aux = x;
    printf("\nPós-incremento (x++): %d (depois disso, x vira %d)", aux++, aux);

    // Pré-fixada: incrementa e depois usa
    aux = x;
    printf("\nPré-incremento (++x): %d", ++aux);

    // Pós-fixada decremento
    aux = x;
    printf("\nPós-decremento (x--): %d (depois disso, x vira %d)", aux--, aux);

    // Pré-fixada decremento
    aux = x;
    printf("\nPré-decremento (--x): %d\n", --aux);

    return 0;
}