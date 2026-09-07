// Questão 21:

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    // Versão 1: uma única chamada de printf()
    printf("Treinamento em programação.\nLinguagem C.\n");

    // Versão 2: uas instruções de impressão
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n");

    // Versão 3: frases emolduradas
    printf("\n");
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programação. \xBA\n");
    printf("\xBA Linguagem C.              \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    return 0;
}
