#include <stdio.h>

int soma(int x, int y) {
    return x + y;
}

int main(void) {
    int x, y;
    
    printf("Primeiro termo: ");
    if (scanf("%d", &x) != 1) {
        printf("Erro: termo deve ser numero inteiro\n");
        return 1;
    }
    
    printf("Segundo termo: ");
    if (scanf("%d", &y) != 1) {
        printf("\nErro: termo deve ser numero inteiro\n");
        return 1;
    }

    printf("Soma dos termos igual a %d\n", soma(x, y));
    return 0;
}
