#include <stdio.h>

#define ALIQUOTA 5 // valor percentual

int main(void) {
    float imposto, salario = 0;

    printf("Digite o salario: ");
    if (scanf("%f", &salario) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }

    imposto = (ALIQUOTA * salario) / 100;
    
    printf("Imposto de renda a ser pago: %.2f reais\n", imposto);
    
    return 0;
}
