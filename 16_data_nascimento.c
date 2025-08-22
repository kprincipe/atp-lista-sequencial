#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int receber_numero(int *valor) {
    if (scanf("%d", valor) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
        exit(1);
    }
    return *valor;
}

int main(void) {
    int dia, mes, ano;
    
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    
    long int ano_agora = tm->tm_year + 1900;
    
    printf("Digite o dia de nascimento: ");
    if (receber_numero(&dia)  > 31) {
        fprintf(stderr, "Erro: dia nao pode ser maior que 31\n");
        return 1;
    }
    
    printf("Digite o mes de nascimento: ");
    if (receber_numero(&mes) > 12) {
        fprintf(stderr, "Erro: mes nao pode ser maior que 12");
        return 1;
    }

    printf("Digite o ano de nascimento (Ex. 2002): ");
    receber_numero(&ano);

    int idade = ano_agora - ano;

    printf("\n");
    printf("Sua idade: %d\n", idade);
    printf("Idade em semanas: %d\n", idade * 52);
    
    return 0;
}
