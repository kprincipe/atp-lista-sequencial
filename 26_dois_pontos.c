#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float distancia, velocidade;
    float tempo = 0;

    // entrada de dados
    printf("Digite a distancia entre dois pontos (km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade (km/h): ");
    scanf("%f", &velocidade);

    // processamento dos dados
    tempo = distancia / velocidade;

    // saida dos dados processados
    printf("\n");
    printf("Tempo do percurso: %.2f horas\n", tempo);
    
    return 0;
}
