#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    float salario_minimo, valor_quilowatt; // unidade em reais
    float valor_com_desconto, gasto_residencia = 0; // unidade em reais
    float quilowatts; // unidade em kW

    // entrada de dados
    printf("Salario minimo vigente: ");
    scanf("%f", &salario_minimo);
    
    printf("Gasto de energia na residência (quilowatts): ");
    scanf("%f", &quilowatts);

    // processamento dos dados
    valor_quilowatt = 0.2 * salario_minimo;          // (1/5) do salario minimo
    gasto_residencia = valor_quilowatt * quilowatts;
    valor_com_desconto = gasto_residencia * 0.85;    // 15% de desconto

    // saida de dados processados
    printf("\n");
    printf("Valor de 1kW: %.2f\n", valor_quilowatt);
    printf("Valor a ser pago: %.2f\n", valor_quilowatt * quilowatts);
    printf("Valor com desconto (5%%): %.2f\n", valor_com_desconto);
    
    return 0;
}
