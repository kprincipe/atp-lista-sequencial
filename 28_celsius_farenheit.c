#include <stdio.h>

int main(void) {
    // declaracao das variaveis
    float celcius, farenheit = 0;

    // entrada dos dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celcius);

    // processamento dos dados inseridos
    farenheit = ((9 * celcius) + 160) / 5;

    // saida de dados processados
    printf("\n");
    printf("Temperatura em Farenheit: %.2f\n", farenheit);
    return 0;
}
