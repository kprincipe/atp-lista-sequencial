#include <stdio.h>

// valor em real por metro cubico de agua
#define VALOR_MC 45

int main(void) {
    float largura, comprimento, profundidade;
    float volume_piscina = 0;
    float valor_total = 0;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    
    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite a profundidade: ");
    scanf("%f", &profundidade);

    volume_piscina = comprimento * largura * profundidade;
    valor_total = volume_piscina * VALOR_MC;

    printf("\n");
    printf("Valor total da obra: %.2f reais\n", valor_total);
    
    return 0;
}
