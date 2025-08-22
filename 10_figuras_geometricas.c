#include <stdio.h>
#include <stdlib.h>

enum Figura {
    TRIANGULO = 1,
    RETANGULO,
    TRAPEZIO,
    LOSANGO
};

void receber_numero(char *formatacao, float *valor) {
    if (scanf(formatacao, valor) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
        exit(1);
    }
}

int main(void) {
    unsigned int figura = 0;

    printf("(1) Triangulo\n");
    printf("(2) Quadrado/retangulo\n");
    printf("(3) Trapezio\n");
    printf("(4) Losango\n");
    printf("\n");
    printf("Selecione uma figura geometrica: ");
    
    if (scanf("%d", &figura) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica");
        return 1;
    }

    switch(figura) {
    case TRIANGULO:
        float base, altura;
        
        printf("Digite o valor da base: ");
        receber_numero("%f", &base);
        
        printf("Digite o valor da altura: ");
        receber_numero("%f", &altura);
        
        printf("\n");
        printf("Area do triangulo: %.2f\n", (base * altura) / 2);
        break;
    case RETANGULO:
        float lado1, lado2;

        printf("Digite o valor do lado 1: ");
        receber_numero("%f", &lado1);
        printf("Digite o valor do lado 2: ");
        receber_numero("%f", &lado2);

        printf("Area do retangulo: %.2f\n", lado1 * lado2);
        break;
    case TRAPEZIO:
        float base1, base2, altura_trap;
        
        printf("Digite o valor da base maior: ");
        receber_numero("%f", &base1);
        printf("Digite o valor da base menor: ");
        receber_numero("%f", &base2);
        printf("Digite a altura: ");
        receber_numero("%f", &altura_trap);

        printf("Area do trapezio: %.2f\n", (base1 + base2) * (altura_trap / 2));
        break;
    case LOSANGO:
        float diagonal1, diagonal2;
        
        printf("Digite o valor da diagonal maior: ");
        receber_numero("%f", &diagonal1);
        printf("Digite o valor da diagonal menor: ");
        receber_numero("%f", &diagonal2);

        printf("Area do trapezio: %.2f\n", (diagonal1 * diagonal2) / 2);
        break;
    default:
        printf("Erro: opcao invalida\n");
        return 1;
    }
    return 0;
}
