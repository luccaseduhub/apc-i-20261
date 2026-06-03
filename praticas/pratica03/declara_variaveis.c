#include <stdio.h>

int main () {

    char nome[100]:
    char sexo[20];
    int idade;
    float altura;
    float peso;

    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);

    printf("Digite seu sexo (M/F): "); 
    fgets(sexo, 20, stdin);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite sua altura: "); 
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Nome: %s\n", nome);
    if (sexo[0] == 'M' || sexo[0]== 'm') {
    printf("Sexo: Masculino\n");
    } else if (sexo[0] == 'F' || sexo[0] = 'f') {
    printf("Sexo: Feminino\n");
    } else {
    printf("Sexo: Outro\n");
    }

    printf("Idade: Xi\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.3f\n", peso);

    return 0;
}