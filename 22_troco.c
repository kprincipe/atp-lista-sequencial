#include <stdio.h>

int main(void) {
    float valor1, valor2, valor3, valor_total;
    float pagamento;
    float troco = 0;

    printf("Digite valor do produto 1: ");
    scanf("%f", &valor1);

    printf("Digite valor do produto 2: ");
    scanf("%f", &valor2);

    printf("Digite valor do produto 3: ");
    scanf("%f", &valor3);

    valor_total = valor1 + valor2 + valor3;

    printf("\n");
    printf("Valor do pagamento: ");
    scanf("%f", &pagamento);

    if (pagamento < valor_total) {
        printf("------------------------\n");
        printf("Faltam %.2f reais a pagar\n", valor_total - pagamento);
        printf("------------------------\n");
        return 1;
    }
    
    printf("------------------------\n");
    printf("Troco: %.2f\n", pagamento - valor_total);
    printf("------------------------\n");
    
    return 0;
}
