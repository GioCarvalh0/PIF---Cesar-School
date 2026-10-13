
#include <stdio.h>

int main(void) {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um inteiro nao negativo (ate 20): ");

    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (n < 0) {
        printf("Erro: numero negativo nao possui fatorial.\n");
        return 1;
    }

    if (n > 20) {
        printf("Erro: valor acima do limite seguro.\n");
        return 1;
    }

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
