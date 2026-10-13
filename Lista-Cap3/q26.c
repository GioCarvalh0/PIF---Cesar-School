
#include <stdio.h>

int main(void) {
    int a, b, numero, divisor;
    int primo;
    long long int soma = 0;

    printf("Digite dois inteiros positivos A e B (A < B): ");

    if (scanf("%d %d", &a, &b) != 2 ||
        a <= 0 || b <= 0 || a >= b) {
        printf("Informe valores validos com A < B.\n");
        return 1;
    }

    printf("Numeros primos no intervalo [%d, %d]: ", a, b);

    for (numero = a; numero <= b; numero++) {
        primo = (numero > 1);

        for (divisor = 2;
             divisor * divisor <= numero && primo;
             divisor++) {

            if (numero % divisor == 0) {
                primo = 0;
            }
        }

        if (primo) {
            printf("%d ", numero);
            soma += numero;
        }
    }

    printf("\nSoma dos primos: %lld\n", soma);

    return 0;
}
