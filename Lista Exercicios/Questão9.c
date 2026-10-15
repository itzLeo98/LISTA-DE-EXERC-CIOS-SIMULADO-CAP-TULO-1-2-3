/* Questão 9. Geometria do Triângulo e Fórmula de Heron — Escreva um programa em C que leia os
comprimentos dos três lados (a, b, c) de um triângulo qualquer. Sabendo que o semiperímetro p é dado
por (a + b + c) / 2.0, calcule a área do triângulo utilizando a **Fórmula de Heron**: Area = sqrt(p * (p -
a) * (p - b) * (p - c)). Utilize a função sqrt() da biblioteca `<math.h>`. */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A area do triangulo e: %.3f\n", area);

    return 0;
}