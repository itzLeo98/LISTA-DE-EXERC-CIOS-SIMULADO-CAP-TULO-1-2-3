/* Questão 14. Autenticação de Senha com Limite Finito de Tentativas — Desenvolva um sistema de
autenticação que defina uma senha numérica secreta (ex: 2026). O programa deve permitir que o
usuário tente digitar a senha no máximo 3 vezes usando um laço `while` ou `for`. Se acertar, exiba
'Acesso Concedido!' e encerre; se errar as 3 vezes, exiba 'Conta Bloqueada por Segurança!'. */

#include <stdio.h>

int main() {
    int senhaSecreta = 2026;
    int tentativa, tentativasRestantes = 3;
    int acessoPermitido = 0;

    while (tentativasRestantes > 0) {
        printf("Digite a senha (tentativas restantes: %d): ", tentativasRestantes);
        scanf("%d", &tentativa);

        if (tentativa == senhaSecreta) {
            acessoPermitido = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
            tentativasRestantes--;
        }
    }

    if (acessoPermitido) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}