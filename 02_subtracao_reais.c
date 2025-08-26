#include <stdio.h>

int main(void) {
    float x, y;

    printf("Primeiro numero: ");
    scanf("%f", &x);
    
    printf("Segundo numero: ");
    scanf("%f", &y);
    
    printf("Subtracao dos numeros igual a %f\n", x - y);
    return 0;
}
