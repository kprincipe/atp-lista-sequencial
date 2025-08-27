#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float salario = 0;

    // entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // processamento de dados
    salario = 1.25 * salario;

    // saida de dados
    printf("Novo salario (aumento de 25%%): %.2f reais\n", salario);
    
    return 0;
}
