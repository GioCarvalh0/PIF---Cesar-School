// Questão 28:

#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    int numero3;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &numero3);

    media = (numero1 + numero2 + numero3) / 3.0;

    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}