#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float valor1, valor2, valor3, valor_total;
    float pagamento;
    float troco = 0;

    // entrada de dados
    printf("Digite valor do produto 1: ");
    scanf("%f", &valor1);

    printf("Digite valor do produto 2: ");
    scanf("%f", &valor2);

    printf("Digite valor do produto 3: ");
    scanf("%f", &valor3);

    printf("\n");
    printf("Valor do pagamento: ");
    scanf("%f", &pagamento);
    
    // processamento
    valor_total = valor1 + valor2 + valor3;
    troco = pagamento - valor_total;

    // saida de dados processados
    printf("------------------------\n");
    printf("Troco: %.2f\n", troco);
    printf("------------------------\n");
    
    return 0;
}
