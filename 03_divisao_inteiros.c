#include <stdio.h>

int main(void) {
    int x, y;

    printf("Primeiro numero: ");
    scanf("%d", &x);
    
    printf("Segundo numero: ");
    scanf("%d", &y);
    
    printf("Divisao dos numeros igual a %d\n", x / y);
    return 0;
}
