
#include <stdio.h>

int main(void) {
    int n, divisor;
    int quantidade = 0;

    printf("Digite um numero inteiro positivo: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (divisor = 1; divisor <= n; divisor++) {
        if (n % divisor == 0) {
            quantidade++;
        }
    }

    printf("Quantidade de divisores encontrados: %d\n",
           quantidade);

    if (n > 1 && quantidade == 2) {
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d nao e um numero primo.\n", n);
    }

    return 0;
}
