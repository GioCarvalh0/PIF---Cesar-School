
#include <stdio.h>

int main(void) {
    int i;
    long long int soma = 0;

    for (i = 1; i <= 100; i++) {
        int quadrado = i * i;

        printf("%d -> %d\n", i, quadrado);

        soma += quadrado;
    }

    printf("Soma dos quadrados = %lld\n", soma);

    return 0;
}
