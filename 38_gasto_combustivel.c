#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    const float CONSUMO = 12;                               // quilometros por litro (km/l)
    float tempo_gasto, velocidade_media, combustivel_gasto; // horas, km/h e litros
    float distancia = 0;                                    // quilometros

    // entrada de dados
    printf("Insira a velocidade media: ");
    scanf("%f", &velocidade_media);
    printf("Insira o tempo gasto na viagem: ");
    scanf("%f", &tempo_gasto);

    // processamento de dados inseridos
    distancia = tempo_gasto * velocidade_media;
    combustivel_gasto = distancia / CONSUMO;

    // saida de dados processados
    printf("\n");
    printf("Distancia percorrida: %.2fkm\n", distancia);
    printf("Combustivel gasto:    %.2fL\n", combustivel_gasto);
    return 0;
}
