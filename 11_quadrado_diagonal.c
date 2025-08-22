#include <stdio.h>

int main(void) {
    float diagonal;
    
    printf("Digite a diagonal do quadrado: ");
    if (scanf("%f", &diagonal) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
        return 1;
    }

    printf("Area do quadrado: %.2f\n", diagonal * diagonal / 2);
    return 0;
}
