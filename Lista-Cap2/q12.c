#include <stdio.h>

int main() {
    int numero;
    int antecessor;
    int sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    --antecessor;

    sucessor = numero;
    ++sucessor;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}