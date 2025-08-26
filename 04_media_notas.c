#include <stdio.h>

int main(void) {
    // declaracao de variaveis para notas e nota final
    float nota1, nota2, nota3, nota_final = 0;

    // entrada de dados das notas
    printf("Digite nota 1: ");
    scanf("%f", &nota1);
    
    printf("Digite nota 2: ");
    scanf("%f", &nota2);
    
    printf("Digite nota 3: ");
    scanf("%f", &nota3);

    // calculo da media aritmetica
    nota_final = (nota1 + nota2 + nota3)/3;

    printf("\n");

    printf("Nota final: %.2f\n", nota_final);
    return 0;
}
