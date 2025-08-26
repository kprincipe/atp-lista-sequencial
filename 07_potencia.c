#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int base, expoente;

    // entrada dos dados
    printf("Insira a base: ");
    scanf("%d", &base);
    
    printf("Insira o expoente: ");
    scanf("%d", &expoente);

    // processamento dos dados
    int pow(int p, int e) {
        return e <= 0 ? 1 : p * pow(p, e - 1);
    }
    potencia = pow(base, expoente);

    // saida da informacao processada
    printf("Potencia: %d\n", potencia);
    return 0;
}
