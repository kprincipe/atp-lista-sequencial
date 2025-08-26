#include <stdio.h>
#include <math.h>

int main(void) {
    // declaracao de variavel
    int x = 0;

    // entrada de dados
    printf("Insira um numero: ");
    scanf("%d", &x);

    // saida de informacao
    printf("\n");
    printf("Raiz quadrada      : %.2f\n", (double) sqrt(x));
    printf("Quadrado do numero : %d\n", x * x);
}
