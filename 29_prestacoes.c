#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float valor_compra, prestacao = 0;

    // entrada de dados
    printf("Valor de compra do produto: ");
    scanf("%f", &valor_compra);

    // processamento de dados inseridos
    prestacao = valor_compra / 5;

    // saida dos dados processados
    printf("\n");
    printf("Parcelamento: 5x %.2f reais\n", prestacao);
    return 0;
}
