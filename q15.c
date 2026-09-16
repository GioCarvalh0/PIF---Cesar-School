#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float mediaSimples;
    float mediaPonderada;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    mediaPonderada =
        (nota1 * 1.0 + nota2 * 1.0 +
         nota3 * 2.0 + nota4 * 2.0) / 6.0;

    printf("Media aritmetica: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}