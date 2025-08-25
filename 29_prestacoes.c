#include <stdio.h>

int main(void) {
    float valor_compra, prestacao = 0;

    printf("Valor de compra do produto: ");
    scanf("%f", &valor_compra);

    prestacao = valor_compra / 5;
    
    printf("\n");
    printf("Parcelamento: 5x %.2f reais\n", prestacao);
    return 0;
}
