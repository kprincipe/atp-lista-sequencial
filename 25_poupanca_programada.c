#include <stdio.h>

float potencia(float a, int n) {
    float p = 1;
    for (int i = 0; i < n; ++i)
        p *= a;
    
    return p;
}

int main(void) {
    float valor_constante, taxa, meses;
    float rendimento = 0;

    printf("Digite o valor: ");
    scanf("%f", &valor_constante);
    
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Digite o tempo (meses): ");
    scanf("%f", &meses);

    rendimento = (valor_constante * potencia((1 + taxa), meses)) / taxa;
    
    printf("\n");
    printf("Rendimento: %.2f\n", rendimento);
    
    return 0;
}
