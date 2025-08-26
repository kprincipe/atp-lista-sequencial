#include <stdio.h>

int main(void) {
    // declaracao das variaveis
    float a, b, c, d, e, f;
    float x, y;

    // entrada dos dados
    printf("Coeficiente A: ");
    scanf("%f", &a);

    printf("Coeficiente B: ");
    scanf("%f", &b);

    printf("Coeficiente C: ");
    scanf("%f", &c);

    printf("Coeficiente D: ");
    scanf("%f", &d);

    printf("Coeficiente E: ");
    scanf("%f", &e);

    printf("Coeficiente F: ");
    scanf("%f", &f);
    
    // processamento dos dados
    //      af - cd
    // x = ---------
    //      ae - bd
    

    //      ce - bf
    // y = ---------
    //      ae - bd
    
    x = ((c * e) - (b * f)) / ((a * e) - (b * d));
    y = ((a * f) - (c * d)) / ((a * e) - (b * d));

    // saida dos dados processados
    printf("\n");
    printf("------------------------\n");
    printf("    x = %.2f\n", x);
    printf("    y = %.2f\n", y);
    printf("------------------------\n");
    
    return 0;
}
