#include <stdio.h>

int main() {
    int n, i;
    float soma = 0, media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;

    printf("Media aritmetica = %.2f\n", media);

    return 0;
}