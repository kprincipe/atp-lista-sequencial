#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float custo_espetaculo, valor_convite, lucro;
    float minimo_convites;

    // entrada de dados
    printf("Custo do espetaculo: ");
    scanf("%f", &custo_espetaculo);

    printf("Valor do convite: ");
    scanf("%f", &valor_convite);

    // processamento de dados inseridos
    lucro = custo_espetaculo * 1.20;
    minimo_convites = (int) (custo_espetaculo / valor_convite);;

    // saida de dados processados
    printf("\n");
    printf("Minimo de convites para cobrir custo     : %.2f\n", minimo_convites);
    printf("Convites vendidos para lucro de 20%%      : %.2f\n", lucro);
    return 0;
}
