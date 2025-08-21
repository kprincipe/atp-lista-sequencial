#include <stdio.h>

float calcular_media_pesos(float nota1, float peso1, float nota2, float peso2) {
    return ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
}

int main(void) {
    float nota1, peso1;
    float nota2, peso2;
    float nota_final = 0;

    printf("Insira primeira nota: ");
    if (scanf("%f", &nota1) != 1) {
        fprintf(stderr, "Erro: entrada deve ser um numero\n");
    }
    printf("    Peso: ");
    if (scanf("%f", &peso1) != 1) {
        fprintf(stderr, "Erro: entrada deve ser um numero\n");
    }
    
    printf("Insira segunda nota: ");
    if (scanf("%f", &nota2) != 1) {
        fprintf(stderr, "Erro: entrada deve ser um numero\n");
    }
    printf("    Peso: ");
    if (scanf("%f", &peso2) != 1) {
        fprintf(stderr, "Erro: entrada deve ser um numero\n");
    }

    nota_final = calcular_media_pesos(nota1, peso1, nota2, peso2);
    printf("Nota final = %f\n", nota_final);
}
