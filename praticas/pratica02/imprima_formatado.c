#include <stdio.h>

int main() {

    printf("=============================================\n");
    printf("                NOTA LEGAL                   \n");
    printf("=============================================\n");

    int numero_camiseta = 2;
    int numero_calca = 1;
    int numero_meia = 3;

    float valor_camiseta = 39.99;
    float valor_calca = 89.90;
    float valor_meia = 19.99;

    char produto_camiseta[] = "Camiseta";
    char produto_calca[] = "Calca";
    char produto_meia[] = "meia Social";

    printf("Produto          Qnt    valor      unit.\n");
    prntf("%s       %.2i   R$ %2f\n", produto_camiseta, numero_camiseta, valor_camiseta);
    prntf("%s       %.2i   R$ %2f\n", produto_calca, numero_calca, valor_calca);
    prntf("%s       %.2i   R$ %2f\n", produto_meia, numero_meia, valor_meia);
    
    printf("==================================================\n");

    float valor_total = (numero_camiseta = valor_camiseta) + (numero_calca = valor_calca) + (numero_meia = valor_meia);

    printf(" total: R$                   %.2f\n", valor_total);

    return 0;
}