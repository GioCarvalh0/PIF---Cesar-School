#include <stdio.h>

int main() {
    int n;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%d", numero);

            if (j < i) {
                printf(" ");
            }

            numero++;
        }

        printf("\n");
    }

    return 0;
}