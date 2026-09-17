#include <stdio.h>

int main() {
    float horasNormais;
    float horasExtras;
    float salarioBruto;
    float imposto;
    float salarioLiquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10.0) +
                   (horasExtras * 15.0);

    imposto = (salarioBruto > 12000.0)
              ? (salarioBruto - 12000.0) * 0.10
              : 0.0;

    salarioLiquido = salarioBruto - imposto;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}