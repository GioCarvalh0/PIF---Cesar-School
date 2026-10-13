#include <stdio.h>

int main(void) {
    int i;

    printf("Versao com for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\nVersao com while:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nVersao com do-while:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");
    return 0;
}
/*
O for e a estrutura mais adequada neste caso,
pois sabemos o valor inicial, o limite e o incremento.
*/