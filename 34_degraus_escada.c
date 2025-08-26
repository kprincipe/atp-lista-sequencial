#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float altura_degrau; // em centimetros
    float altura_escada; // em metros
    float quantidade_degraus = 0;

    // entrada de dados
    printf("Digite a altura do degrau (centimetros): ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura da escada (metros): ");
    scanf("%f", &altura_escada);
    
    // processamento de dados inseridos
    altura_degrau = altura_degrau / 100; // conversao de centimetros para metros
    quantidade_degraus = altura_escada / altura_degrau;

    // saida de dados
    printf("\n");
    printf("Voce precisara subir %.2f degraus\n", quantidade_degraus);
    
    return 0;
}
