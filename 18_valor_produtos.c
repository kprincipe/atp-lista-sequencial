#include <stdio.h>
#include <stdlib.h>

int receber_numero(float *valor) {
    if (scanf("%f", valor) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
        exit(1);
    }
    return *valor;
}

int main(void) {
    // declaracao de variaveis
    float quantidade1, valor1;
    float quantidade2, valor2;
    float quantidade3, valor3;
    float valor_total = 0;

    // entrada de dados do usuario
    printf("Digite a quantidade do produto 1: ");
    receber_numero(&quantidade1);
    printf("    Valor: ");
    receber_numero(&valor1);

    printf("Digite a quantidade do produto 2: ");
    receber_numero(&quantidade2);
    printf("    Valor: ");
    receber_numero(&valor2);

    printf("Digite a quantidade do produto 3: ");
    receber_numero(&quantidade3);
    printf("    Valor: ");
    receber_numero(&valor3);

    // processamento de dados inseridos
    valor_total = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);

    // saida de dados processados
    printf("\n");
    printf("Valor total: %.2f\n", valor_total);
    
    return 0;
}
