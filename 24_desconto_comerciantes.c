#include <stdio.h>

int main(void) {
    // declaracao de variaves
    float valor_produto, valor_desconto = 0;
    const float DESCONTO = 9;

    // entrada de dados
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    // processamento de dados
    valor_desconto = 0.91 * valor_produto;

    // saida de dados
    printf("\n");
    printf("Valor com desconto (%.2f%%): %.2f reais\n", DESCONTO, valor_desconto);
}
