#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float largura, comprimento;
    float area_total = 0;

    // entrada de dados
    printf("Digite a largura do lote (metros): ");
    scanf("%f", &largura);
    printf("Digite o comprimento do lote (metros): ");
    scanf("%f", &comprimento);

    // processamento de dados
    area_total = largura * comprimento;

    // saida de dados
    printf("\n");
    printf("Area total: %.2f m2\n", area_total);
    
    return 0;
}
