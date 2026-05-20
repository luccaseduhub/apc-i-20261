#include <stdio.h>

int main() {
    int opcao;

    printf("--- MENU DO JOGO ---\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuação\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando um novo jogo...\n");
            break;
        case 2:
            printf("Carregando progresso salvo...\n");
            break;
        case 3:
            printf("Sua pontuação atual é: 1500 pontos.\n");
            break;
        case 4:
            printf("Saindo do jogo. Até logo!\n");
            break;
        default:
            printf("Erro: Opção inválida!\n");
    }

    return 0;
}