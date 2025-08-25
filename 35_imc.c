#include <stdio.h>

int main(void) {
    float peso, altura; // quilograma e metro
    float imc = 0;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (metro): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\n");
    printf("Seu IMC: %.2f\n", imc);
    
    return 0;
}
