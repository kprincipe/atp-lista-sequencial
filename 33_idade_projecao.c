#include <stdio.h>

int main(void) {
    int dia, mes, ano, idade;
    
    int ano_agora = 2025;
    
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);
    
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);

    printf("Digite o ano de nascimento (Ex. 2002): ");
    scanf("%d", &ano);

    idade = ano_agora - ano;

    printf("\n");
    printf("Sua idade:         %d\n", idade);
    printf("Em 2028 voce tera: %d anos\n", idade + (2028 - ano_agora));
    
    return 0;
}
