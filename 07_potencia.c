#include <stdio.h>

int main(void) {
    float base, expoente;
    float potencia = 1;

    printf("Insira a base: ");
    if (scanf("%f", &base) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }
    
    printf("Insira o expoente: ");
    if (scanf("%f", &expoente) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }

    for (int i = 0; i < expoente; ++i) potencia *= base;

    printf("Potencia: %f\n", potencia);
    return 0;
}
