#include <stdio.h>

int main(void) {
    int x, y;
    
    printf("Primeiro termo: ");
    scanf("%d", &x);
    
    printf("Segundo termo: ");
    scanf("%d", &y);
    
    printf("Soma dos termos igual a %d\n", x + y);
    return 0;
}
