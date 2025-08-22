#include <stdio.h>

int main(void) {
    char nome1[256];
    char nome2[256];

    printf("Escreva o primeiro nome: ");
    fgets(nome1, 256, stdin);

    printf("Escreva o segundo nome : ");
    fgets(nome2, 256, stdin);

    printf("\n");
    printf(": %s", nome1);
    printf(": %s", nome2);
    return 0;
}
