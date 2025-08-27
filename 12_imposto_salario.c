#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float imposto, salario = 0;
    const float ALIQUOTA = 5; // porcentagem

    // entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // processamento da dados
    imposto = (ALIQUOTA/100) * salario;

    // saida de dados processados
    printf("Imposto de renda a ser pago: %.2f reais\n", imposto);
    
    return 0;
}
