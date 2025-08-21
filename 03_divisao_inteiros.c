#include <stdio.h>

int divisao(int x, int y) {
    return x / y;
}

int main(void) {
    int x, y;

    printf("Primeiro numero: ");
    if (scanf("%d", &x) != 1) {
        printf("Erro: entrada deve ser numero inteiro\n");
        return 1;
    }
    
    printf("Segundo numero: ");
    if (scanf("%d", &y) != 1) {
        printf("\nErro: segundo numero deve ser numero inteiro diferente de zero\n");
        return 1;
    }

    if (!y) {
        printf("Erro: segundo numero deve ser diferente de zero\n");
        return 1;
    }

    printf("Divisao dos numeros igual a %d\n", divisao(x, y));
    return 0;
}
