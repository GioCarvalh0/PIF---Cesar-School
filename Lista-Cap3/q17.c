
#include <stdio.h>

int main(void) {
    double nota, soma = 0.0;
    double maior = 0.0, menor = 10.0;
    int quantidade = 0;

    while (1) {
        printf("Digite a nota (0 a 10; -1 para encerrar): ");

        if (scanf("%lf", &nota) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (nota == -1.0) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Digite de 0 a 10.\n");
            continue;
        }

        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        quantidade++;
    }

    printf("Total de alunos: %d\n", quantidade);

    if (quantidade > 0) {
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota valida foi informada.\n");
    }

    return 0;
}
