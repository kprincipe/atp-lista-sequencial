#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float salario = 0;

    // entrada de dados
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    // processamento de dados inseridos
    salario = 1.37 * salario;

    // saida de dados processados
    printf("\n");
    printf("Novo salario (+37%%): %.2f\n", salario);
    return 0;
}
