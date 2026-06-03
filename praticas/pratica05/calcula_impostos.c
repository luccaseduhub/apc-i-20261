#include <stdio.h>

#define ICMS 0.17
#define ISS  0.05
#define PIS  0.0165

int main() {
    float valor, v_icms, v_iss, v_pis, preco_final;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    // Cálculos individuais
    v_icms = valor * ICMS;
    v_iss = valor * ISS;
    v_pis = valor * PIS;

    // Cálculo do preço final conforme a fórmula: (1 + taxas) * valor
    preco_final = (1 + ICMS + ISS + PIS) * valor;

    printf("\n--- Detalhamento de Impostos ---");
    printf("\nValor ICMS (17%%):  R$ %.2f", v_icms);
    printf("\nValor ISS (5%%):    R$ %.2f", v_iss);
    printf("\nValor PIS (1.65%%): R$ %.2f", v_pis);
    printf("\n--------------------------------");
    printf("\nPreço Final:       R$ %.2f\n", preco_final);

    return 0;
}