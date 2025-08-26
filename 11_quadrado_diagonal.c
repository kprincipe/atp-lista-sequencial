#include <stdio.h>

int main(void) {
    // declaracao de variavel
    float diagonal, area = 0;

    // entrada de dados
    printf("Digite a diagonal do quadrado: ");
    scanf("%f", &diagonal);

    // processamento de dados inseridos
    area = diagonal * diagonal / 2;
    
    // saida de dados processados
    printf("Area do quadrado: %.2f\n", area);
    return 0;
}
