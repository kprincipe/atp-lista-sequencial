#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float peso, altura; // quilograma e metro
    float imc = 0;

    // entrada de dados
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (metro): ");
    scanf("%f", &altura);

    // processamento dos dados inseridos
    imc = peso / (altura * altura);

    // saida de dados processados
    printf("\n");
    printf("Seu IMC: %.2f\n", imc);
    
    return 0;
}
