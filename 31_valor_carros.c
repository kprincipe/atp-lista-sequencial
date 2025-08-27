#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float custo_fabrica, custo_consumidor, custo_distribuidor;

    // entrada de dados
    printf("Custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    // processamento de dados inseridos
    custo_distribuidor = 1.45 * custo_fabrica;
    custo_consumidor = 1.28 * custo_distribuidor;

    // saida de dados processadosq
    printf("\n");
    printf("Valor de venda: %.2f\n", custo_consumidor);
    return 0;
}
