/* Questão 13. Cálculo do Fatorial com Tratamento do Zero e Tipo `long long int` — Escreva um
programa em C que solicite um número inteiro N e calcule o seu fatorial (N!). Lembre-se que 0! = 1 e 1!
= 1. O programa deve utilizar a variável do resultado como `long long int` com o especificador `%lld`
para evitar estouro de memória e tratar entradas inválidas (números negativos). */

#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: Nao existe fatorial de numero negativo!\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}