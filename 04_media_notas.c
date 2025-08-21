#include <stdio.h>

#define QTD_NOTAS 3

float media_aritm_notas(float *notas, unsigned int qtd_notas) {
    float media = 0;
    for (int i = 0; i < QTD_NOTAS; ++i) {
        media += notas[i];
    }
    media /= QTD_NOTAS;
    return media;
}

int main(void) {
    float notas[QTD_NOTAS] = {0};

    for (int i = 0; i < QTD_NOTAS; ++i) {
        printf("Nota %d: ", i + 1);
        if (scanf("%f", &notas[i]) != 1) {
            printf("Erro: entrada deve ser um numero\n");
            return 1;
        }
    }
    
    float nota_final = media_aritm_notas(notas, QTD_NOTAS);

    printf("Nota final: %f\n", nota_final);
    return 0;
}
