#include <stdio.h>

int main(void) {
    float salario, salario_minimo, qtd_salarios_minimos;

    printf("Insira seu salario: ");
    if (scanf("%f", &salario) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
        return 1;
    }

    printf("Insira o salario minimo vigente: ");
    if (scanf("%f", &salario_minimo) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
        return 1;
    }

    if (salario_minimo == 0) {
        fprintf(stderr, "Erro: salario minimo deve ser nao nulo\n");
        return 1;
    }

    qtd_salarios_minimos = salario / salario_minimo;

    printf("\n");
    printf("Voce ganha %f salarios minimos\n", qtd_salarios_minimos);
    
    return 0;
}
