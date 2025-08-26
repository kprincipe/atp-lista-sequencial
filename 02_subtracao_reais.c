#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float x, y, diferenca = 0;

    // entrada de dados
    printf("Primeiro numero: ");
    scanf("%f", &x);
    
    printf("Segundo numero: ");
    scanf("%f", &y);

    // processamento de dados inseridos
    diferenca = x - y;

    // saida de dados processados
    printf("Subtracao dos numeros igual a %f\n", diferenca);
    return 0;
}
