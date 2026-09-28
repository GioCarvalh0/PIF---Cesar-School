#include <stdio.h>

int main() {
    int senha;
    int senhaSecreta = 2026;
    int tentativas = 0;
    int acesso = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            acesso = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acesso == 0) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}