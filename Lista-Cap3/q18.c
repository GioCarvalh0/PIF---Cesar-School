
#include <stdio.h>

int main(void) {
    long long int numero, invertido = 0;

    printf("Digite um numero inteiro positivo: ");

    if (scanf("%lld", &numero) != 1 || numero <= 0) {
        printf("Informe um numero inteiro positivo.\n");
        return 1;
    }

    while (numero > 0) {
        int digito = numero % 10;

        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Numero invertido: %lld\n", invertido);

    return 0;
}
