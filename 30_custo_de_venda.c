#include <stdio.h>

int main(void) {
    float preco_custo, valor_venda = 0;
    float acrescimo; // em porcentagem

    printf("Preco de custo: ");
    scanf("%f", &preco_custo);

    printf("Porcentagem acrescimo: ");
    scanf("%f", &acrescimo);

    valor_venda = (1 + (acrescimo/100)) * preco_custo;

    printf("\n");
    printf("Valor de venda: %.2f\n", valor_venda);
    return 0;
}
