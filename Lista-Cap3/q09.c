
#include <stdio.h>

int main(void) {
    double valor, soma = 0.0;
    int quantidade = 0;

    while (1) {
        printf("Digite um valor positivo (negativo para encerrar): ");

        if (scanf("%lf", &valor) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (valor < 0.0) {
            break;
        }

        if (valor > 0.0) {
            soma += valor;
            quantidade++;
        }
    }

    printf("Quantidade de valores: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media: %.2f\n", soma / quantidade);
    } else {
        printf("Nao ha valores para calcular a media.\n");
    }

    return 0;
}
