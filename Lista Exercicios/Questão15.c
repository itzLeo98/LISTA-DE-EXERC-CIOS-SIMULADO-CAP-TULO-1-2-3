/* Questão 15. Geração de Padrões Visuais com Laços Aninhados: Triângulo de Floyd — Escreva um
programa em C que leia um número inteiro positivo N e imprima N linhas do **Triângulo de Floyd**
utilizando laços aninhados. Por exemplo, para N = 5, a saída no console deve ser exatamente: */

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

#include <stdio.h>

int main() {
    int n, i, j, numero = 1;

    printf("Digite o numero de linhas do Triangulo de Floyd: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}