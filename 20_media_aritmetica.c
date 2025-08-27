#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int valor1, valor2, somatorio, resto;
    float media;

    // entrada de dados
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    // processamento de dados inseridos
    media = (float) (valor1 + valor2) / 2;
    somatorio = valor1 + valor2;
    resto = valor1 % valor2;

    // saida de dados processados
    printf("\n");
    printf("Media aritmetica: %.2f\n", media);
    printf("Somatorio       : %d\n", somatorio);
    printf("Resto           : %d\n", resto);
    
    return 0;
}
