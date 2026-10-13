
#include <stdio.h>

int main(void) {
    const int senhaSecreta = 2026;
    int senha, tentativa;
    int acesso = 0;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha numerica: ");

        if (scanf("%d", &senha) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);

            acesso = 1;
            break;
        }

        printf("Senha incorreta.\n");
    }

    if (!acesso) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
