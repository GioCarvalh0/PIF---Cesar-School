#include <stdio.h>

int main() {
    float velocidadeKmh;
    float velocidadeMs;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidadeKmh);

    velocidadeMs = velocidadeKmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidadeMs);

    return 0;
}