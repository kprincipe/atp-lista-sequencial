#include <stdio.h>

int main(void) {
    float custo_fabrica;
    float imposto = 45, taxa_distribuidor = 28; // em porcentagem
    float custo_consumidor = 0;

    printf("Custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    custo_fabrica += ((1 + imposto/100) * custo_fabrica);
    custo_consumidor += ((1 + taxa_distribuidor/100) * custo_fabrica);

    printf("\n");
    printf("Valor de venda: %.2f\n", custo_consumidor);
    return 0;
}
