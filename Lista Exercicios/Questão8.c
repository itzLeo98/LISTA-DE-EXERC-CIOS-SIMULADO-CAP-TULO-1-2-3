/* Questão 8. Cálculos Geométricos e Constantes com `<math.h>` — Desenvolva um programa em C
que solicite ao usuário o valor do raio R de uma esfera. Defina a constante PI como 3.14159265 e
calcule: a) A área da superfície da esfera (A = 4 * PI * R2); b) O volume da esfera (V = (4.0/3.0) * PI *
R3). Utilize a função pow() da biblioteca `<math.h>` e exiba os resultados formatados com 3 casas
decimais. Atenção para a divisão real de 4.0 por 3.0! */

#include <stdio.h>
#include <math.h>

int main() {
    double raio, area, volume;
    const double PI = 3.14159265;

    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    return 0;
}