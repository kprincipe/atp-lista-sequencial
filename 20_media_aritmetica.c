#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float valor1, valor2, media, somatorio;

    // entrada de dados
    printf("Digite o valor 1: ");
    scanf("%f", &valor1);
    
    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    // processamento de dados inseridos
    media = (valor1 + valor2) / 2;
    somatorio = valor1 + valor2;

    // saida de dados processados
    printf("\n");
    printf("Media aritmetica: %.2f\n", media);
    printf("Somatorio       : %.2f\n", somatorio);
    
    return 0;
}
