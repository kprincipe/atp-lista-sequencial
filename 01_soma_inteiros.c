#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int x, y;

    // entrada de dados
    printf("Primeiro termo: ");
    scanf("%d", &x);
    
    printf("Segundo termo: ");
    scanf("%d", &y);

    // saida de dados processados
    printf("Soma dos termos igual a %d\n", x + y);
    return 0;
}
