#include <stdio.h>

int main() {
    double nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Tente novamente.\n");
        }

    } while (nota < 0.0 || nota > 10.0);

    printf("Nota valida: %.1lf\n", nota);

    return 0;
}