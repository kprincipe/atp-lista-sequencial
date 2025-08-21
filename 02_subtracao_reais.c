#include <stdio.h>

float subt(float x, float y) {
    return x - y;
}

int main(void) {
    float x, y;

    printf("Primeiro numero: ");
    if (scanf("%f", &x) != 1) {
        printf("Erro: entrada deve ser um numero\n");
        return 1;
    }
    
    printf("Segundo numero: ");
    if (scanf("%f", &y) != 1) {
        printf("\nErro: entrada deve ser um numero\n");
        return 1;
    }

    printf("Subtracao dos numeros igual a %f\n", subt(x, y));
    return 0;
}
