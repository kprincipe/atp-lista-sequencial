#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float tri_base, tri_altura;
    float ret_base, ret_altura;
    float cir_raio;
    float tra_base1, tra_base2, tra_altura;
    float los_diagonal1, los_diagonal2;

    // declaracao de constante
    const float PI = 3.14;

    // entrada e saida de dados
    printf("Base do triangulo: ");
    scanf("%f", &tri_base);

    printf("Altura do triangulo: ");
    scanf("%f", &tri_altura);

    printf("Area do triangulo: %.2f\n", (tri_base * tri_altura) / 2);
    printf("--------------------------------\n");

    printf("Base do retangulo: ");
    scanf("%f", &ret_base);

    printf("Altura do retangulo: ");
    scanf("%f", &ret_altura);

    printf("Area do retangulo/quadrado: %.2f\n", ret_base * ret_altura);
    printf("--------------------------------\n");

    printf("Raio do circulo: ");
    scanf("%f", &cir_raio);

    printf("Area do circulo: %.2f\n", (PI * cir_raio) * (PI * cir_raio));
    printf("--------------------------------\n");
    
    printf("Base maior do trapezio: ");
    scanf("%f", &tra_base1);

    printf("Base menor do trapezio: ");
    scanf("%f", &tra_base2);

    printf("Altura do trapezio: ");
    scanf("%f", &tra_altura);

    printf("Area do trapezio: %.2f\n", (tra_base1 + tra_base2) * (tra_altura / 2));
    printf("--------------------------------\n");

    printf("Diagonal maior do losango: ");
    scanf("%f", &los_diagonal1);

    printf("Diagonal menor do losango: ");
    scanf("%f", &los_diagonal2);

    printf("Area do losango: %.2f\n", (los_diagonal1 * los_diagonal2) / 2);
    printf("--------------------------------\n");
    
    return 0;
}
