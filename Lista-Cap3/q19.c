
#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long int anterior = 0;
    unsigned long long int atual = 1;
    unsigned long long int proximo;

    printf("Digite a quantidade de termos (1 a 93): ");

    if (scanf("%d", &n) != 1 || n < 1 || n > 93) {
        printf("Informe um valor entre 1 e 93.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci:\n");

    for (i = 1; i <= n; i++) {
        printf("%llu", atual);

        if (i < n) {
            printf(" ");
        }

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("\n");

    printf("Termo %d: ", n);

    anterior = 0;
    atual = 1;

    for (i = 1; i < n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("%llu\n", atual);

    return 0;
}
