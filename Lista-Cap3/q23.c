
#include <stdio.h>

int main(void) {
    int lado, linha, coluna;

    printf("Digite o lado do quadrado (3 a 20): ");

    if (scanf("%d", &lado) != 1 || lado < 3 || lado > 20) {
        printf("Dimensao invalida.\n");
        return 1;
    }

    for (linha = 1; linha <= lado; linha++) {
        for (coluna = 1; coluna <= lado; coluna++) {
            if (linha == 1 || linha == lado ||
                coluna == 1 || coluna == lado) {
                printf("X");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
