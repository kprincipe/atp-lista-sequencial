#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float peso_quilo;
    float peso_grama;
    float novo_peso;

    // entrada de dados
    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso_quilo);

    // processamento de dados inseridos
    peso_grama = peso_quilo * 1000;
    novo_peso = (peso_quilo * 1.05) * 1000;

    // saida de dados processados
    printf("\n");
    printf("Peso em gramas: %.2fg\n", peso_grama);
    printf("Novo peso (+5%% do peso): %.2fg\n", novo_peso); // adiciona 5% sobre o valor do peso
    
    return 0;
}
