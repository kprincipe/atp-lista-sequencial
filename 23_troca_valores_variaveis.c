#include <stdio.h>

int main(void) {
    int a = 2, b = 5, c = 7;
    int intermediario;
    
    printf("Valores iniciais:\n");
    printf("    A: %d\n", a);
    printf("    B: %d\n", b);
    printf("    C: %d\n", c);
    printf("\n");

    intermediario = c;
    c = a;
    a = b;
    b = intermediario;
    
    printf("Valores finais:\n");
    printf("    A: %d\n", a);
    printf("    B: %d\n", b);
    printf("    C: %d\n", c);
    return 0;
}
