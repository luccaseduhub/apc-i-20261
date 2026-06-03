#include <stdio.h>

int main (){
    int operador1;
    int operador2;

    printf("Entre com um numero inteiro: ");
    scanf("%i", &operador1);
    while(getchar() != '\n');
    
    printf("Entre com um numero inteiro: ");
    scanf("%i", &operador2);
    while(getchar() != '\n');

    // 2. Processamento
    int soma = operador1 + operador2;
    int subtracao = oprador1 - operador2;
    int mutiplicacao = operador1 * operador2;
    int divisao = operador1 / operador2;

    // 3. Saida

    printf("%i + %i = %i\n", operador1, operador2, soma);
    printf("%i - %i = %i\n", operador1, operador2, subtracao);
    printf("%i * %i = %i\n", operador1, operador2, mutiplicacao);
    printf("%i / %i = %f\n", operador1, operador2, divisao);
    divisao = (operador1 * 1.0f) / operador2;
    printf("%i / %i = %f\n")

    return 0;
}