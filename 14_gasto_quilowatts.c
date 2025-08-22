#include <stdio.h>

int main(void) {
    float salario_minimo, valor_quilowatt; // unidade em reais
    float valor_com_desconto, gasto_residencia = 0; // unidade em reais
    float quilowatts; // unidade em kW
    
    printf("Salario minimo vigente: ");
    if (scanf("%f", &salario_minimo) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }
    
    printf("Gasto de energia na residência (quilowatts): ");
    if (scanf("%f", &quilowatts) != 1) {
        fprintf(stderr, "Erro: entrada deve ser numerica\n");
    }
    
    valor_quilowatt = 0.2 * salario_minimo;          // (1/5) do salario minimo
    gasto_residencia = valor_quilowatt * quilowatts;
    valor_com_desconto = gasto_residencia * 0.85;    // 15% de desconto

    printf("\n");
    printf("Valor de 1kW: %.2f\n", valor_quilowatt);
    printf("Valor a ser pago: %.2f\n", valor_quilowatt * quilowatts);
    printf("Valor com desconto (5%): %.2f\n", valor_com_desconto);
    
    return 0;
}
