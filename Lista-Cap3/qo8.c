
#include <stdio.h>

int main(void) {
    double nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");

        if (scanf("%lf", &nota) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota fora do intervalo permitido.\n");
        }

    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");

    return 0;
}
