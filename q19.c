#include <stdio.h>

int main() {
    int dias;
    float salarioBruto;
    float desconto;
    float salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 30.0;
    desconto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - desconto;

    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}