#include <stdio.h>
#include <math.h>

int main(void) {
    // declaracao de variavel
    double x = 0, raiz, quadrado;

    // entrada de dados
    printf("Insira um numero: ");
    scanf("%lf", &x);

    // processamento
    raiz = sqrt(x);
    quadrado = x * x;

    // saida de informacao
    printf("\n");
    printf("Raiz quadrada      : %.2f\n", raiz);
    printf("Quadrado do numero : %.2f\n", quadrado);
}
