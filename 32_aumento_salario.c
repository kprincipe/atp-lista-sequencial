#include <stdio.h>

int main(void) {
    float salario = 0;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    salario += 0.37 * salario;

    printf("\n");
    printf("Novo salario (+37%%): %.2f\n", salario);
    return 0;
}
