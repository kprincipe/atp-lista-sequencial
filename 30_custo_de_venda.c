#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float preco_custo, valor_venda = 0;
    float acrescimo; // em porcentagem

    // entrada de dados
    printf("Preco de custo: ");
    scanf("%f", &preco_custo);

    printf("Porcentagem acrescimo: ");
    scanf("%f", &acrescimo);

    // processamento dos dados inseridos
    acrescimo /= 100;
    valor_venda = (1 + acrescimo) * preco_custo;

    // saida de dados processados
    printf("\n");
    printf("Valor de venda: %.2f\n", valor_venda);
    return 0;
}
