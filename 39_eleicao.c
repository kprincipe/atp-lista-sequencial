#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float total_eleitores;
    float votos_cand1, votos_cand2;

    // entrada de dados
    printf("Digite o numero total de eleitores: ");
    scanf("%f", &total_eleitores);

    printf("Digite o numero de votos (candidato 1): ");
    scanf("%f", &votos_cand1);
    
    printf("Digite o numero de votos (candidato 2): ");
    scanf("%f", &votos_cand2);

    // processamento de dados inseridos
    printf("--------------------------------\n");
    printf("Percentual candidato 1: %.2f%%\n", (votos_cand1 / total_eleitores) * 100);
    printf("Percentual candidato 2: %.2f%%\n", (votos_cand2 / total_eleitores) * 100);
    printf("Total de votos nulos  : %.2f\n", total_eleitores - (votos_cand1 + votos_cand2));
    printf("--------------------------------\n");

    // saida de dados processados
    return 0;
}
