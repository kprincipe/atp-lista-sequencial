#include <stdio.h>

int main(void) {
    float distancia, velocidade;
    float tempo = 0;

    printf("Digite a distancia entre dois pontos (km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade (km/h): ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;
    
    printf("\n");
    printf("Tempo do percurso: %.2f horas\n", tempo);
    
    return 0;
}
