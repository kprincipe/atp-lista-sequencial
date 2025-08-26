#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int a = 2, b = 5, c = 7;
    int intermediario;

    // entrada de dados
    printf("Valores iniciais:\n");
    printf("    A: %d\n", a);
    printf("    B: %d\n", b);
    printf("    C: %d\n", c);
    printf("\n");

    // processamento dos dados
    intermediario = c;
    c = a;
    a = b;
    b = intermediario;

    // saida de dados processados
    printf("Valores finais:\n");
    printf("    A: %d\n", a);
    printf("    B: %d\n", b);
    printf("    C: %d\n", c);
    return 0;
}
