#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    unsigned int apartamentos;
    float valor_diaria, arrecadacao, valor_promocional, valor_parcial, valor_nao_arrecadado;

    // entrada de dados
    printf("Apartamentos disponiveis: ");
    scanf("%d", &apartamentos);

    printf("Valor da diaria: ");
    scanf("%f", &valor_diaria);

    // processamento de dados inseridos
    valor_promocional = valor_diaria * 0.75;
    arrecadacao = valor_promocional * apartamentos;
    valor_parcial = valor_promocional * (apartamentos * 0.7);
    valor_nao_arrecadado = (valor_diaria * apartamentos) - arrecadacao;
    
    // processamento/saida de dados processados
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("Valor promocional........................ %.2f\n", valor_promocional);
    printf("Arrecadacao com ocupacao total:.......... %.2f\n", arrecadacao);
    printf("Arrecadacao com 70%% ocupado:............. %.2f\n", valor_parcial);
    printf("Valor nao arrecadado com ocupacao total:. %.2f\n", valor_nao_arrecadado);
    printf("--------------------------------------------------\n");
    return 0;
}
