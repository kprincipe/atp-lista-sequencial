#include <stdio.h>
#include <math.h>

int main(void) {
    // declaracao de variaveis
    float valor_constante, taxa, meses;
    float rendimento = 0;

    // entrada de dados
    printf("Digite o valor: ");
    scanf("%f", &valor_constante);
    
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Digite o tempo (meses): ");
    scanf("%f", &meses);

    // processamento dos dados
    taxa /= 100;
    rendimento = valor_constante * pow(1 + taxa, meses) - 1 / taxa;

    // saida dos dados processados
    printf("\n");
    printf("Rendimento: %.2f\n", rendimento);
    
    return 0;
}
