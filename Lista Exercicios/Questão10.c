/* Questão 10. Resto da Divisão (`%`) e Decomposição do Tempo — Desenvolva um programa em C
que receba uma quantidade inteira de segundos informada pelo usuário. O programa deve calcular e
exibir o tempo equivalente decomposto em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos). */

#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundosRestantes;

    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundosRestantes = totalSegundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           totalSegundos, horas, minutos, segundosRestantes);

    return 0;
}