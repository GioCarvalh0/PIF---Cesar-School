#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /*
       O valor inteiro associado ao caractere representa
       seu codigo na tabela ASCII.
    */

    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}