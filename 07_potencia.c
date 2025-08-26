#include <stdio.h>
#include <math.h>

int main(void) {
    // declaracao de variaveis
    int base, expoente, potencia;

    // entrada dos dados
    printf("Insira a base: ");
    scanf("%d", &base);
    
    printf("Insira o expoente: ");
    scanf("%d", &expoente);

    // processamento dos dados
    potencia = pow(base, expoente);

    // saida da informacao processada
    printf("Potencia: %d\n", potencia);
    return 0;
}
