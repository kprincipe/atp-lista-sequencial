#include <stdio.h>
#include <math.h>

int main(void) {
    int x = 0;
    
    printf("Insira um numero: ");
    
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }
    printf("\n");

    printf("Raiz quadrada      : %.2f\n", (double) sqrt(x));
    printf("Elevado ao quadrado: %d\n", x * x);
}
