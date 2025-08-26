#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float largura, comprimento, profundidade;
    float volume_piscina = 0;
    float valor_total = 0;

    // valor em real por metro cubico de agua
    const float VALOR_MC = 45;

    // entrada de dados
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    
    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite a profundidade: ");
    scanf("%f", &profundidade);

    // processamento de dados
    volume_piscina = comprimento * largura * profundidade;
    valor_total = volume_piscina * VALOR_MC;

    // saida de dados
    printf("\n");
    printf("Valor total da obra: %.2f reais\n", valor_total);
    
    return 0;
}
