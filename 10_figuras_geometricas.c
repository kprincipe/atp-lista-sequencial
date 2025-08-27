#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float tri_base, tri_altura;
    float ret_base, ret_altura;
    float cir_raio;
    float tra_base1, tra_base2, tra_altura;
    float los_diagonal1, los_diagonal2;

    float area_triangulo, area_retangulo, area_circulo, area_trapezio, area_losango;

    // declaracao de constante
    const float PI = 3.14;

    // entrada, processamento e saida de dados
    printf("Base do triangulo: ");
    scanf("%f", &tri_base);

    printf("Altura do triangulo: ");
    scanf("%f", &tri_altura);

    area_triangulo = (tri_base * tri_altura) / 2;
    
    printf("Area do triangulo: %.2f\n", area_triangulo);
    printf("--------------------------------\n");

    printf("Base do retangulo: ");
    scanf("%f", &ret_base);

    printf("Altura do retangulo: ");
    scanf("%f", &ret_altura);

    area_retangulo = ret_base * ret_altura;
    
    printf("Area do retangulo/quadrado: %.2f\n", area_retangulo);
    printf("--------------------------------\n");

    printf("Raio do circulo: ");
    scanf("%f", &cir_raio);

    area_circulo = PI * (cir_raio * cir_raio);
    
    printf("Area do circulo: %.2f\n", area_circulo);
    printf("--------------------------------\n");
    
    printf("Base maior do trapezio: ");
    scanf("%f", &tra_base1);

    printf("Base menor do trapezio: ");
    scanf("%f", &tra_base2);

    printf("Altura do trapezio: ");
    scanf("%f", &tra_altura);

    area_trapezio = (tra_base1 + tra_base2) * (tra_altura / 2);
    
    printf("Area do trapezio: %.2f\n", area_trapezio);
    printf("--------------------------------\n");

    printf("Diagonal maior do losango: ");
    scanf("%f", &los_diagonal1);

    printf("Diagonal menor do losango: ");
    scanf("%f", &los_diagonal2);

    area_losango = (los_diagonal1 * los_diagonal2) / 2;
    
    printf("Area do losango: %.2f\n", area_losango);
    printf("--------------------------------\n");
    
    return 0;
}
