#include <stdio.h>

int main(void) {
    float diagonal;
    
    printf("Digite a diagonal do quadrado: ");
    scanf("%f", &diagonal);

    printf("Area do quadrado: %.2f\n", diagonal * diagonal / 2);
    return 0;
}
