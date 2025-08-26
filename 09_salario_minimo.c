#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float salario, salario_minimo, qtd_salarios_minimos;

    // entrada de dados
    printf("Insira seu salario: ");
    scanf("%f", &salario);
    
    printf("Insira o salario minimo vigente: ");
    scanf("%f", &salario_minimo);

    // processamento dos dados inseridos
    qtd_salarios_minimos = salario / salario_minimo;

    // saida de dados processados
    printf("\n");
    printf("Voce ganha %f salarios minimos\n", qtd_salarios_minimos);
    
    return 0;
}
