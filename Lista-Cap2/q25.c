#include <stdio.h>

int main() {
    float salarioBase;
    float gratificacao;
    float imposto;
    float salarioLiquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}