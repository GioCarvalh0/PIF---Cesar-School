
#include <stdio.h>

int main(void) {
    int valor, restante;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int i, quantidade;

    printf("Digite o valor inteiro do saque (R$): ");

    if (scanf("%d", &valor) != 1 || valor <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    if (valor % 2 != 0) {
        printf("Nao e possivel compor esse valor "
               "com as cedulas informadas.\n");
        return 1;
    }

    restante = valor;

    for (i = 0; i < 6; i++) {
        quantidade = 0;

        while (restante >= cedulas[i]) {
            restante -= cedulas[i];
            quantidade++;
        }

        if (quantidade > 0) {
            printf("%d cedula(s) de R$ %d\n",
                   quantidade, cedulas[i]);
        }
    }

    return 0;
}
