#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    char nome1[64], meio1[64], sobrenome1[64];
    char nome2[64], meio2[64], sobrenome2[64];
    char nome3[64], meio3[64], sobrenome3[64];

    // entrada de dados
    printf("Escreva o primeiro nome: ");
    scanf("%s", nome1);
    printf("        Nome do meio: ");
    scanf("%s", meio1);
    printf("        Sobrenome   : ");
    scanf("%s", sobrenome1);

    printf("\n");

    printf("Escreva o primeiro nome: ");
    scanf("%s", nome2);
    printf("        Nome do meio: ");
    scanf("%s", meio2);
    printf("        Sobrenome   : ");
    scanf("%s", sobrenome2);

    printf("\n");

    printf("Escreva o primeiro nome: ");
    scanf("%s", nome3);
    printf("        Nome do meio: ");
    scanf("%s", meio3);
    printf("        Sobrenome   : ");
    scanf("%s", sobrenome3);
    
    printf("\n");

    // saida de dados
    printf("--------------------------------\n");
    printf("%s %s\n", nome1, sobrenome1);
    printf("%s %s\n", nome2, sobrenome2);
    printf("%s %s\n", nome3, sobrenome3);
    printf("--------------------------------\n");    
    return 0;
}
