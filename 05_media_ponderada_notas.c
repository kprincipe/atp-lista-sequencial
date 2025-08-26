#include <stdio.h>

int main(void) {
    float nota1, peso1;
    float nota2, peso2;
    float nota_final = 0;

    printf("Insira primeira nota: ");
    scanf("%f", &nota1);
    
    printf("    Peso: ");
    scanf("%f", &peso1);
    
    printf("Insira segunda nota: ");
    scanf("%f", &nota2);
    
    printf("    Peso: ");
    scanf("%f", &peso2);
    
    nota_final = (nota1 * peso1) + (nota2 * peso2) / peso1 + peso2;

    printf("\n");
    printf("Nota final = %.2f\n", nota_final);
    return 0;
}
