#include <stdio.h>

int main(void) {
    char nome1[256];
    char nome2[256];
    char nome3[256];

    printf("Escreva o primeiro nome: ");
    fgets(nome1, 256, stdin);

    printf("Escreva o segundo nome : ");
    fgets(nome2, 256, stdin);

    printf("Escreva o terceiro nome : ");
    fgets(nome3, 256, stdin);

    printf("\n");
    printf(": %s", nome1);
    printf(": %s", nome2);
    printf(": %s", nome3);
    return 0;
}
