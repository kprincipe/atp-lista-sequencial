#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int dia, mes, ano;
    int ano_agora = 2025;
    int idade = 0, idade_semanas = 0;

    // entrada de dados do usuario
    printf("Digite o dia de nascimento (Ex. 26): ");
    scanf("%d", &dia);
    
    printf("Digite o mes de nascimento (Ex. 05): ");
    scanf("%d", &mes);

    printf("Digite o ano de nascimento (Ex. 2002): ");
    scanf("%d", &ano);

    // processamento de dados inseridos
    idade = ano_agora - ano;
    idade_semanas = idade * 52;

    // saida de dados processados
    printf("\n");
    printf("Sua idade: %d\n", idade);
    printf("Idade em semanas: %d\n", idade_semanas);
    
    return 0;
}
