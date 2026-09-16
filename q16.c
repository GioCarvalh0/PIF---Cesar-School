#include <stdio.h>

int main() {
    int alturaDegrauCm;
    int alturaTotalM;
    int alturaTotalCm;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%d", &alturaDegrauCm);

    printf("Digite a altura total desejada em metros: ");
    scanf("%d", &alturaTotalM);

    alturaTotalCm = alturaTotalM * 100;

    quantidadeDegraus =
        (alturaTotalCm + alturaDegrauCm - 1) / alturaDegrauCm;

    printf("Numero minimo de degraus: %d\n", quantidadeDegraus);

    return 0;
}