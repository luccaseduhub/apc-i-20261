#include <stdio.h>

int main() {
    int vetor[10];
    int numero, i, encontrado = 0;

    printf("Digite 10 numeros inteiros:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero a localizar: ");
    scanf("%d", &numero);

    for(i = 0; i < 10; i++) {
        if(vetor[i] == numero) {
            printf("Numero encontrado na posicao %d.\n", i);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}