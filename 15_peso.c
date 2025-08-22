#include <stdio.h>

int main(void) {
    float peso_quilo;
    unsigned int peso_grama;
    unsigned int novo_peso;
    
    printf("Digite o seu peso (kg): ");
    if (scanf("%f", &peso_quilo) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }

    peso_grama = peso_quilo * 1000;
    novo_peso = (peso_quilo * 1.05) * 1000;

    printf("\n");
    printf("Peso em gramas: %d\n", peso_grama);
    printf("Novo peso (+5%% do peso): %d\n", novo_peso); // adiciona 5% sobre o valor do peso
    
    return 0;
}
