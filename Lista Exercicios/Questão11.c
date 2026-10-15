/* Questão 11. Cálculo Salarial com Gratificação e Impostos — Uma empresa contrata um técnico a R$
45,00 por dia trabalhado. Crie um programa em C que solicite o número de dias trabalhados, calcule o
salário bruto, adicione uma gratificação de 5% sobre o bruto e desconte 8% de imposto de renda
sobre o bruto. Ao final, exiba o holerite detalhado com o valor líquido a receber. */
 
#include <stdio.h>
int main() {
    int diasTrabalhados;
    double salarioBruto, gratificacao, impostoRenda, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * 45.0;
    gratificacao = salarioBruto * 0.05;
    impostoRenda = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - impostoRenda;

    printf("\n--- HOLERITE DETALHADO ---\n");
    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Gratificacao (5%%): + R$ %.2f\n", gratificacao);
    printf("Imposto de Renda (8%%): - R$ %.2f\n", impostoRenda);
    printf("Valor Liquido a Receber: R$ %.2f\n", salarioLiquido);

    return 0;
}