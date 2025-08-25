#include <stdio.h>

int main(void) {
    float valor_produto, valor_desconto = 0;
    const float DESCONTO = 9;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    valor_desconto = ((100 - DESCONTO)/100) * valor_produto;

    printf("\n");
    printf("Valor com desconto (%d%%): %.2f reais\n", (int) DESCONTO, valor_desconto);
}
