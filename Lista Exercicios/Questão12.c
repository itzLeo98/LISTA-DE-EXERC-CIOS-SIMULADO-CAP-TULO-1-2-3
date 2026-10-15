/* Questão 12. Validação de Entrada de Dados com Laço Garantido (`do-while`) — Escreva um
programa em C que solicite ao usuário uma nota válida no intervalo fechado de 0.0 a 10.0. Caso o
usuário digite um valor inválido (como -2.5 ou 11.0), o programa deve exibir uma mensagem de erro e
repetir a solicitação utilizando a estrutura `do-while`. O programa só deve encerrar quando uma nota
válida for digitada. */

#include <stdio.h>

int main() {
    double nota;

    do {
        printf("Digite uma nota valida (entre 0.0 e 10.0): ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: Nota invalida! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso: %.2f\n", nota);

    return 0;
}