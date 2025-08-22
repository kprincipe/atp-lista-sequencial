#include <stdio.h>

int main(void) {
    float salario = 0;

    printf("Digite o salario: ");
    if (scanf("%f", &salario) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }

    salario += (25 * salario) / 100;
    
    printf("Novo salario (aumento de 25%): %.2f reais\n", salario);
    
    return 0;
}
