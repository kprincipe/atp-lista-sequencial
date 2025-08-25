#include <stdio.h>

int main(void) {
    float largura, comprimento;
    float area_total = 0;

    printf("Digite a largura do lote (metros): ");
    scanf("%f", &largura);
    printf("Digite o comprimento do lote (metros): ");
    scanf("%f", &comprimento);

    area_total = largura * comprimento;

    printf("\n");
    printf("Area total: %f m2\n", area_total);
    
    return 0;
}
