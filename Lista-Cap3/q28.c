
#include <stdio.h>

int main(void) {
    int opcao;
    double salario, novoSalario, taxa;

    do {
        printf("\n=== MENU FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste salarial\n");
        printf("2. Retencao de imposto de renda\n");
        printf("3. Encerrar programa\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                printf("Digite o salario: R$ ");

                if (scanf("%lf", &salario) != 1 || salario < 0) {
                    printf("Salario invalido.\n");
                    return 1;
                }

                if (salario <= 2000.0) {
                    taxa = 0.15;
                } else {
                    taxa = 0.10;
                }

                novoSalario = salario * (1.0 + taxa);

                printf("Novo salario: R$ %.2f\n", novoSalario);
                break;

            case 2:
                printf("Digite o salario: R$ ");

                if (scanf("%lf", &salario) != 1 || salario < 0) {
                    printf("Salario invalido.\n");
                    return 1;
                }

                if (salario <= 3000.0) {
                    taxa = 0.08;
                } else {
                    taxa = 0.15;
                }

                novoSalario = salario * (1.0 - taxa);

                printf("Salario apos retencao: R$ %.2f\n",
                       novoSalario);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Escolha 1, 2 ou 3.\n");
        }

    } while (opcao != 3);

    return 0;
}
