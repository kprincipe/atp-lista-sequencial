#include <stdio.h>

int main(void) {
    float celcius, farenheit = 0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celcius);

    farenheit = ((9 * celcius) + 160) / 5;
    
    printf("\n");
    printf("Temperatura em Farenheit: %.2f\n", farenheit);
    return 0;
}
