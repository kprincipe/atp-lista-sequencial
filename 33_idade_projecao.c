#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int dia, mes, ano, idade;
    int ano_agora = 2025;
    int idade_em_2028;

    // entrada de dados
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);
    
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);

    printf("Digite o ano de nascimento (Ex. 2002): ");
    scanf("%d", &ano);

    // processamento de dados inseridos
    idade = ano_agora - ano;
    idade_em_2028 = idade + (2028 - ano_agora);

    // saida de dados processados
    printf("\n");
    printf("Sua idade:         %d\n", idade);
    printf("Em 2028 voce tera: %d anos\n", idade_em_2028);
    
    return 0;
}
