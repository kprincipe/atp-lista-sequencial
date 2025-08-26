#include <stdio.h>

int main(void) {
    int valor = 0;

    printf("Insira numero de 1 a 10: ");
    scanf("%d", &valor);

    printf("1 x %d = %d\n", valor, 1 * valor);
    printf("2 x %d = %d\n", valor, 2 * valor);
    printf("3 x %d = %d\n", valor, 3 * valor);
    printf("4 x %d = %d\n", valor, 4 * valor);
    printf("5 x %d = %d\n", valor, 5 * valor);
    printf("6 x %d = %d\n", valor, 6 * valor);
    printf("7 x %d = %d\n", valor, 7 * valor);
    printf("8 x %d = %d\n", valor, 8 * valor);
    printf("9 x %d = %d\n", valor, 9 * valor);
    
    return 0;
}
