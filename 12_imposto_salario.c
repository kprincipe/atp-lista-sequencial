#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float imposto, salario = 0;
    const float ALIQUOTA = 5;

    // entrada de dados
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // processamento da dados
    imposto = (ALIQUOTA * salario) / 100;

    // saida de dados processados
    printf("Imposto de renda a ser pago: %.2f reais\n", imposto);
    
    return 0;
}
