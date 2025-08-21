#include <stdio.h>

int main(void) {
    short int valor = 0;

    printf("Insira numero de 1 a 10: ");
    if (scanf("%d", &valor) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
        return 1;
    }

    if (valor > 10 || valor < 1) {
        fprintf(stderr, "Erro: entrada deve ser numero de 1 a 9\n");
        return 1;
    }
    
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", i, valor, i * valor);
    }
    return 0;
}
