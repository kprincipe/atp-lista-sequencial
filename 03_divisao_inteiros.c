#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int x, y, divisao;

    // entrada de dados
    printf("Primeiro numero: ");
    scanf("%d", &x);
    
    printf("Segundo numero: ");
    scanf("%d", &y);

    // processamento de dados inseridos
    divisao = x / y;

    // saida de dados processados
    printf("Divisao dos numeros igual a %d\n", divisao);
    return 0;
}
