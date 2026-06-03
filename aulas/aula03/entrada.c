#include <stdio.h>

int main() {
    /*entradas de dados*/

    char tecla_pressionada;

    printf("Pressioone uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while(getchar() != '\n'); // limpar o buffer

    printf("Voce pressionou a tecla %c\n", tecla_pressionada);

    int idade;

    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n'); // limpar o buffer

    printf(" Voce tem %i anos\n", idade);

    float preco;
    printf("informe o preco da passagem: ");
    scanf("%f",&preco);
    while(getchar() != '\n'); // limpar o buffer

    printf("o preco da passagem eh %.2f \n", preco);

    return 0;
}