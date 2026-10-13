
#include <stdio.h>

int main(void) {
    int n, linha, coluna;
    int valor = 1;

    printf("Digite a quantidade de linhas: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Informe um numero inteiro positivo.\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d", valor++);

            if (coluna < linha) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
